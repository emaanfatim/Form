#pragma once

namespace Project132 {

    using namespace System;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Data::SqlClient;

    public ref class Sectionwise : public System::Windows::Forms::Form
    {
    public:
        Sectionwise(void)
        {
            InitializeComponent();
        }

    protected:
        ~Sectionwise()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::ListBox^ listBoxSections;
    private: System::Windows::Forms::ListBox^ listBoxDetails;
    private: System::Windows::Forms::Button^ showDataButton;
    private: System::Windows::Forms::TextBox^ textBoxNewSection;
    private: System::Windows::Forms::TextBox^ textBoxTeacher;
    private: System::Windows::Forms::TextBox^ textBoxRoom;
    private: System::Windows::Forms::TextBox^ textBoxCourse;
    private: System::Windows::Forms::TextBox^ textBoxDay;
    private: System::Windows::Forms::TextBox^ textBoxStartTime;
    private: System::Windows::Forms::TextBox^ textBoxEndTime;
    private: System::Windows::Forms::Button^ addButton;
    private: System::Windows::Forms::Button^ deleteButton;
    private: System::Windows::Forms::Label^ labelNewSection;
    private: System::Windows::Forms::Label^ labelTeacher;
    private: System::Windows::Forms::Label^ labelRoom;
    private: System::Windows::Forms::Label^ labelCourse;
    private: System::Windows::Forms::Label^ labelDay;
    private: System::Windows::Forms::Label^ labelStartTime;
    private: System::Windows::Forms::Label^ labelEndTime;

    private:
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->listBoxSections = (gcnew System::Windows::Forms::ListBox());
            this->listBoxDetails = (gcnew System::Windows::Forms::ListBox());
            this->showDataButton = (gcnew System::Windows::Forms::Button());
            this->textBoxNewSection = (gcnew System::Windows::Forms::TextBox());
            this->textBoxTeacher = (gcnew System::Windows::Forms::TextBox());
            this->textBoxRoom = (gcnew System::Windows::Forms::TextBox());
            this->textBoxCourse = (gcnew System::Windows::Forms::TextBox());
            this->textBoxDay = (gcnew System::Windows::Forms::TextBox());
            this->textBoxStartTime = (gcnew System::Windows::Forms::TextBox());
            this->textBoxEndTime = (gcnew System::Windows::Forms::TextBox());
            this->addButton = (gcnew System::Windows::Forms::Button());
            this->deleteButton = (gcnew System::Windows::Forms::Button());
            this->labelNewSection = (gcnew System::Windows::Forms::Label());
            this->labelTeacher = (gcnew System::Windows::Forms::Label());
            this->labelRoom = (gcnew System::Windows::Forms::Label());
            this->labelCourse = (gcnew System::Windows::Forms::Label());
            this->labelDay = (gcnew System::Windows::Forms::Label());
            this->labelStartTime = (gcnew System::Windows::Forms::Label());
            this->labelEndTime = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // listBoxSections
            // 
            this->listBoxSections->FormattingEnabled = true;
            this->listBoxSections->Location = System::Drawing::Point(12, 12);
            this->listBoxSections->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->listBoxSections->Name = L"listBoxSections";
            this->listBoxSections->Size = System::Drawing::Size(181, 238);
            this->listBoxSections->TabIndex = 0;
            this->listBoxSections->SelectedIndexChanged += gcnew System::EventHandler(this, &Sectionwise::listBoxSections_SelectedIndexChanged);
            // 
            // listBoxDetails
            // 
            this->listBoxDetails->FormattingEnabled = true;
            this->listBoxDetails->Location = System::Drawing::Point(197, 12);
            this->listBoxDetails->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->listBoxDetails->Name = L"listBoxDetails";
            this->listBoxDetails->Size = System::Drawing::Size(181, 238);
            this->listBoxDetails->TabIndex = 1;
            this->listBoxDetails->SelectedIndexChanged += gcnew System::EventHandler(this, &Sectionwise::listBoxDetails_SelectedIndexChanged);
            // 
            // showDataButton
            // 
            this->showDataButton->Location = System::Drawing::Point(210, 258);
            this->showDataButton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->showDataButton->Name = L"showDataButton";
            this->showDataButton->Size = System::Drawing::Size(75, 23);
            this->showDataButton->TabIndex = 2;
            this->showDataButton->Text = L"Show Data";
            this->showDataButton->UseVisualStyleBackColor = true;
            this->showDataButton->Click += gcnew System::EventHandler(this, &Sectionwise::showDataButton_Click);
            // 
            // textBoxNewSection
            // 
            this->textBoxNewSection->Location = System::Drawing::Point(70, 113);
            this->textBoxNewSection->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->textBoxNewSection->Name = L"textBoxNewSection";
            this->textBoxNewSection->Size = System::Drawing::Size(76, 20);
            this->textBoxNewSection->TabIndex = 3;
            this->textBoxNewSection->TextChanged += gcnew System::EventHandler(this, &Sectionwise::textBoxNewSection_TextChanged);
            // 
            // textBoxTeacher
            // 
            this->textBoxTeacher->Location = System::Drawing::Point(13, 152);
            this->textBoxTeacher->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->textBoxTeacher->Name = L"textBoxTeacher";
            this->textBoxTeacher->Size = System::Drawing::Size(76, 20);
            this->textBoxTeacher->TabIndex = 4;
            this->textBoxTeacher->TextChanged += gcnew System::EventHandler(this, &Sectionwise::textBoxTeacher_TextChanged);
            // 
            // textBoxRoom
            // 
            this->textBoxRoom->Location = System::Drawing::Point(116, 153);
            this->textBoxRoom->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->textBoxRoom->Name = L"textBoxRoom";
            this->textBoxRoom->Size = System::Drawing::Size(76, 20);
            this->textBoxRoom->TabIndex = 5;
            this->textBoxRoom->TextChanged += gcnew System::EventHandler(this, &Sectionwise::textBoxRoom_TextChanged);
            // 
            // textBoxCourse
            // 
            this->textBoxCourse->Location = System::Drawing::Point(13, 229);
            this->textBoxCourse->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->textBoxCourse->Name = L"textBoxCourse";
            this->textBoxCourse->Size = System::Drawing::Size(76, 20);
            this->textBoxCourse->TabIndex = 6;
            this->textBoxCourse->TextChanged += gcnew System::EventHandler(this, &Sectionwise::textBoxCourse_TextChanged);
            // 
            // textBoxDay
            // 
            this->textBoxDay->Location = System::Drawing::Point(113, 227);
            this->textBoxDay->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->textBoxDay->Name = L"textBoxDay";
            this->textBoxDay->Size = System::Drawing::Size(76, 20);
            this->textBoxDay->TabIndex = 7;
            this->textBoxDay->TextChanged += gcnew System::EventHandler(this, &Sectionwise::textBoxDay_TextChanged);
            // 
            // textBoxStartTime
            // 
            this->textBoxStartTime->Location = System::Drawing::Point(13, 191);
            this->textBoxStartTime->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->textBoxStartTime->Name = L"textBoxStartTime";
            this->textBoxStartTime->Size = System::Drawing::Size(76, 20);
            this->textBoxStartTime->TabIndex = 8;
            this->textBoxStartTime->TextChanged += gcnew System::EventHandler(this, &Sectionwise::textBoxStartTime_TextChanged);
            // 
            // textBoxEndTime
            // 
            this->textBoxEndTime->Location = System::Drawing::Point(116, 189);
            this->textBoxEndTime->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->textBoxEndTime->Name = L"textBoxEndTime";
            this->textBoxEndTime->Size = System::Drawing::Size(76, 20);
            this->textBoxEndTime->TabIndex = 9;
            this->textBoxEndTime->TextChanged += gcnew System::EventHandler(this, &Sectionwise::textBoxEndTime_TextChanged);
            // 
            // addButton
            // 
            this->addButton->Location = System::Drawing::Point(79, 259);
            this->addButton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->addButton->Name = L"addButton";
            this->addButton->Size = System::Drawing::Size(25, 19);
            this->addButton->TabIndex = 10;
            this->addButton->Text = L"+";
            this->addButton->UseVisualStyleBackColor = true;
            this->addButton->Click += gcnew System::EventHandler(this, &Sectionwise::addButton_Click);
            // 
            // deleteButton
            // 
            this->deleteButton->Location = System::Drawing::Point(314, 258);
            this->deleteButton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->deleteButton->Name = L"deleteButton";
            this->deleteButton->Size = System::Drawing::Size(63, 19);
            this->deleteButton->TabIndex = 11;
            this->deleteButton->Text = L"Delete";
            this->deleteButton->UseVisualStyleBackColor = true;
            this->deleteButton->Click += gcnew System::EventHandler(this, &Sectionwise::deleteButton_Click);
            // 
            // labelNewSection
            // 
            this->labelNewSection->AutoSize = true;
            this->labelNewSection->Location = System::Drawing::Point(76, 97);
            this->labelNewSection->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->labelNewSection->Name = L"labelNewSection";
            this->labelNewSection->Size = System::Drawing::Size(68, 13);
            this->labelNewSection->TabIndex = 12;
            this->labelNewSection->Text = L"New Section";
            // 
            // labelTeacher
            // 
            this->labelTeacher->AutoSize = true;
            this->labelTeacher->Location = System::Drawing::Point(27, 136);
            this->labelTeacher->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->labelTeacher->Name = L"labelTeacher";
            this->labelTeacher->Size = System::Drawing::Size(47, 13);
            this->labelTeacher->TabIndex = 13;
            this->labelTeacher->Text = L"Teacher";
            this->labelTeacher->Click += gcnew System::EventHandler(this, &Sectionwise::labelTeacher_Click);
            // 
            // labelRoom
            // 
            this->labelRoom->AutoSize = true;
            this->labelRoom->Location = System::Drawing::Point(136, 136);
            this->labelRoom->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->labelRoom->Name = L"labelRoom";
            this->labelRoom->Size = System::Drawing::Size(35, 13);
            this->labelRoom->TabIndex = 14;
            this->labelRoom->Text = L"Room";
            this->labelRoom->Click += gcnew System::EventHandler(this, &Sectionwise::labelRoom_Click);
            // 
            // labelCourse
            // 
            this->labelCourse->AutoSize = true;
            this->labelCourse->Location = System::Drawing::Point(29, 213);
            this->labelCourse->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->labelCourse->Name = L"labelCourse";
            this->labelCourse->Size = System::Drawing::Size(40, 13);
            this->labelCourse->TabIndex = 15;
            this->labelCourse->Text = L"Course";
            // 
            // labelDay
            // 
            this->labelDay->AutoSize = true;
            this->labelDay->Location = System::Drawing::Point(137, 210);
            this->labelDay->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->labelDay->Name = L"labelDay";
            this->labelDay->Size = System::Drawing::Size(26, 13);
            this->labelDay->TabIndex = 16;
            this->labelDay->Text = L"Day";
            this->labelDay->Click += gcnew System::EventHandler(this, &Sectionwise::labelDay_Click);
            // 
            // labelStartTime
            // 
            this->labelStartTime->AutoSize = true;
            this->labelStartTime->Location = System::Drawing::Point(27, 176);
            this->labelStartTime->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->labelStartTime->Name = L"labelStartTime";
            this->labelStartTime->Size = System::Drawing::Size(55, 13);
            this->labelStartTime->TabIndex = 17;
            this->labelStartTime->Text = L"Start Time";
            this->labelStartTime->Click += gcnew System::EventHandler(this, &Sectionwise::labelStartTime_Click);
            // 
            // labelEndTime
            // 
            this->labelEndTime->AutoSize = true;
            this->labelEndTime->Location = System::Drawing::Point(126, 174);
            this->labelEndTime->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->labelEndTime->Name = L"labelEndTime";
            this->labelEndTime->Size = System::Drawing::Size(52, 13);
            this->labelEndTime->TabIndex = 18;
            this->labelEndTime->Text = L"End Time";
            this->labelEndTime->Click += gcnew System::EventHandler(this, &Sectionwise::labelEndTime_Click);
            // 
            // Sectionwise
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(392, 288);
            this->Controls->Add(this->labelEndTime);
            this->Controls->Add(this->labelStartTime);
            this->Controls->Add(this->labelDay);
            this->Controls->Add(this->labelCourse);
            this->Controls->Add(this->labelRoom);
            this->Controls->Add(this->labelTeacher);
            this->Controls->Add(this->labelNewSection);
            this->Controls->Add(this->deleteButton);
            this->Controls->Add(this->addButton);
            this->Controls->Add(this->textBoxEndTime);
            this->Controls->Add(this->textBoxStartTime);
            this->Controls->Add(this->textBoxDay);
            this->Controls->Add(this->textBoxCourse);
            this->Controls->Add(this->textBoxRoom);
            this->Controls->Add(this->textBoxTeacher);
            this->Controls->Add(this->textBoxNewSection);
            this->Controls->Add(this->showDataButton);
            this->Controls->Add(this->listBoxDetails);
            this->Controls->Add(this->listBoxSections);
            this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->Name = L"Sectionwise";
            this->Text = L"Sectionwise";
            this->ResumeLayout(false);
            this->PerformLayout();

        }

#pragma endregion

    private: System::Void showDataButton_Click(System::Object^ sender, System::EventArgs^ e) {
        DisplaySectionwiseData();
    }

    private: System::Void addButton_Click(System::Object^ sender, System::EventArgs^ e) {
        AddSection();
    }

    private: System::Void deleteButton_Click(System::Object^ sender, System::EventArgs^ e) {
        DeleteSection();
    }

    private: System::Void listBoxSections_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
        DisplaySectionDetails();
    }

    private:
        void DisplaySectionwiseData() {
            listBoxDetails->Items->Clear();

            String^ connectionString = "Data Source=DESKTOP-AKQDUJ4\\SQLEXPRESS;Initial Catalog=Timetable;Integrated Security=True";
            String^ query = "SELECT DISTINCT Section FROM [dbo].[USER4]";

            try {
                SqlConnection^ connection = gcnew SqlConnection(connectionString);
                SqlCommand^ command = gcnew SqlCommand(query, connection);

                connection->Open();
                SqlDataReader^ reader = command->ExecuteReader();

                if (reader->HasRows) {
                    while (reader->Read()) {
                        listBoxSections->Items->Add(reader["Section"]->ToString());
                    }
                }
                else {
                    MessageBox::Show("No records found in the timetable.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
                }

                reader->Close();
                connection->Close();
            }
            catch (Exception^ ex) {
                MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }

        void DisplaySectionDetails() {
            listBoxDetails->Items->Clear();

            String^ selectedSection = listBoxSections->SelectedItem->ToString();
            String^ connectionString = "Data Source=DESKTOP-AKQDUJ4\\SQLEXPRESS;Initial Catalog=Timetable;Integrated Security=True";
            String^ query = "SELECT * FROM [dbo].[USER4] WHERE Section = @Section";

            try {
                SqlConnection^ connection = gcnew SqlConnection(connectionString);
                SqlCommand^ command = gcnew SqlCommand(query, connection);
                command->Parameters->AddWithValue("@Section", selectedSection);

                connection->Open();
                SqlDataReader^ reader = command->ExecuteReader();

                if (reader->HasRows) {
                    while (reader->Read()) {
                        String^ classInfo = String::Format("Room: {0}, Teacher: {1}, Course: {2}, Day: {3}, StartTime: {4}, EndTime: {5}, Section: {6}",
                            reader["Room"]->ToString(), reader["TeacherName"]->ToString(), reader["Course"]->ToString(), reader["Day"]->ToString(), reader["StartTime"]->ToString(), reader["EndTime"]->ToString(), reader["Section"]->ToString());
                        listBoxDetails->Items->Add(classInfo);
                    }
                }
                else {
                    MessageBox::Show("No records found for the selected section.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
                }

                reader->Close();
                connection->Close();
            }
            catch (Exception^ ex) {
                MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }

        void AddSection() {
            String^ newSection = textBoxNewSection->Text->Trim();
            String^ teacher = textBoxTeacher->Text->Trim();
            String^ room = textBoxRoom->Text->Trim();
            String^ course = textBoxCourse->Text->Trim();
            String^ day = textBoxDay->Text->Trim();
            String^ startTime = textBoxStartTime->Text->Trim();
            String^ endTime = textBoxEndTime->Text->Trim();

            if (newSection->Length == 0 || teacher->Length == 0 || room->Length == 0 || course->Length == 0 || day->Length == 0 || startTime->Length == 0 || endTime->Length == 0) {
                MessageBox::Show("Please fill in all the fields.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
                return;
            }

            String^ connectionString = "Data Source=DESKTOP-AKQDUJ4\\SQLEXPRESS;Initial Catalog=Timetable;Integrated Security=True";
            String^ query = "INSERT INTO [dbo].[USER4] (Section, TeacherName, Room, Course, Day, StartTime, EndTime) VALUES (@Section, @Teacher, @Room, @Course, @Day, @StartTime, @EndTime)";

            try {
                SqlConnection^ connection = gcnew SqlConnection(connectionString);
                SqlCommand^ command = gcnew SqlCommand(query, connection);
                command->Parameters->AddWithValue("@Section", newSection);
                command->Parameters->AddWithValue("@Teacher", teacher);
                command->Parameters->AddWithValue("@Room", room);
                command->Parameters->AddWithValue("@Course", course);
                command->Parameters->AddWithValue("@Day", day);
                command->Parameters->AddWithValue("@StartTime", startTime);
                command->Parameters->AddWithValue("@EndTime", endTime);

                connection->Open();
                int rowsAffected = command->ExecuteNonQuery();
                connection->Close();

                if (rowsAffected > 0) {
                    MessageBox::Show("Section added successfully.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
                }
                else {
                    MessageBox::Show("Failed to add section.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                }
            }
            catch (Exception^ ex) {
                MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }

            DisplaySectionwiseData();
        }

        void DeleteSection() {
            if (listBoxSections->SelectedItem == nullptr) {
                MessageBox::Show("Please select a section to delete.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
                return;
            }

            String^ selectedSection = listBoxSections->SelectedItem->ToString();
            String^ connectionString = "Data Source=DESKTOP-AKQDUJ4\\SQLEXPRESS;Initial Catalog=Timetable;Integrated Security=True";
            String^ query = "DELETE FROM [dbo].[USER4] WHERE Section = @Section";

            try {
                SqlConnection^ connection = gcnew SqlConnection(connectionString);
                SqlCommand^ command = gcnew SqlCommand(query, connection);
                command->Parameters->AddWithValue("@Section", selectedSection);

                connection->Open();
                int rowsAffected = command->ExecuteNonQuery();
                connection->Close();

                if (rowsAffected > 0) {
                    MessageBox::Show("Section deleted successfully.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
                }
                else {
                    MessageBox::Show("Failed to delete section.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                }
            }
            catch (Exception^ ex) {
                MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }

            DisplaySectionwiseData();
        }
    private: System::Void textBoxDay_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void labelRoom_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxEndTime_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxStartTime_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxNewSection_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxTeacher_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxRoom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listBoxDetails_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void labelStartTime_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void labelEndTime_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxCourse_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void labelTeacher_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void labelDay_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
