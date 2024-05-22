#pragma once

namespace Project132 {

    using namespace System;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Data::SqlClient;

    public ref class Teacherwise : public System::Windows::Forms::Form
    {
    public:
        Teacherwise(void)
        {
            InitializeComponent();
        }

    protected:
        ~Teacherwise()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::ListBox^ listBoxStudents;
    private: System::Windows::Forms::TextBox^ textBoxTeacherName;
    private: System::Windows::Forms::Button^ showDataButton;
    private: System::Windows::Forms::Label^ label1;

    private:
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->listBoxStudents = (gcnew System::Windows::Forms::ListBox());
            this->textBoxTeacherName = (gcnew System::Windows::Forms::TextBox());
            this->showDataButton = (gcnew System::Windows::Forms::Button());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // listBoxStudents
            // 
            this->listBoxStudents->FormattingEnabled = true;
            this->listBoxStudents->ItemHeight = 16;
            this->listBoxStudents->Location = System::Drawing::Point(16, 15);
            this->listBoxStudents->Name = L"listBoxStudents";
            this->listBoxStudents->Size = System::Drawing::Size(265, 292);
            this->listBoxStudents->TabIndex = 0;
            // 
            // textBoxTeacherName
            // 
            this->textBoxTeacherName->Location = System::Drawing::Point(367, 17);
            this->textBoxTeacherName->Name = L"textBoxTeacherName";
            this->textBoxTeacherName->Size = System::Drawing::Size(132, 22);
            this->textBoxTeacherName->TabIndex = 1;
            // 
            // showDataButton
            // 
            this->showDataButton->Location = System::Drawing::Point(291, 49);
            this->showDataButton->Name = L"showDataButton";
            this->showDataButton->Size = System::Drawing::Size(100, 28);
            this->showDataButton->TabIndex = 2;
            this->showDataButton->Text = L"Show Data";
            this->showDataButton->UseVisualStyleBackColor = true;
            this->showDataButton->Click += gcnew System::EventHandler(this, &Teacherwise::showDataButton_Click);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(289, 21);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(56, 17);
            this->label1->TabIndex = 3;
            this->label1->Text = L"Teacher Name";
            // 
            // Teacherwise
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(523, 326);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->showDataButton);
            this->Controls->Add(this->textBoxTeacherName);
            this->Controls->Add(this->listBoxStudents);
            this->Name = L"Teacherwise";
            this->Text = L"Teacherwise";
            this->ResumeLayout(false);
            this->PerformLayout();
        }
#pragma endregion

    private:
        System::Void showDataButton_Click(System::Object^ sender, System::EventArgs^ e) {
            String^ teacherName = textBoxTeacherName->Text;
            if (!String::IsNullOrEmpty(teacherName)) {
                DisplayTimetableForTeacher(teacherName);
            }
            else {
                MessageBox::Show("Please enter a teacher's name.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
            }
        }

        void DisplayTimetableForTeacher(String^ teacherName) {
            listBoxStudents->Items->Clear();

            // Update the connection string with your SQL Server details
            String^ connectionString = "Data Source=localhost;Initial Catalog=Timetable;Integrated Security=True";

            // SQL query to select data based on the teacher's name
            String^ query = "SELECT * FROM [dbo].[USER4] WHERE [TeacherName] = @TeacherName";

            try {
                SqlConnection^ connection = gcnew SqlConnection(connectionString);
                SqlCommand^ command = gcnew SqlCommand(query, connection);
                command->Parameters->AddWithValue("@TeacherName", teacherName);

                connection->Open();
                SqlDataReader^ reader = command->ExecuteReader();

                if (reader->HasRows) {
                    while (reader->Read()) {
                        String^ classInfo = String::Format("Course: {0}, Room: {1}, Day: {2}, StartTime: {3}, EndTime: {4}, Section: {5}",
                            reader["Course"]->ToString(), reader["Room"]->ToString(), reader["Day"]->ToString(), reader["StartTime"]->ToString(), reader["EndTime"]->ToString(), reader["Section"]->ToString());
                        listBoxStudents->Items->Add(classInfo);
                    }
                }
                else {
                    MessageBox::Show("No schedule found for the specified teacher.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
                }

                reader->Close();
                connection->Close();
            }
            catch (Exception^ ex) {
                MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }

    };
}
