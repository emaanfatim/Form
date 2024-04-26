#pragma once

namespace Project132 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Classroomwise
	/// </summary>
	public ref class Classroomwise : public System::Windows::Forms::Form
	{
	public:
		Classroomwise(void)
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
		~Classroomwise()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(46, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(259, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Classroomwise Timetable";
			this->label1->Click += gcnew System::EventHandler(this, &Classroomwise::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Teacher :";
			this->label2->Click += gcnew System::EventHandler(this, &Classroomwise::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(23, 92);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Room#  :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(23, 118);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Course :";
			this->label4->Click += gcnew System::EventHandler(this, &Classroomwise::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(23, 147);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(58, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Section :";
			this->label5->Click += gcnew System::EventHandler(this, &Classroomwise::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(23, 173);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(38, 16);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Day :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(23, 205);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(44, 16);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Time :";
			this->label7->Click += gcnew System::EventHandler(this, &Classroomwise::label7_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(93, 59);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(160, 22);
			this->textBox1->TabIndex = 7;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(93, 92);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(160, 22);
			this->textBox2->TabIndex = 8;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(93, 120);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(160, 22);
			this->textBox3->TabIndex = 9;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(93, 148);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(160, 22);
			this->textBox4->TabIndex = 10;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(93, 176);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(160, 22);
			this->textBox5->TabIndex = 11;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(93, 204);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(160, 22);
			this->textBox6->TabIndex = 12;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(26, 265);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Classroomwise::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(124, 265);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Showdata";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Classroomwise::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(230, 265);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 15;
			this->button3->Text = L"Remove";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Classroomwise::button3_Click);
			// 
			// Classroomwise
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(372, 344);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Classroomwise";
			this->Text = L"Classroomwise";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ enteredName;
		String^ enteredRoom;
		String^ enteredCourse;
		String^ enteredSection;		
		String^ enteredDay;
		String^ enteredTime;
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->textBox1->Text->Trim() == "") {
		MessageBox::Show("Please enter name", "Validation", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else if (this->textBox2->Text->Trim() == "") {
		MessageBox::Show("Please enter room name", "Validation", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else if (this->textBox3->Text->Trim() == "") {
		MessageBox::Show("Please enter course name", "Validation", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else if (this->textBox4->Text->Trim() == "") {
		MessageBox::Show("Please enter Section", "Validation", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	
	else if (this->textBox5->Text->Trim() == "") {
		MessageBox::Show("Please enter day", "Validation", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else if (this->textBox6->Text->Trim() == "") {
		MessageBox::Show("Please enter time", "Validation", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		// Store the entered data in variables
		enteredName = this->textBox1->Text;
		enteredRoom = this->textBox2->Text;
		
		enteredCourse = this->textBox3->Text;
		enteredSection = this->textBox4->Text;
		enteredDay = this->textBox5->Text;
		enteredTime = this->textBox6->Text;
		MessageBox::Show("Data submitted successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ displayMessage = "Name: " + enteredName + "\n"
		+ "Room: " + enteredRoom + "\n"
		+ "Course: " + enteredCourse + "\n"
		+ "Section: " + enteredSection + "\n" + "Day: " + enteredDay + "\n"
		+ "Time: " + enteredTime;
	MessageBox::Show(displayMessage, "Data Entered", MessageBoxButtons::OK, MessageBoxIcon::Information);

	
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	enteredName = "";
	enteredRoom = "";
	enteredCourse = "";
	enteredSection = "";
	enteredDay = "";
	enteredTime = "";

	// Clear the text boxes after displaying the data
	this->textBox1->Text = "";
	this->textBox2->Text = "";
	this->textBox3->Text = "";
	this->textBox4->Text = "";
	this->textBox5->Text = "";
	this->textBox6->Text = "";


	MessageBox::Show("Data Removed", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
};
}
