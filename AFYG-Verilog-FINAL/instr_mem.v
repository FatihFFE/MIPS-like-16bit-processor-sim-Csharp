`timescale 1ns / 1ps
module instr_mem          // a synthesisable rom implementation  
 (  
      input	[15:0]	pc,  
      output wire	[15:0]	instruction  
 );  
      wire [7 : 0] rom_addr = pc[8 : 1];   
      reg [15:0] rom[255:0];
		integer i;
		
		
      initial  
      begin
			for (i=0; i<256; i=i+1)
			begin
				rom[i] = 16'b0000000000000000;
			end
			/*	  
              addi $t0, $zero, 0   # $t0 = 0 (saya)
				  addi $t1, $zero, 5   # $t1 = 5 (dng limiti)
              jal loop             # loop fonksiyonuna git

              jump exit:           # Ana fonksiyona geri dnldnde program sonlandr

              loop:  beq $t0, $t1, end    # Eer $t0 == $t1 ise end etiketine git
              addi $t0, $t0, 1     # $t0 = $t0 + 1 (saya artr)
              jal loop             # loop fonksiyonuna tekrar git

              end: jr $ra
				  exit:
					*/

                rom[0] = 16'b0010001001000000;
                rom[1] = 16'b0010010010000101;
                rom[2] = 16'b1101000000000100;
                rom[3] = 16'b1100000000001000;
                rom[4] = 16'b0101010001000111;
                rom[5] = 16'b0010001001000001; 
                rom[6] = 16'b1101000000000100;
                rom[7] = 16'b0001111000000111;
                rom[8] = 16'b0000000000000000;
                rom[9] = 16'b0000000000000000;
                rom[10] = 16'b0000000000000000;
                rom[11] = 16'b0000000000000000;
                rom[12] = 16'b0000000000000000;
                rom[13] = 16'b0000000000000000;
                rom[14] = 16'b0000000000000000;
                rom[15] = 16'b0000000000000000;
      end  
      assign instruction = (pc[15:0] < 512 )? rom[rom_addr[7:0]]: 16'd0;  
 endmodule   