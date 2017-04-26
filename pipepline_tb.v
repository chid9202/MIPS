`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:26:54 04/19/2017
// Design Name:   pipeline
// Module Name:   C:/Users/004173090/pipeline/pipepline_tb.v
// Project Name:  pipeline
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: pipeline
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module pipepline_tb;

	// Inputs
	reg clk;
	reg PCSrc;
	reg [31:0] EX_MEM_latch;
	reg regwrite;
	reg [31:0] writedata;

	// Outputs
	wire [1:0] WB_ctrl;
	wire [2:0] Mem_ctrl;
	wire [3:0] EX_ctrl;
	wire [31:0] EX_adder;
	wire [31:0] EX_ALU;
	wire [31:0] EXMux0_latch;
	wire [31:0] IR_out;
	wire [4:0] EXMux0;
	wire [4:0] EXMux1;

	// Instantiate the Unit Under Test (UUT)
	pipeline uut (
		.clk(clk), 
		.PCSrc(PCSrc), 
		.EX_MEM_latch(EX_MEM_latch), 
		.regwrite(regwrite), 
		.writedata(writedata), 
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
	always #10 clk = !clk;
	initial begin
		// Initialize Inputs
		clk = 0;
		PCSrc = 0;
		EX_MEM_latch = 0;
		regwrite = 0;
		writedata = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

