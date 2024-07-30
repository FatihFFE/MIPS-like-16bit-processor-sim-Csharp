`timescale 1ns / 1ps
module control( input[3:0] opcode,  
                           input reset,  
                           output reg[1:0] reg_dst,mem_to_reg,  
                           output reg jump, branch, mem_read, mem_write,
									alu_src, reg_write, sign_or_zero,    
								   output reg[2:0] alu_op
   );  
 always @(*)  
 begin  
      if(reset == 1'b1) begin  
                reg_dst = 2'b00;  
                mem_to_reg = 2'b00;  
                alu_op = 3'b000;  
                jump = 1'b0;  
                branch = 1'b0;  
                mem_read = 1'b0;  
                mem_write = 1'b0;  
                alu_src = 1'b0;  
                reg_write = 1'b0;  
                sign_or_zero = 1'b1;  
      end  
      else begin  
      case(opcode)   
      4'b0000: begin // add  
                reg_dst = 2'b01;  
                mem_to_reg = 2'b00;  
                alu_op = 3'b010;  
                jump = 1'b0;  
                branch = 1'b0;  
                mem_read = 1'b0;  
                mem_write = 1'b0;  
                alu_src = 1'b0;  
                reg_write = 1'b1;  
                sign_or_zero = 1'b1;  
                end 	
		4'b1111: begin // slt - slti  
                reg_dst = 2'b00;  
                mem_to_reg = 2'b00;  
                alu_op = 3'b010;  
                jump = 1'b0;  
                branch = 1'b0;  
                mem_read = 1'b0;  
                mem_write = 1'b0;  
                alu_src = 1'b1;  
                reg_write = 1'b1;  
                sign_or_zero = 1'b0;  
                end 
      4'b1100: begin // j  
                reg_dst = 2'b00;  
                mem_to_reg = 2'b00;  
                alu_op = 3'b000;  
                jump = 1'b1;  
                branch = 1'b0;  
                mem_read = 1'b0;  
                mem_write = 1'b0;  
                alu_src = 1'b0;  
                reg_write = 1'b0;  
                sign_or_zero = 1'b1;  
                end  
      4'b1101: begin // jal  
                reg_dst = 2'b10;  
                mem_to_reg = 2'b10;  
                alu_op = 3'b000;  
                jump = 1'b1;  
                branch = 1'b0;  
                mem_read = 1'b0;  
                mem_write = 1'b0;  
                alu_src = 1'b0;  
                reg_write = 1'b1;  
                sign_or_zero = 1'b1;  
                end  
      4'b1000: begin // lw  
                reg_dst = 2'b00;  
                mem_to_reg = 2'b01;  
                alu_op = 3'b000;  
                jump = 1'b0;  
                branch = 1'b0;  
                mem_read = 1'b1;  
                mem_write = 1'b0;  
                alu_src = 1'b1;  
                reg_write = 1'b1;  
                sign_or_zero = 1'b1;  
                end  
      4'b1010: begin // sw  
                reg_dst = 2'b00;  
                mem_to_reg = 2'b00;  
                alu_op = 3'b000;  
                jump = 1'b0;  
                branch = 1'b0;  
                mem_read = 1'b0;  
                mem_write = 1'b1;  
                alu_src = 1'b1;  
                reg_write = 1'b0;  
                sign_or_zero = 1'b1;  
                end  
      4'b0101: begin // beq  
                reg_dst = 2'b00;  
                mem_to_reg = 2'b00;  
                alu_op = 3'b001;  
                jump = 1'b0;  
                branch = 1'b1;  
                mem_read = 1'b0;  
                mem_write = 1'b0;  
                alu_src = 1'b0;  
                reg_write = 1'b0;  
                sign_or_zero = 1'b1;  
                end  
      4'b0010: begin // addi  
                reg_dst = 2'b00;  
                mem_to_reg = 2'b00;  
                alu_op = 3'b000;  
                jump = 1'b0;  
                branch = 1'b0;  
                mem_read = 1'b0;  
                mem_write = 1'b0;  
                alu_src = 1'b1;  
                reg_write = 1'b1;  
                sign_or_zero = 1'b1;  
                end  
		4'b0011: begin // andi  
                reg_dst = 2'b00;  
                mem_to_reg = 2'b00;  
                alu_op = 3'b011;  
                jump = 1'b0;  
                branch = 1'b0;  
                mem_read = 1'b0;  
                mem_write = 1'b0;  
                alu_src = 1'b1;  
                reg_write = 1'b1;  
                sign_or_zero = 1'b1;  
                end
		4'b0100: begin // ori  
                reg_dst = 2'b00;
					 alu_src = 1'b1;  
                mem_to_reg = 2'b00;
                reg_write = 1'b1;	
                mem_read = 1'b0;  
                mem_write = 1'b0;  
                branch = 1'b0;  
                jump = 1'b0;  
                alu_op = 3'b101;  
                sign_or_zero = 1'b1;
                end
		4'b0001: begin // jr  
                reg_dst = 2'b01;
					 alu_src = 1'b0;  
                mem_to_reg = 2'b00;
                reg_write = 1'b0;	
                mem_read = 1'b0;  
                mem_write = 1'b0;  
                branch = 1'b0;  
                jump = 1'b0;  
                alu_op = 3'b111;  
                sign_or_zero = 1'b1;
                end
		4'b0001: begin // mult  
                reg_dst = 2'b01;
					 alu_src = 1'b0;  
                mem_to_reg = 2'b00;
                reg_write = 1'b1;	
                mem_read = 1'b0;  
                mem_write = 1'b0;  
                branch = 1'b0;  
                jump = 1'b0;  
                alu_op = 3'b011;  
                sign_or_zero = 1'b1;
                end
		4'b1001: begin // sll  
                reg_dst = 2'b01;
					 alu_src = 1'b0;  
                mem_to_reg = 2'b00;
                reg_write = 1'b1;	
                mem_read = 1'b0;  
                mem_write = 1'b0;  
                branch = 1'b0;  
                jump = 1'b0;  
                alu_op = 3'b110;  
                sign_or_zero = 1'b1;
                end
		/* 4'b0110: begin // bne  
                reg_dst = 2'b00;
					 alu_src = 1'b0;  
                mem_to_reg = 2'b00;
                reg_write = 1'b0;	
                mem_read = 1'b0;  
                mem_write = 1'b0;  
                branch = 1'b1;  
                jump = 1'b0;  
                alu_op = 3'b001;  
                sign_or_zero = 1'b1;
                end */
      default: begin  
                reg_dst = 2'b01;  
                mem_to_reg = 2'b00;  
                alu_op = 3'b010;  
                jump = 1'b0;  
                branch = 1'b0;  
                mem_read = 1'b0;  
                mem_write = 1'b0;  
                alu_src = 1'b0;  
                reg_write = 1'b1;  
                sign_or_zero = 1'b1;  
                end  
      endcase  
      end  
 end  
 endmodule  