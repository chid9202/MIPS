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
	mem[0] = 32'hA00000AA;
	mem[1] = 32'h10000011;
	mem[2] = 32'h20000022;
	mem[3] = 32'h30000033;
	mem[4] = 32'h40000044;
	mem[5] = 32'h50000055;
	mem[6] = 32'h60000066;
	mem[7] = 32'h70000077;
	mem[8] = 32'h80000088;
	mem[9] = 32'h90000099;
	mem[10] = 32'h00000000; //sw
	mem[11] = 32'hAC000099; //sw
	mem[12] = 32'h8C000099; //lw
	mem[13] = 32'h10000011; //beq
	mem[14] = 32'h002300AA;
end

always @ (posedge clk)
data = mem[addr];
endmodule
