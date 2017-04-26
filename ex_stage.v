`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:12:40 04/26/2017 
// Design Name: 
// Module Name:    EX_stage 
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
module EX_stage(
	input clk, 
	input wire [1:0]  wb_ctlout,
	input wire [2:0]  m_ctlout,
	input wire [3:0]  ex_ctlout,
	input wire [31:0]  npcout,
	input wire [31:0]  rdata1out,
	input wire [31:0]  rdata2out,
	input wire [31:0]  s_extendout,
	input wire [4:0]  instrout_2016,
	input wire [4:0]  instrout_1511,
	

	
	output wire [1:0]  EX_MEM_wb_ctlout,
	output wire [2:0]  EX_MEM_m_ctlout,
	output wire [31:0] EX_MEM_add_result, 
	output wire   	    EX_MEM_zero,
	output wire [31:0] EX_MEM_alu_result, 
	output wire [31:0] EX_MEM_rdata2out, 
	output wire [4:0]  EX_MEM_five_bit_muxout
    );

wire [2:0] w1;
wire [5:0] w2;
wire [31:0] w3;

EX_adder ex_adder(. add_in1( ), .add_in2( ), .add_out(w3));



alu_control alu_control_ex(.funct(s_extendout[5:0]), .alu_op(),.select(w1));
   
alu(.A(), .B(), .control( w1), .zero(), .result());



mux_all mux_32( .a(), .b(), .sel(), .y()); 

mux_all #(5) mux_5(	 .a(instrout_2016), .b(instrout_1511), .sel(ex_ctlout[3]), .y(w2));

EX_MEM_register EX_MEM_register(clk, .ctlwb_out(), .ctlm_out(), .adder_out(),
	   .aluzero( ), .aluout(w3),
	.readdat2() , 
	. muxout(w2),
	
	.wb_ctlout, .m_ctlout,.add_result, 
	.zero(), .alu_result(), .rdata2out( ), 
	.five_bit_muxout() )	 ;

endmodule
