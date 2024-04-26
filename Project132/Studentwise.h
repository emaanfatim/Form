#pragma once

namespace Project132 {

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
        
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Button^ Add;
    private: System::Windows::Forms::Label^ nameLabel;
    private: System::Windows::Forms::Label^ courseLabel;
    private: System::Windows::Forms::Label^ dayLabel;
    private: System::Windows::Forms::Button^ Remove;




    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::TextBox^ textBox3;
    private: System::Windows::Forms::Label^ timeLabel;
    private: System::Windows::Forms::TextBox^ textBox4;
    private: System::Windows::Forms::Button^ Showdata;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::TextBox^ textBox5;

    protected:

    private:
        /// <summary>
        /// Required designer variable.
        /// </summary>
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        void InitializeComponent(void)
        {
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->Add = (gcnew System::Windows::Forms::Button());
            this->nameLabel = (gcnew System::Windows::Forms::Label());
            this->courseLabel = (gcnew System::Windows::Forms::Label());
            this->dayLabel = (gcnew System::Windows::Forms::Label());
            this->Remove = (gcnew System::Windows::Forms::Button());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->timeLabel = (gcnew System::Windows::Forms::Label());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->Showdata = (gcnew System::Windows::Forms::Button());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(56, 39);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(264, 29);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Studentwisetimetable";
            this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
            // 
            // Add
            // 
            this->Add->Location = System::Drawing::Point(38, 277);
            this->Add->Name = L"Add";
            this->Add->Size = System::Drawing::Size(102, 48);
            this->Add->TabIndex = 1;
            this->Add->Text = L"Add";
            this->Add->UseVisualStyleBackColor = true;
            this->Add->Click += gcnew System::EventHandler(this, &MyForm::Add_Click);
            // 
            // nameLabel
            // 
            this->nameLabel->AutoSize = true;
            this->nameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->nameLabel->Location = System::Drawing::Point(34, 82);
            this->nameLabel->Name = L"nameLabel";
            this->nameLabel->Size = System::Drawing::Size(69, 20);
            this->nameLabel->TabIndex = 2;
            this->nameLabel->Text = L"Name :";
            // 
            // courseLabel
            // 
            this->courseLabel->AutoSize = true;
            this->courseLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->courseLabel->Location = System::Drawing::Point(34, 118);
            this->courseLabel->Name = L"courseLabel";
            this->courseLabel->Size = System::Drawing::Size(81, 20);
            this->courseLabel->TabIndex = 3;
            this->courseLabel->Text = L"Course :";
            // 
            // dayLabel
            // 
            this->dayLabel->AutoSize = true;
            this->dayLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->dayLabel->Location = System::Drawing::Point(34, 190);
            this->dayLabel->Name = L"dayLabel";
            this->dayLabel->Size = System::Drawing::Size(54, 20);
            this->dayLabel->TabIndex = 4;
            this->dayLabel->Text = L"Day :";
            // 
            // Remove
            // 
            this->Remove->Location = System::Drawing::Point(291, 277);
            this->Remove->Name = L"Remove";
            this->Remove->Size = System::Drawing::Size(102, 48);
            this->Remove->TabIndex = 5;
            this->Remove->Text = L"Remove";
            this->Remove->UseVisualStyleBackColor = true;
            this->Remove->Click += gcnew System::EventHandler(this, &MyForm::Remove_Click);
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(120, 82);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(212, 22);
            this->textBox1->TabIndex = 6;
            this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
            // 
            // textBox2
            // 
            this->textBox2->Location = System::Drawing::Point(121, 118);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(212, 22);
            this->textBox2->TabIndex = 7;
            // 
            // textBox3
            // 
            this->textBox3->Location = System::Drawing::Point(121, 151);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(212, 22);
            this->textBox3->TabIndex = 8;
            // 
            // timeLabel
            // 
            this->timeLabel->AutoSize = true;
            this->timeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->timeLabel->Location = System::Drawing::Point(34, 231);
            this->timeLabel->Name = L"timeLabel";
            this->timeLabel->Size = System::Drawing::Size(62, 20);
            this->timeLabel->TabIndex = 9;
            this->timeLabel->Text = L"Time :";
            // 
            // textBox4
            // 
            this->textBox4->Location = System::Drawing::Point(120, 190);
            this->textBox4->Name = L"textBox4";
            this->textBox4->Size = System::Drawing::Size(212, 22);
            this->textBox4->TabIndex = 10;
            // 
            // Showdata
            // 
            this->Showdata->Location = System::Drawing::Point(165, 277);
            this->Showdata->Name = L"Showdata";
            this->Showdata->Size = System::Drawing::Size(102, 48);
            this->Showdata->TabIndex = 11;
            this->Showdata->Text = L"Showdata";
            this->Showdata->UseVisualStyleBackColor = true;
            this->Showdata->Click += gcnew System::EventHandler(this, &MyForm::Showdata_Click);
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(31, 153);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(84, 20);
            this->label2->TabIndex = 12;
            this->label2->Text = L"Section :";
            // 
            // textBox5
            // 
            this->textBox5->Location = System::Drawing::Point(120, 231);
            this->textBox5->Name = L"textBox5";
            this->textBox5->Size = System::Drawing::Size(212, 22);
            this->textBox5->TabIndex = 13;
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->ClientSize = System::Drawing::Size(431, 350);
            this->Controls->Add(this->textBox5);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->Showdata);
            this->Controls->Add(this->textBox4);
            this->Controls->Add(this->timeLabel);
            this->Controls->Add(this->textBox3);
            this->Controls->Add(this->textBox2);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->Remove);
            this->Controls->Add(this->dayLabel);
            this->Controls->Add(this->courseLabel);
            this->Controls->Add(this->nameLabel);
            this->Controls->Add(this->Add);
            this->Controls->Add(this->label1);
            this->Name = L"MyForm";
            this->Text = L"Timetable";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion


        String^ enteredName;
        String^ enteredCourse;
        String^ enteredsection;
        String^ enteredDay;
        String^ enteredTime;

    private: System::Void Remove_Click(System::Object^ sender, System::EventArgs^ e) {

        enteredName = "";
        enteredCourse = "";
        enteredsection = "";
        enteredDay = "";
        enteredTime = "";
        // Clear the text boxes after displaying the data
        this->textBox1->Text = "";
        this->textBox2->Text = "";
        this->textBox3->Text = "";
        this->textBox4->Text = "";
        this->textBox5->Text = "";

        MessageBox::Show("Data Removed", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
    }
    private: System::Void Add_Click(System::Object^ sender, System::EventArgs^ e) {
        // Validate user input
        if (this->textBox1->Text->Trim() == "") {
            MessageBox::Show("Please enter name", "Validation", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        else if (this->textBox2->Text->Trim() == "") {
            MessageBox::Show("Please enter course name", "Validation", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        else if (this->textBox3->Text->Trim() == "") {
            MessageBox::Show("Please enter section ", "Validation", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        else if (this->textBox4->Text->Trim() == "") {
            MessageBox::Show("Please enter day", "Validation", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        else if (this->textBox5->Text->Trim() == "") {
            MessageBox::Show("Please enter time", "Validation", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        else {
            // Store the entered data in variables
            enteredName = this->textBox1->Text;
            enteredCourse = this->textBox2->Text;
			enteredsection = this->textBox3->Text;
            enteredDay = this->textBox4->Text;
            enteredTime = this->textBox5->Text;

            MessageBox::Show("Data submitted successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
        }
    }

    private: System::Void Showdata_Click(System::Object^ sender, System::EventArgs^ e) {
        // Display the stored data in a message box
        String^ displayMessage = "Name: " + enteredName + "\n"
            + "Course: " + enteredCourse + "\n"
			+ "Section: " + enteredsection + "\n"
            + "Day: " + enteredDay + "\n"
            + "Time: " + enteredTime;
        MessageBox::Show(displayMessage, "Data Entered", MessageBoxButtons::OK, MessageBoxIcon::Information);

       
    }

    private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
    }


    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }


    };
}