#include <stdio.h>      // Include file for printf
#include <conio.h>      // Include file for _getch/kbhit 
#include <windows.h>    // Include file for Win32 time functions
#include "nixnet.h"     // Include file for XNET functions

#include <iostream>
#include <stdlib.h>
#include <ctype.h>

using namespace System::Runtime::InteropServices;

using namespace std;
#pragma once
#define NUMFRAMES 2
//=============================================================================
// Static global variables .
//=============================================================================  
static nxSessionRef_t  g_SessionRef;

//=============================================================================
// Global variables
//=============================================================================  
//Error status
nxStatus_t g_Status = 0;

//=============================================================================
// Global functions declerations 
//============================================================================= 
bool PrintStat(nxStatus_t l_status, char *source);
void SendCAN();
u8 convertToHex(System::String^ val);

namespace GUI_4499 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::GroupBox^  groupBox7;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::GroupBox^  groupBox8;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::GroupBox^  groupBox9;
	private: System::Windows::Forms::TextBox^  textBox18;
	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>

		void InitializeComponent(void)
		{
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox9->SuspendLayout();
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"CAN1", L"CAN2" });
			this->comboBox1->Location = System::Drawing::Point(13, 13);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(151, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Send";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->AcceptsReturn = true;
			this->textBox1->AcceptsTab = true;
			this->textBox1->Location = System::Drawing::Point(13, 201);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(769, 128);
			this->textBox1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 182);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Status";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Location = System::Drawing::Point(155, 67);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(71, 51);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Byte1";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(34, 20);
			this->textBox3->MaxLength = 1;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(21, 20);
			this->textBox3->TabIndex = 1;
			this->textBox3->Text = L"F";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(7, 20);
			this->textBox2->MaxLength = 1;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(21, 20);
			this->textBox2->TabIndex = 0;
			this->textBox2->Text = L"F";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Location = System::Drawing::Point(234, 67);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(71, 51);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Byte2";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(34, 20);
			this->textBox4->MaxLength = 1;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(21, 20);
			this->textBox4->TabIndex = 1;
			this->textBox4->Text = L"F";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(7, 20);
			this->textBox5->MaxLength = 1;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(21, 20);
			this->textBox5->TabIndex = 0;
			this->textBox5->Text = L"F";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->textBox6);
			this->groupBox3->Controls->Add(this->textBox7);
			this->groupBox3->Location = System::Drawing::Point(311, 67);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(71, 51);
			this->groupBox3->TabIndex = 6;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Byte3";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(34, 20);
			this->textBox6->MaxLength = 1;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(21, 20);
			this->textBox6->TabIndex = 1;
			this->textBox6->Text = L"F";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(7, 20);
			this->textBox7->MaxLength = 1;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(21, 20);
			this->textBox7->TabIndex = 0;
			this->textBox7->Text = L"F";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->textBox8);
			this->groupBox4->Controls->Add(this->textBox9);
			this->groupBox4->Location = System::Drawing::Point(388, 67);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(71, 51);
			this->groupBox4->TabIndex = 7;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Byte4";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(34, 20);
			this->textBox8->MaxLength = 1;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(21, 20);
			this->textBox8->TabIndex = 1;
			this->textBox8->Text = L"F";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(7, 20);
			this->textBox9->MaxLength = 1;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(21, 20);
			this->textBox9->TabIndex = 0;
			this->textBox9->Text = L"F";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->textBox10);
			this->groupBox5->Controls->Add(this->textBox11);
			this->groupBox5->Location = System::Drawing::Point(465, 67);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(71, 51);
			this->groupBox5->TabIndex = 7;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Byte5";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(34, 20);
			this->textBox10->MaxLength = 1;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(21, 20);
			this->textBox10->TabIndex = 1;
			this->textBox10->Text = L"F";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(7, 20);
			this->textBox11->MaxLength = 1;
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(21, 20);
			this->textBox11->TabIndex = 0;
			this->textBox11->Text = L"F";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->textBox12);
			this->groupBox6->Controls->Add(this->textBox13);
			this->groupBox6->Location = System::Drawing::Point(542, 67);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(71, 51);
			this->groupBox6->TabIndex = 7;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Byte6";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(34, 20);
			this->textBox12->MaxLength = 1;
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(21, 20);
			this->textBox12->TabIndex = 1;
			this->textBox12->Text = L"F";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(7, 20);
			this->textBox13->MaxLength = 1;
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(21, 20);
			this->textBox13->TabIndex = 0;
			this->textBox13->Text = L"F";
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->textBox14);
			this->groupBox7->Controls->Add(this->textBox15);
			this->groupBox7->Location = System::Drawing::Point(619, 67);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(71, 51);
			this->groupBox7->TabIndex = 7;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Byte7";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(34, 20);
			this->textBox14->MaxLength = 1;
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(21, 20);
			this->textBox14->TabIndex = 1;
			this->textBox14->Text = L"F";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(7, 20);
			this->textBox15->MaxLength = 1;
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(21, 20);
			this->textBox15->TabIndex = 0;
			this->textBox15->Text = L"F";
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->textBox16);
			this->groupBox8->Controls->Add(this->textBox17);
			this->groupBox8->Location = System::Drawing::Point(696, 67);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(71, 51);
			this->groupBox8->TabIndex = 7;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Byte8";
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(34, 20);
			this->textBox16->MaxLength = 1;
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(21, 20);
			this->textBox16->TabIndex = 1;
			this->textBox16->Text = L"F";
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(7, 20);
			this->textBox17->MaxLength = 1;
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(21, 20);
			this->textBox17->TabIndex = 0;
			this->textBox17->Text = L"F";
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->textBox18);
			this->groupBox9->Location = System::Drawing::Point(16, 67);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(118, 51);
			this->groupBox9->TabIndex = 8;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"ArbitrationId";
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(7, 20);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(100, 20);
			this->textBox18->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(794, 341);
			this->Controls->Add(this->groupBox9);
			this->Controls->Add(this->groupBox8);
			this->Controls->Add(this->groupBox7);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->Name = L"MyForm";
			this->Text = L" ";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox9->ResumeLayout(false);
			this->groupBox9->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		/*if (button1->Text == "Start"){
			button1->Text = "Stop";
		}
		else {
			button1->Text = "Start";
		}*/
		// Declare all variables for function 

		char *l_pSelectedInterface = (char*)(void*)Marshal::StringToHGlobalAnsi(comboBox1->Text);
		char *l_pSelectedDatabase = ":memory:";
		char *l_pSelectedCluster = "";
		u32 l_baud = 125000;

		// Display parameters that will be used for the example.
		textBox1->AppendText("\n");
		textBox1->AppendText("\n");
		textBox1->AppendText("\\***************************************************\\\n");
		textBox1->AppendText("Interface: " + gcnew String(l_pSelectedInterface) + "\n");
		textBox1->AppendText("Database: " + gcnew String(l_pSelectedDatabase) + "\n");
		textBox1->AppendText("Baudrate: " + l_baud + "\n");

		//cout << "Interface: " << l_pSelectedInterface << endl;
		//printf("Interface: %s\n", l_pSelectedInterface);
		//printf("Database: %s\n", l_pSelectedDatabase);

		// Create an xnet session for Signal Input 
		g_Status = nxCreateSession(l_pSelectedDatabase, l_pSelectedCluster, "",
			l_pSelectedInterface, nxMode_FrameOutStream, &g_SessionRef);

		bool success = true;
		if (nxSuccess != g_Status)
		{
			success = PrintStat(g_Status, "nxCreateSession");
		}
		

		if (success) {
			textBox1->AppendText("Session Created Sucessfully.\n");
			//printf("Session Created Sucessfully.\n");
		}
		else {
			return;
		}

		g_Status = nxSetProperty(g_SessionRef, nxPropSession_IntfBaudRate,
			sizeof(u32), &l_baud);
		if (nxSuccess != g_Status)
		{
			success = PrintStat(g_Status, "nxSetProperty");
		}

		if (success){

		} 

		// Clear the xnet session 
		g_Status = nxClear(g_SessionRef);
		if (nxSuccess != g_Status)
		{
			bool Ecatch = PrintStat(g_Status, "nxClear");
		}

		//exit(0);
	}

	//=============================================================================  
	// Convert arbId to numeric value
	//============================================================================= 
	private: u32 convertArbIdToHex(System::String^ val){
		char * character = (char*)(void*)Marshal::StringToHGlobalAnsi(val);
		u32 total = 0;
		for (int i = strlen(character) - 1; i >= 0; i--){
			char first = toupper(character[i]);
			if (isdigit(first)){
				total += (u32)first;
			}
			else {
				if (first >= 'A' && first <= 'F'){
					total += (u32)(10 + first - 'A');
				}
				else {
					total += (u32)0;
				}
			}
		}

		return total;
	}

	//=============================================================================  
	// Convert payload to numeric value
	//============================================================================= 
	private: u8 convertToHex(System::String^ val){
		char * character = (char*)(void*)Marshal::StringToHGlobalAnsi(val);
		char first = toupper(character[0]);
		if (isdigit(first)){
			return (u8)first;
		}
		else {
			if (first >= 'A' && first <= 'F'){
				return (u8)(10 + first - 'A');
			}
			else {
				return (u8)0;
			}
		}
	}

	//=============================================================================  
	// Display Error Function 
	//============================================================================= 
	private: bool PrintStat(nxStatus_t l_status, char *source)
	{
		char statusString[1024];

		if (nxSuccess != l_status)
		{
			nxStatusToString(l_status, sizeof(statusString), statusString);
			textBox1->AppendText("NI-XNET Status: " + gcnew String(statusString));
			nxClear(g_SessionRef);
			//printf("\nPress any key to quit\n");
			//_getch();
			//exit(1);
			return false;
		}

		return true;
	}

	//=============================================================================  
	// Send message
	//============================================================================= 
	private: void SendCAN()
	{
		int i = 0;
		u8 l_MyBuffer[40000];
		nxFrameVar_t * l_MyFramePtr;
		u32 l_MyNumberOfBytesForFrames = 0;
		l_MyFramePtr = (nxFrameVar_t*)l_MyBuffer;

		//Here we set each of the frames parameters.
		//There are ways to programmatically get these parameters using 
		//the objects properties
		l_MyFramePtr->Timestamp = 0;
		l_MyFramePtr->Flags = 0;
		l_MyFramePtr->Identifier = convertArbIdToHex(textBox18->Text);
		l_MyFramePtr->Type = nxFrameType_CAN_Data;
		l_MyFramePtr->PayloadLength = 8;

		l_MyFramePtr->Payload[0] = 16 * convertToHex(textBox2->Text) + convertToHex(textBox3->Text);
		l_MyFramePtr->Payload[1] = 16 * convertToHex(textBox4->Text) + convertToHex(textBox5->Text);
		l_MyFramePtr->Payload[2] = 16 * convertToHex(textBox6->Text) + convertToHex(textBox7->Text);
		l_MyFramePtr->Payload[3] = 16 * convertToHex(textBox8->Text) + convertToHex(textBox9->Text);
		l_MyFramePtr->Payload[4] = 16 * convertToHex(textBox10->Text) + convertToHex(textBox11->Text);
		l_MyFramePtr->Payload[5] = 16 * convertToHex(textBox12->Text) + convertToHex(textBox13->Text);
		l_MyFramePtr->Payload[6] = 16 * convertToHex(textBox14->Text) + convertToHex(textBox15->Text);
		l_MyFramePtr->Payload[7] = 16 * convertToHex(textBox16->Text) + convertToHex(textBox17->Text);

		//for (i = 0; i<8; i++)
		//{
		//	l_MyFramePtr->Payload[i] = i;
		//}

		//Iterate the pointer to the next frame
		l_MyFramePtr = nxFrameIterate(l_MyFramePtr);

		l_MyFramePtr->Timestamp = 0;
		l_MyFramePtr->Flags = 0;
		l_MyFramePtr->Identifier = convertArbIdToHex(textBox18->Text);;
		l_MyFramePtr->Type = nxFrameType_CAN_Data;
		l_MyFramePtr->PayloadLength = 2;

		l_MyFramePtr->Payload[0] = 16 * convertToHex(textBox2->Text) + convertToHex(textBox3->Text);
		l_MyFramePtr->Payload[1] = 16 * convertToHex(textBox4->Text) + convertToHex(textBox5->Text);

		/*for (i = 0; i<2; i++)
		{
			l_MyFramePtr->Payload[i] = i;
		}*/

		//Get the actual size of the buffer used
		l_MyFramePtr = nxFrameIterate(l_MyFramePtr);
		l_MyNumberOfBytesForFrames = ((u8 *)l_MyFramePtr - (u8 *)l_MyBuffer);

		g_Status = nxWriteFrame(g_SessionRef, l_MyBuffer,
			l_MyNumberOfBytesForFrames, 10);
		if (nxSuccess != g_Status)
		{
			bool Ecatch = PrintStat(g_Status, "nxWriteFrame");
		}
	
	}

};
}
