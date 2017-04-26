`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:25:29 04/19/2017 
// Design Name: 
// Module Name:    pipeline 
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
module pipeline( 
input clk,
input PCSrc,
input [31:0] EX_MEM_latch,
input regwrite,
input [31:0] writedata,
output [1:0] WB_ctrl,
output [2:0] Mem_ctrl,
output [3:0] EX_ctrl,
output [31:0] EX_adder,
output [31:0] EX_ALU,
output [31:0] EXMux0_latch,
output [31:0] IR_out,
output [4:0]  EXMux0,
output [4:0]  EXMux1
    );
wire [31:0] w1,w2;

IF_stage if_stage(.clk(clk),
.PCSrc(PCSrc),
.EX_MEM_latch(EX_MEM_latch),
.ID_EX_latch(w1),
.IR(w2)
);

ID_stage id_stage(.clk(clk), 
.IR(w2),
.RegWrite(regwrite),
.writedata(writedata),
.IF_ID_latch(w1),
.WB_ctrl(WB_ctrl),
.Mem_ctrl(Mem_ctrl),
.EX_ctrl(EX_ctrl),
.EX_adder(EX_adder),
.EX_ALU(EX_ALU),
.EXMux0_latch(EXMux0_latch),
.IR_out(IR_out),
.EXMux0(EXMux0),
.EXMux1(EXMux1)
    );
endmodule
