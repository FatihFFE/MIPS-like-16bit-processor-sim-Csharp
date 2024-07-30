`timescale 1ns / 1ps
module alu(       
      input          [15:0]     a,          //src1  
      input          [15:0]     b,          //src2  
      input          [5:0]     alu_control,     //function sel  
      output     reg     [15:0]     result,          //result       
      output zero  
   );  
	 reg multiplier_sign, multiplicand_sign;
	 reg signed [5:0] multiplier, multiplicand, product_upper, product_lower;
	 reg signed [15:0] multiplier_temp, multiplicand_temp, product;
	 integer i; 
	
 always @(*)
 begin   
      case(alu_control)  
      6'b010000: result = a + b; // add  
      6'b010001: result = a - b; // sub  
      6'b010010: result = a & b; // and  
      6'b010011: result = a | b; // or   
      6'b010101: result = a ^ b; // xor
		6'b110011: begin if (a<b) result = 16'd1; // slt
                     else result = 16'd0;
                 end
		6'b110000: result = a << b; // sll
		6'b110001: result = a >> b; // srl
		
		6'b010110: begin	
						// keep sign values
						assign multiplier_sign = a[15];
						assign multiplicand_sign = b[15];
						
						// take two's complement if negative
						if (multiplier_sign == 1'b1)  
							assign multiplier_temp = ~a + 1;
						else
							assign multiplier_temp = a;
						
						if (multiplicand_sign == 1'b1) 
							assign multiplicand_temp = ~b + 1;
						else
							assign multiplicand_temp = b;
						
						// assign right 8 bit of multiplier to right 8 bit of product
						assign product = {{8{1'b0}},multiplier_temp[7:0]};
						assign multiplier = multiplier_temp[7:0];
						assign multiplicand = multiplicand_temp[7:0];
						assign product_lower = multiplier;
						assign product_upper = 8'b0;
						 
						for(i=0;i<8;i=i+1) 
						begin
							if (product[0]==1'b1) 
							begin
								assign product_upper = product_upper + multiplicand;
								assign product = {product_upper,product_lower};
							end
							
							assign product = product >> 1;
							assign product_upper = product[15:8];
							assign product_lower = product[7:0];
						end
						
						// set product sign
						if (multiplicand_sign ^ multiplier_sign) 
						begin 
							assign product = ~product + 1;
						end
							
						result = product;
					end
						
		//
		//
		default:result = a + b; // add  

      endcase  
 end  
 assign zero = (result==16'd0) ? 1'b1: 1'b0;  
 endmodule 