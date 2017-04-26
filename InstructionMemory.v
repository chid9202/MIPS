`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:34:57 04/12/2017 
// Design Name: 
// Module Name:    InstructionMemory 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module InstructionMemory(
input clk,
input [31:0] addr,
output reg [31:0] data
    );
reg [31:0] mem[255:0];

initial
begin
	mem[0] = 32'h002300AA;
	mem[1] = 32'h10000011;
	mem[2] = 32'h10654321;
	mem[3] = 32'h00100022;
	mem[4] = 32'h8C123456;
	mem[5] = 32'h8F123456;
	mem[6] = 32'hAD654321;
	mem[7] = 32'h13012345;
	mem[8] = 32'hAC654321;
	mem[9] = 32'h12012345;
	mem[10] = 32'h00000000; //sw
	mem[11] = 32'hAC000099; //sw
	mem[12] = 32'h8C000099; //lw
	mem[13] = 32'h10000011; //beq
	mem[14] = 32'h002300AA;
end

always @ (posedge clk)
data = mem[addr];
endmodule
