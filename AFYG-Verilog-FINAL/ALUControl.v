`timescale 1ns / 1ps

 module ALUControl( ALU_Control, ALUOp, Function);  
 output reg[5:0] ALU_Control;  
 input [2:0] ALUOp;  
 input [2:0] Function;  
 wire [5:0] ALUControlIn;  
 assign ALUControlIn = {ALUOp,Function};  
 always @(ALUControlIn)  
 casex (ALUControlIn)  
  6'b000xxx: ALU_Control=6'b010000;  // add,lw,sw
  6'b001xxx: ALU_Control=6'b010001;  // beq
  6'b010000: ALU_Control=6'b010000;  // add r-type
  6'b010001: ALU_Control=6'b010001;  // sub r-type
  6'b010010: ALU_Control=6'b010010;  // and r-type
  6'b010011: ALU_Control=6'b010011;  // or r-type
  6'b010100: ALU_Control=6'b010101;  // xor r-type
  6'b110xxx: ALU_Control=6'b110000;  // sll r-type
  6'b111xxx: ALU_Control=6'b110001;  // srl r-type
  6'b010xxx: ALU_Control=6'b110011;  // slt slti
  6'b010111: ALU_Control=6'b110011;  // slt slti
  6'b011110: ALU_Control=6'b010110;  // mult
  default: ALU_Control=6'b010000;  
  endcase  
 endmodule  
// Verilog code for JR control unit
module JR_Control( input[2:0] alu_op, 
       input [2:0] funct,
       output JRControl
    );
assign JRControl = ({alu_op,funct}==6'b111111) ? 1'b1 : 1'b0;
endmodule 