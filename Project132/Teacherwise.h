#pragma once

namespace Project132 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Teacherwise
	/// </summary>
	public ref class Teacherwise : public System::Windows::Forms::Form
	{
	public:
		Teacherwise(void)
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
		~Teacherwise()
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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ Add;
	private: System::Windows::Forms::Button^ Showdata;
	private: System::Windows::Forms::Button^ Remove;


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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->Add = (gcnew System::Windows::Forms::Button());
			this->Showdata = (gcnew System::Windows::Forms::Button());
			this->Remove = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(27, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(236, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"TeacherWiseTimetable";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(29, 71);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Name :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(29, 103);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(50, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Room :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(29, 129);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(38, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Day :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(29, 159);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Time :";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(94, 71);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(134, 22);
			this->textBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(94, 103);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(134, 22);
			this->textBox2->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(94, 131);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(134, 22);
			this->textBox3->TabIndex = 7;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(94, 159);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(134, 22);
			this->textBox4->TabIndex = 8;
			// 
			// Add
			// 
			this->Add->Location = System::Drawing::Point(32, 233);
			this->Add->Name = L"Add";
			this->Add->Size = System::Drawing::Size(75, 23);
			this->Add->TabIndex = 9;
			this->Add->Text = L"Add";
			this->Add->UseVisualStyleBackColor = true;
			this->Add->Click += gcnew System::EventHandler(this, &Teacherwise::Add_Click);
			// 
			// Showdata
			// 
			this->Showdata->Location = System::Drawing::Point(144, 233);
			this->Showdata->Name = L"Showdata";
			this->Showdata->Size = System::Drawing::Size(75, 26);
			this->Showdata->TabIndex = 10;
			this->Showdata->Text = L"Showdata";
			this->Showdata->UseVisualStyleBackColor = true;
			this->Showdata->Click += gcnew System::EventHandler(this, &Teacherwise::button2_Click);
			// 
			// Remove
			// 
			this->Remove->Location = System::Drawing::Point(241, 233);
			this->Remove->Name = L"Remove";
			this->Remove->Size = System::Drawing::Size(75, 26);
			this->Remove->TabIndex = 11;
			this->Remove->Text = L"Remove";
			this->Remove->UseVisualStyleBackColor = true;
			this->Remove->Click += gcnew System::EventHandler(this, &Teacherwise::Remove_Click);
			// 
			// Teacherwise
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(365, 352);
			this->Controls->Add(this->Remove);
			this->Controls->Add(this->Showdata);
			this->Controls->Add(this->Add);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Teacherwise";
			this->Text = L"Teacherwise";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		String^ enteredName;
		String^ enteredRoom;
		String^ enteredDay;
		String^ enteredTime;

#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ displayMessage = "Name: " + enteredName + "\n"
			+ "Room: " + enteredRoom + "\n"
			+ "Day: " + enteredDay + "\n"
			+ "Time: " + enteredTime;
		MessageBox::Show(displayMessage, "Data Entered", MessageBoxButtons::OK, MessageBoxIcon::Information);

		// Clear the text boxes after displaying the data
		
	}
private: System::Void Add_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->textBox1->Text->Trim() == "") {
		MessageBox::Show("Please enter name", "Validation", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else if (this->textBox2->Text->Trim() == "") {
		MessageBox::Show("Please enter room name", "Validation", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else if (this->textBox3->Text->Trim() == "") {
		MessageBox::Show("Please enter day", "Validation", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else if (this->textBox4->Text->Trim() == "") {
		MessageBox::Show("Please enter time", "Validation", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		// Store the entered data in variables
		enteredName = this->textBox1->Text;
		enteredRoom = this->textBox2->Text;
		enteredDay = this->textBox3->Text;
		enteredTime = this->textBox4->Text;

		MessageBox::Show("Data submitted successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void Remove_Click(System::Object^ sender, System::EventArgs^ e) {
	enteredName = "";
	enteredRoom = "";
	enteredDay = "";
	enteredTime = "";
	this->textBox1->Text = "";
	this->textBox2->Text = "";
	this->textBox3->Text = "";
	this->textBox4->Text = "";

	MessageBox::Show("Data Removed", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
};
}
