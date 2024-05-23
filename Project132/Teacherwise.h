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
    private: System::Windows::Forms::TextBox^ textBoxCourse;
    private: System::Windows::Forms::TextBox^ textBoxRoom;
    private: System::Windows::Forms::TextBox^ textBoxDay;
    private: System::Windows::Forms::TextBox^ textBoxStartTime;
    private: System::Windows::Forms::TextBox^ textBoxEndTime;
    private: System::Windows::Forms::TextBox^ textBoxSection;
    private: System::Windows::Forms::Button^ showDataButton;
    private: System::Windows::Forms::Button^ addButton;
    private: System::Windows::Forms::Button^ deleteButton;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Label^ label7;

    private:
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->listBoxStudents = (gcnew System::Windows::Forms::ListBox());
            this->textBoxTeacherName = (gcnew System::Windows::Forms::TextBox());
            this->textBoxCourse = (gcnew System::Windows::Forms::TextBox());
            this->textBoxRoom = (gcnew System::Windows::Forms::TextBox());
            this->textBoxDay = (gcnew System::Windows::Forms::TextBox());
            this->textBoxStartTime = (gcnew System::Windows::Forms::TextBox());
            this->textBoxEndTime = (gcnew System::Windows::Forms::TextBox());
            this->textBoxSection = (gcnew System::Windows::Forms::TextBox());
            this->showDataButton = (gcnew System::Windows::Forms::Button());
            this->addButton = (gcnew System::Windows::Forms::Button());
            this->deleteButton = (gcnew System::Windows::Forms::Button());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // listBoxStudents
            // 
            this->listBoxStudents->FormattingEnabled = true;
            this->listBoxStudents->ItemHeight = 16;
            this->listBoxStudents->Location = System::Drawing::Point(16, 15);
            this->listBoxStudents->Name = L"listBoxStudents";
            this->listBoxStudents->Size = System::Drawing::Size(240, 292);
            this->listBoxStudents->TabIndex = 0;
            // 
            // textBoxTeacherName
            // 
            this->textBoxTeacherName->Location = System::Drawing::Point(367, 17);
            this->textBoxTeacherName->Name = L"textBoxTeacherName";
            this->textBoxTeacherName->Size = System::Drawing::Size(132, 22);
            this->textBoxTeacherName->TabIndex = 1;
            // 
            // textBoxCourse
            // 
            this->textBoxCourse->Location = System::Drawing::Point(367, 45);
            this->textBoxCourse->Name = L"textBoxCourse";
            this->textBoxCourse->Size = System::Drawing::Size(132, 22);
            this->textBoxCourse->TabIndex = 2;
            // 
            // textBoxRoom
            // 
            this->textBoxRoom->Location = System::Drawing::Point(367, 73);
            this->textBoxRoom->Name = L"textBoxRoom";
            this->textBoxRoom->Size = System::Drawing::Size(132, 22);
            this->textBoxRoom->TabIndex = 3;
            // 
            // textBoxDay
            // 
            this->textBoxDay->Location = System::Drawing::Point(367, 101);
            this->textBoxDay->Name = L"textBoxDay";
            this->textBoxDay->Size = System::Drawing::Size(132, 22);
            this->textBoxDay->TabIndex = 4;
            // 
            // textBoxStartTime
            // 
            this->textBoxStartTime->Location = System::Drawing::Point(367, 129);
            this->textBoxStartTime->Name = L"textBoxStartTime";
            this->textBoxStartTime->Size = System::Drawing::Size(132, 22);
            this->textBoxStartTime->TabIndex = 5;
            // 
            // textBoxEndTime
            // 
            this->textBoxEndTime->Location = System::Drawing::Point(367, 157);
            this->textBoxEndTime->Name = L"textBoxEndTime";
            this->textBoxEndTime->Size = System::Drawing::Size(132, 22);
            this->textBoxEndTime->TabIndex = 6;
            // 
            // textBoxSection
            // 
            this->textBoxSection->Location = System::Drawing::Point(367, 185);
            this->textBoxSection->Name = L"textBoxSection";
            this->textBoxSection->Size = System::Drawing::Size(132, 22);
            this->textBoxSection->TabIndex = 7;
            // 
            // showDataButton
            // 
            this->showDataButton->Location = System::Drawing::Point(291, 217);
            this->showDataButton->Name = L"showDataButton";
            this->showDataButton->Size = System::Drawing::Size(100, 28);
            this->showDataButton->TabIndex = 8;
            this->showDataButton->Text = L"Show Data";
            this->showDataButton->UseVisualStyleBackColor = true;
            this->showDataButton->Click += gcnew System::EventHandler(this, &Teacherwise::showDataButton_Click);
            // 
            // addButton
            // 
            this->addButton->Location = System::Drawing::Point(291, 251);
            this->addButton->Name = L"addButton";
            this->addButton->Size = System::Drawing::Size(100, 28);
            this->addButton->TabIndex = 9;
            this->addButton->Text = L"Add";
            this->addButton->UseVisualStyleBackColor = true;
            this->addButton->Click += gcnew System::EventHandler(this, &Teacherwise::addButton_Click);
            // 
            // deleteButton
            // 
            this->deleteButton->Location = System::Drawing::Point(291, 285);
            this->deleteButton->Name = L"deleteButton";
            this->deleteButton->Size = System::Drawing::Size(100, 28);
            this->deleteButton->TabIndex = 10;
            this->deleteButton->Text = L"Delete";
            this->deleteButton->UseVisualStyleBackColor = true;
            this->deleteButton->Click += gcnew System::EventHandler(this, &Teacherwise::deleteButton_Click);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(263, 20);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(98, 16);
            this->label1->TabIndex = 11;
            this->label1->Text = L"Teacher Name";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(263, 48);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(47, 16);
            this->label2->TabIndex = 12;
            this->label2->Text = L"Course";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(263, 76);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(42, 16);
            this->label3->TabIndex = 13;
            this->label3->Text = L"Room";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(263, 104);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(29, 16);
            this->label4->TabIndex = 14;
            this->label4->Text = L"Day";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Location = System::Drawing::Point(263, 132);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(65, 16);
            this->label5->TabIndex = 15;
            this->label5->Text = L"Start Time";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Location = System::Drawing::Point(263, 160);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(60, 16);
            this->label6->TabIndex = 16;
            this->label6->Text = L"End Time";
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Location = System::Drawing::Point(263, 188);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(50, 16);
            this->label7->TabIndex = 17;
            this->label7->Text = L"Section";
            // 
            // Teacherwise
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(523, 326);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->deleteButton);
            this->Controls->Add(this->addButton);
            this->Controls->Add(this->showDataButton);
            this->Controls->Add(this->textBoxSection);
            this->Controls->Add(this->textBoxEndTime);
            this->Controls->Add(this->textBoxStartTime);
            this->Controls->Add(this->textBoxDay);
            this->Controls->Add(this->textBoxRoom);
            this->Controls->Add(this->textBoxCourse);
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

            String^ connectionString = "Data Source=localhost;Initial Catalog=Timetable;Integrated Security=True";
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

        System::Void addButton_Click(System::Object^ sender, System::EventArgs^ e) {
            String^ teacherName = textBoxTeacherName->Text;
            String^ course = textBoxCourse->Text;
            String^ room = textBoxRoom->Text;
            String^ day = textBoxDay->Text;
            String^ startTime = textBoxStartTime->Text;
            String^ endTime = textBoxEndTime->Text;
            String^ section = textBoxSection->Text;

            if (!String::IsNullOrEmpty(teacherName) && !String::IsNullOrEmpty(course) && !String::IsNullOrEmpty(room) &&
                !String::IsNullOrEmpty(day) && !String::IsNullOrEmpty(startTime) && !String::IsNullOrEmpty(endTime) &&
                !String::IsNullOrEmpty(section)) {
                AddTimetableForTeacher(teacherName, course, room, day, startTime, endTime, section);
            }
            else {
                MessageBox::Show("Please fill in all fields.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
            }
        }

        void AddTimetableForTeacher(String^ teacherName, String^ course, String^ room, String^ day, String^ startTime, String^ endTime, String^ section) {
            String^ connectionString = "Data Source=localhost;Initial Catalog=Timetable;Integrated Security=True";
            String^ query = "INSERT INTO [dbo].[USER4] (TeacherName, Course, Room, Day, StartTime, EndTime, Section) VALUES (@TeacherName, @Course, @Room, @Day, @StartTime, @EndTime, @Section)";

            try {
                SqlConnection^ connection = gcnew SqlConnection(connectionString);
                SqlCommand^ command = gcnew SqlCommand(query, connection);
                command->Parameters->AddWithValue("@TeacherName", teacherName);
                command->Parameters->AddWithValue("@Course", course);
                command->Parameters->AddWithValue("@Room", room);
                command->Parameters->AddWithValue("@Day", day);
                command->Parameters->AddWithValue("@StartTime", startTime);
                command->Parameters->AddWithValue("@EndTime", endTime);
                command->Parameters->AddWithValue("@Section", section);

                connection->Open();
                int result = command->ExecuteNonQuery();

                if (result > 0) {
                    MessageBox::Show("Record added successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
                }
                else {
                    MessageBox::Show("Failed to add the record.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                }

                connection->Close();
                DisplayTimetableForTeacher(teacherName);
            }
            catch (Exception^ ex) {
                MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }

        System::Void deleteButton_Click(System::Object^ sender, System::EventArgs^ e) {
            String^ teacherName = textBoxTeacherName->Text;
            if (!String::IsNullOrEmpty(teacherName)) {
                DeleteTimetableForTeacher(teacherName);
            }
            else {
                MessageBox::Show("Please enter a teacher's name.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
            }
        }

        void DeleteTimetableForTeacher(String^ teacherName) {
            String^ connectionString = "Data Source=localhost;Initial Catalog=Timetable;Integrated Security=True";
            String^ query = "DELETE FROM [dbo].[USER4] WHERE [TeacherName] = @TeacherName";

            try {
                SqlConnection^ connection = gcnew SqlConnection(connectionString);
                SqlCommand^ command = gcnew SqlCommand(query, connection);
                command->Parameters->AddWithValue("@TeacherName", teacherName);

                connection->Open();
                int result = command->ExecuteNonQuery();

                if (result > 0) {
                    MessageBox::Show("Records deleted successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
                }
                else {
                    MessageBox::Show("No records found for the specified teacher.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
                }

                connection->Close();
                listBoxStudents->Items->Clear();
            }
            catch (Exception^ ex) {
                MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }
    };
}
