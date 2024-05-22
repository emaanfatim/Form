#pragma once

namespace Project132 {

    using namespace System;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Data::SqlClient;

    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
        }

    protected:
        ~MyForm()
        {
            // Destructor code
        }

    private: System::Windows::Forms::Label^ label1;
    private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
    private: System::Windows::Forms::Button^ buttonAdd;
    private: System::Windows::Forms::Button^ buttonRemove;
    private: System::Windows::Forms::Button^ buttonShowData;
    private: System::Windows::Forms::TextBox^ textBoxName;
    private: System::Windows::Forms::TextBox^ textBoxCourse;
    private: System::Windows::Forms::TextBox^ textBoxSection;
    private: System::Windows::Forms::TextBox^ textBoxDay;
    private: System::Windows::Forms::TextBox^ textBoxTime;
    private: System::Windows::Forms::ListBox^ listBoxStudents;
    private: System::Windows::Forms::Label^ labelName;
    private: System::Windows::Forms::Label^ labelCourse;
    private: System::Windows::Forms::Label^ labelSection;
    private: System::Windows::Forms::Label^ labelDay;
    private: System::Windows::Forms::Label^ labelTime;
    private: System::Windows::Forms::TextBox^ textBoxTeacherName;
    private: System::Windows::Forms::Label^ labelTeacherName;
    private: System::Windows::Forms::TextBox^ textBoxRoom;
    private: System::Windows::Forms::Label^ labelRoom;
    private: System::Windows::Forms::TextBox^ textBoxEndTime;
    private: System::Windows::Forms::Label^ labelEndTime;

           void InitializeComponent(void)
           {
               this->buttonAdd = (gcnew System::Windows::Forms::Button());
               this->buttonRemove = (gcnew System::Windows::Forms::Button());
               this->buttonShowData = (gcnew System::Windows::Forms::Button());
               this->textBoxName = (gcnew System::Windows::Forms::TextBox());
               this->textBoxCourse = (gcnew System::Windows::Forms::TextBox());
               this->textBoxSection = (gcnew System::Windows::Forms::TextBox());
               this->textBoxDay = (gcnew System::Windows::Forms::TextBox());
               this->textBoxTime = (gcnew System::Windows::Forms::TextBox());
               this->textBoxTeacherName = (gcnew System::Windows::Forms::TextBox());
               this->textBoxRoom = (gcnew System::Windows::Forms::TextBox());
               this->textBoxEndTime = (gcnew System::Windows::Forms::TextBox());
               this->listBoxStudents = (gcnew System::Windows::Forms::ListBox());
               this->labelName = (gcnew System::Windows::Forms::Label());
               this->labelCourse = (gcnew System::Windows::Forms::Label());
               this->labelSection = (gcnew System::Windows::Forms::Label());
               this->labelDay = (gcnew System::Windows::Forms::Label());
               this->labelTime = (gcnew System::Windows::Forms::Label());
               this->labelTeacherName = (gcnew System::Windows::Forms::Label());
               this->labelRoom = (gcnew System::Windows::Forms::Label());
               this->labelEndTime = (gcnew System::Windows::Forms::Label());
               this->label1 = (gcnew System::Windows::Forms::Label());
               this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
               this->SuspendLayout();
               // 
               // buttonAdd
               // 
               this->buttonAdd->Location = System::Drawing::Point(16, 488);
               this->buttonAdd->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
               this->buttonAdd->Name = L"buttonAdd";
               this->buttonAdd->Size = System::Drawing::Size(100, 28);
               this->buttonAdd->TabIndex = 0;
               this->buttonAdd->Text = L"Add";
               this->buttonAdd->UseVisualStyleBackColor = true;
               this->buttonAdd->Click += gcnew System::EventHandler(this, &MyForm::Add_Click);
               // 
               // buttonRemove
               // 
               this->buttonRemove->Location = System::Drawing::Point(164, 488);
               this->buttonRemove->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
               this->buttonRemove->Name = L"buttonRemove";
               this->buttonRemove->Size = System::Drawing::Size(100, 28);
               this->buttonRemove->TabIndex = 1;
               this->buttonRemove->Text = L"Remove";
               this->buttonRemove->UseVisualStyleBackColor = true;
               this->buttonRemove->Click += gcnew System::EventHandler(this, &MyForm::Remove_Click);
               // 
               // buttonShowData
               // 
               this->buttonShowData->Location = System::Drawing::Point(310, 488);
               this->buttonShowData->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
               this->buttonShowData->Name = L"buttonShowData";
               this->buttonShowData->Size = System::Drawing::Size(100, 28);
               this->buttonShowData->TabIndex = 2;
               this->buttonShowData->Text = L"Show Data";
               this->buttonShowData->UseVisualStyleBackColor = true;
               this->buttonShowData->Click += gcnew System::EventHandler(this, &MyForm::ShowData_Click);
               // 
               // textBoxName
               // 
               this->textBoxName->Location = System::Drawing::Point(77, 62);
               this->textBoxName->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
               this->textBoxName->Name = L"textBoxName";
               this->textBoxName->Size = System::Drawing::Size(132, 22);
               this->textBoxName->TabIndex = 3;
               // 
               // textBoxCourse
               // 
               this->textBoxCourse->Location = System::Drawing::Point(77, 104);
               this->textBoxCourse->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
               this->textBoxCourse->Name = L"textBoxCourse";
               this->textBoxCourse->Size = System::Drawing::Size(132, 22);
               this->textBoxCourse->TabIndex = 4;
               // 
               // textBoxSection
               // 
               this->textBoxSection->Location = System::Drawing::Point(77, 144);
               this->textBoxSection->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
               this->textBoxSection->Name = L"textBoxSection";
               this->textBoxSection->Size = System::Drawing::Size(132, 22);
               this->textBoxSection->TabIndex = 5;
               // 
               // textBoxDay
               // 
               this->textBoxDay->Location = System::Drawing::Point(77, 189);
               this->textBoxDay->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
               this->textBoxDay->Name = L"textBoxDay";
               this->textBoxDay->Size = System::Drawing::Size(132, 22);
               this->textBoxDay->TabIndex = 6;
               // 
               // textBoxTime
               // 
               this->textBoxTime->Location = System::Drawing::Point(79, 230);
               this->textBoxTime->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
               this->textBoxTime->Name = L"textBoxTime";
               this->textBoxTime->Size = System::Drawing::Size(132, 22);
               this->textBoxTime->TabIndex = 7;
               // 
               // textBoxTeacherName
               // 
               this->textBoxTeacherName->Location = System::Drawing::Point(310, 62);
               this->textBoxTeacherName->Margin = System::Windows::Forms::Padding(4);
               this->textBoxTeacherName->Name = L"textBoxTeacherName";
               this->textBoxTeacherName->Size = System::Drawing::Size(132, 22);
               this->textBoxTeacherName->TabIndex = 15;
               // 
               // textBoxRoom
               // 
               this->textBoxRoom->Location = System::Drawing::Point(310, 104);
               this->textBoxRoom->Margin = System::Windows::Forms::Padding(4);
               this->textBoxRoom->Name = L"textBoxRoom";
               this->textBoxRoom->Size = System::Drawing::Size(132, 22);
               this->textBoxRoom->TabIndex = 16;
               // 
               // textBoxEndTime
               // 
               this->textBoxEndTime->Location = System::Drawing::Point(310, 144);
               this->textBoxEndTime->Margin = System::Windows::Forms::Padding(4);
               this->textBoxEndTime->Name = L"textBoxEndTime";
               this->textBoxEndTime->Size = System::Drawing::Size(132, 22);
               this->textBoxEndTime->TabIndex = 17;
               // 
               // listBoxStudents
               // 
               this->listBoxStudents->FormattingEnabled = true;
               this->listBoxStudents->ItemHeight = 16;
               this->listBoxStudents->Location = System::Drawing::Point(16, 274);
               this->listBoxStudents->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
               this->listBoxStudents->Name = L"listBoxStudents";
               this->listBoxStudents->Size = System::Drawing::Size(681, 196);
               this->listBoxStudents->TabIndex = 8;
               // 
               // labelName
               // 
               this->labelName->AutoSize = true;
               this->labelName->Location = System::Drawing::Point(16, 66);
               this->labelName->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->labelName->Name = L"labelName";
               this->labelName->Size = System::Drawing::Size(45, 16);
               this->labelName->TabIndex = 9;
               this->labelName->Text = L"Name";
               // 
               // labelCourse
               // 
               this->labelCourse->AutoSize = true;
               this->labelCourse->Location = System::Drawing::Point(16, 108);
               this->labelCourse->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->labelCourse->Name = L"labelCourse";
               this->labelCourse->Size = System::Drawing::Size(51, 16);
               this->labelCourse->TabIndex = 10;
               this->labelCourse->Text = L"Course";
               // 
               // labelSection
               // 
               this->labelSection->AutoSize = true;
               this->labelSection->Location = System::Drawing::Point(16, 148);
               this->labelSection->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->labelSection->Name = L"labelSection";
               this->labelSection->Size = System::Drawing::Size(52, 16);
               this->labelSection->TabIndex = 11;
               this->labelSection->Text = L"Section";
               // 
               // labelDay
               // 
               this->labelDay->AutoSize = true;
               this->labelDay->Location = System::Drawing::Point(16, 193);
               this->labelDay->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->labelDay->Name = L"labelDay";
               this->labelDay->Size = System::Drawing::Size(33, 16);
               this->labelDay->TabIndex = 12;
               this->labelDay->Text = L"Day";
               // 
               // labelTime
               // 
               this->labelTime->AutoSize = true;
               this->labelTime->Location = System::Drawing::Point(16, 234);
               this->labelTime->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->labelTime->Name = L"labelTime";
               this->labelTime->Size = System::Drawing::Size(38, 16);
               this->labelTime->TabIndex = 13;
               this->labelTime->Text = L"Time";
               // 
               // labelTeacherName
               // 
               this->labelTeacherName->AutoSize = true;
               this->labelTeacherName->Location = System::Drawing::Point(231, 66);
               this->labelTeacherName->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->labelTeacherName->Name = L"labelTeacherName";
               this->labelTeacherName->Size = System::Drawing::Size(59, 16);
               this->labelTeacherName->TabIndex = 14;
               this->labelTeacherName->Text = L"Teacher";
               // 
               // labelRoom
               // 
               this->labelRoom->AutoSize = true;
               this->labelRoom->Location = System::Drawing::Point(231, 108);
               this->labelRoom->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->labelRoom->Name = L"labelRoom";
               this->labelRoom->Size = System::Drawing::Size(44, 16);
               this->labelRoom->TabIndex = 18;
               this->labelRoom->Text = L"Room";
               // 
               // labelEndTime
               // 
               this->labelEndTime->AutoSize = true;
               this->labelEndTime->Location = System::Drawing::Point(231, 148);
               this->labelEndTime->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->labelEndTime->Name = L"labelEndTime";
               this->labelEndTime->Size = System::Drawing::Size(62, 16);
               this->labelEndTime->TabIndex = 19;
               this->labelEndTime->Text = L"End Time";
               // 
               // MyForm
               // 
               this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
               this->ClientSize = System::Drawing::Size(715, 546);
               this->Controls->Add(this->labelEndTime);
               this->Controls->Add(this->textBoxEndTime);
               this->Controls->Add(this->labelRoom);
               this->Controls->Add(this->textBoxRoom);
               this->Controls->Add(this->labelTeacherName);
               this->Controls->Add(this->textBoxTeacherName);
               this->Controls->Add(this->labelTime);
               this->Controls->Add(this->labelDay);
               this->Controls->Add(this->labelSection);
               this->Controls->Add(this->labelCourse);
               this->Controls->Add(this->labelName);
               this->Controls->Add(this->listBoxStudents);
               this->Controls->Add(this->textBoxTime);
               this->Controls->Add(this->textBoxDay);
               this->Controls->Add(this->textBoxSection);
               this->Controls->Add(this->textBoxCourse);
               this->Controls->Add(this->textBoxName);
               this->Controls->Add(this->buttonShowData);
               this->Controls->Add(this->buttonRemove);
               this->Controls->Add(this->buttonAdd);
               this->Controls->Add(this->label1);
               this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
               this->Name = L"MyForm";
               this->Text = L"MyForm";
               this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
               this->ResumeLayout(false);
               this->PerformLayout();
           }

    private: System::Void Add_Click(System::Object^ sender, System::EventArgs^ e)
    {
        String^ connectionString = "Data Source=localhost;Initial Catalog=Timetable;Integrated Security=True";
        SqlConnection^ sqlConn = gcnew SqlConnection(connectionString);

        try
        {
            sqlConn->Open();
            String^ query = "INSERT INTO Timetable (name, course, section, day, time, teacher, room, endtime) VALUES (@name, @course, @section, @day, @time, @teacher, @room, @endtime)";
            SqlCommand^ cmd = gcnew SqlCommand(query, sqlConn);
            cmd->Parameters->AddWithValue("@name", textBoxName->Text);
            cmd->Parameters->AddWithValue("@course", textBoxCourse->Text);
            cmd->Parameters->AddWithValue("@section", textBoxSection->Text);
            cmd->Parameters->AddWithValue("@day", textBoxDay->Text);
            cmd->Parameters->AddWithValue("@time", textBoxTime->Text);
            cmd->Parameters->AddWithValue("@teacher", textBoxTeacherName->Text);
            cmd->Parameters->AddWithValue("@room", textBoxRoom->Text);
            cmd->Parameters->AddWithValue("@endtime", textBoxEndTime->Text);
            cmd->ExecuteNonQuery();
        }
        catch (Exception^ ex)
        {
            MessageBox::Show("Failed to add data: " + ex->Message);
        }
        finally
        {
            sqlConn->Close();
        }
    }
           private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
           {
               // Your initialization code here
           }


    private: System::Void Remove_Click(System::Object^ sender, System::EventArgs^ e)
    {
        if (listBoxStudents->SelectedItem != nullptr)
        {
            String^ selectedStudent = listBoxStudents->SelectedItem->ToString();
            String^ connectionString = "Data Source=localhost;Initial Catalog=Timetable;Integrated Security=True";
            SqlConnection^ sqlConn = gcnew SqlConnection(connectionString);

            try
            {
                sqlConn->Open();
                String^ query = "DELETE FROM Timetable WHERE name=@name";
                SqlCommand^ cmd = gcnew SqlCommand(query, sqlConn);
                cmd->Parameters->AddWithValue("@name", selectedStudent);
                cmd->ExecuteNonQuery();
                listBoxStudents->Items->Remove(selectedStudent);
            }
            catch (Exception^ ex)
            {
                MessageBox::Show("Failed to remove data: " + ex->Message);
            }
            finally
            {
                sqlConn->Close();
            }
        }
        else
        {
            MessageBox::Show("Please select a student to remove.");
        }
    }

    private: System::Void ShowData_Click(System::Object^ sender, System::EventArgs^ e)
    {
        String^ connectionString = "Data Source=localhost;Initial Catalog=Timetable;Integrated Security=True";
        SqlConnection^ sqlConn = gcnew SqlConnection(connectionString);

        try
        {
            sqlConn->Open();
            String^ query = "SELECT name FROM Timetable";
            SqlCommand^ cmd = gcnew SqlCommand(query, sqlConn);
            SqlDataReader^ reader = cmd->ExecuteReader();

            listBoxStudents->Items->Clear();
            while (reader->Read())
            {
                listBoxStudents->Items->Add(reader["name"]->ToString());
            }
            reader->Close();
        }
        catch (Exception^ ex)
        {
            MessageBox::Show("Failed to retrieve data: " + ex->Message);
        }
        finally
        {
            sqlConn->Close();
        }
    }

    };
    }

