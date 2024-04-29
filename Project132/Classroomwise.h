#pragma once

namespace Project132 {

    using namespace System;
    using namespace System::Windows::Forms;

    public ref class Classroomwise : public System::Windows::Forms::Form
    {
    public:
        Classroomwise(void)
        {
            InitializeComponent();
            // Initialize the timetable with data for 5 students
            InitializeTimetable();
        }

   

    private:
        // Data for students
        array<String^>^ studentNames;
        array<String^>^ studentCourses;
        array<String^>^ studentRoom;
        array<String^>^ studentSections;
        array<String^>^ studentDays;
        array<String^>^ studentTimes;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Label^ label6;
           int numberOfStudents; // To keep track of the number of students

        /// <summary>
        /// Initialize the timetable with data for 5 students
        /// </summary>
        void InitializeTimetable() {
            numberOfStudents = 5;
            studentNames = gcnew array<String^>(numberOfStudents);
            studentCourses = gcnew array<String^>(numberOfStudents);
            studentRoom = gcnew array<String^>(numberOfStudents);
            studentSections = gcnew array<String^>(numberOfStudents);
            studentDays = gcnew array<String^>(numberOfStudents);
            studentTimes = gcnew array<String^>(numberOfStudents);

            // Initialize data for 5 students
            studentNames[0] = "Ma'am Sadaf";
            studentCourses[0] = "DS";
            studentRoom[0] = "4-17";
            studentSections[0] = "B";
            studentDays[0] = "Monday";
            studentTimes[0] = "11:00 AM";

            studentNames[1] = "Ma'am Joddat";
            studentCourses[1] = "CF";
            studentRoom[1] = "4-18";
            studentSections[1] = "A";
            studentDays[1] = "Tuesday";
            studentTimes[1] = "12:00 PM";

            studentNames[2] = "Sir Zubair";
            studentCourses[2] = "LA";
            studentRoom[2] = "4-19";
            studentSections[2] = "A";
            studentDays[2] = "Wednesday";
            studentTimes[2] = "1:00 PM";

            studentNames[3] = "Dr. Tamim";
            studentCourses[3] = "OOP";
            studentRoom[3] = "4-01";
            studentSections[3] = "B";
            studentDays[3] = "Thursday";
            studentTimes[3] = "2:00 PM";

            studentNames[4] = "Sir Ghulam Qamar";
            studentCourses[4] = "ECS";
            studentRoom[4] = "4-02";
            studentSections[4] = "C";
            studentDays[4] = "Friday";
            studentTimes[4] = "3:00 PM";
        }

        /// <summary>
        /// Display data for all students
        /// </summary>
        void DisplayStudentData() {
            listBoxStudents->Items->Clear(); // Clear existing items
            for (int i = 0; i < numberOfStudents; i++) {
                // Add student names to the list box
                listBoxStudents->Items->Add(studentNames[i]);
            }
        }

        // Function to add a new student
        void AddStudent(String^ name, String^ course, String^ room, String^ section, String^ day, String^ time) {
            // Resize the arrays to accommodate the new student
            Array::Resize(studentNames, numberOfStudents + 1);
            Array::Resize(studentCourses, numberOfStudents + 1);
            Array::Resize(studentRoom, numberOfStudents + 1);
            Array::Resize(studentSections, numberOfStudents + 1);
            Array::Resize(studentDays, numberOfStudents + 1);
            Array::Resize(studentTimes, numberOfStudents + 1);

            // Add the new student
            studentNames[numberOfStudents] = name;
            studentCourses[numberOfStudents] = course;
            studentRoom[numberOfStudents] = room;
            studentSections[numberOfStudents] = section;
            studentDays[numberOfStudents] = day;
            studentTimes[numberOfStudents] = time;

            numberOfStudents++; // Increment the count of students
        }

        // Function to remove data for a student at a given index
        void RemoveStudent(int index) {
            if (index < 0 || index >= numberOfStudents) {
                MessageBox::Show("Invalid student index!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                return;
            }
            // Shift the data of remaining students to fill the gap
            for (int i = index; i < numberOfStudents - 1; i++) {
                studentNames[i] = studentNames[i + 1];
                studentCourses[i] = studentCourses[i + 1];
                studentRoom[i] = studentRoom[i + 1];
                studentSections[i] = studentSections[i + 1];
                studentDays[i] = studentDays[i + 1];
                studentTimes[i] = studentTimes[i + 1];
            }
            // Resize the arrays to remove the last student
            Array::Resize(studentNames, numberOfStudents - 1);
            Array::Resize(studentCourses, numberOfStudents - 1);
            Array::Resize(studentRoom, numberOfStudents - 1);
            Array::Resize(studentSections, numberOfStudents - 1);
            Array::Resize(studentDays, numberOfStudents - 1);
            Array::Resize(studentTimes, numberOfStudents - 1);

            numberOfStudents--; // Decrement the count of students
        }

        // Event handler for the "Add" button click
        System::Void addButton_Click(System::Object^ sender, System::EventArgs^ e) {
            // Get data from text boxes
            String^ name = textBoxName->Text;
            String^ course = textBoxCourse->Text;
            String^ room = textBoxRoom->Text;
            String^ section = textBoxSection->Text;
            String^ day = textBoxDay->Text;
            String^ time = textBoxTime->Text;

            // Add the student
            AddStudent(name, course, room, section, day, time);

            // Display the updated student data
            DisplayStudentData();
        }

        // Event handler for the "Remove" button click
        System::Void removeButton_Click(System::Object^ sender, System::EventArgs^ e) {
            int selectedIndex = listBoxStudents->SelectedIndex;
            if (selectedIndex != -1) {
                // Remove the selected student
                RemoveStudent(selectedIndex);

                // Display the updated student data
                DisplayStudentData();
            }
            else {
                MessageBox::Show("Please select a student to remove.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
            }
        }

        // Event handler for the "Show Data" button click
        System::Void showDataButton_Click(System::Object^ sender, System::EventArgs^ e) {
            int selectedIndex = listBoxStudents->SelectedIndex;
            if (selectedIndex != -1) {
                // Display data for the selected student
                String^ data = String::Format("Name: {0}\nCourse: {1}\nRoom: {2}\nSection: {3}\nDay: {4}\nTime: {5}",
                    studentNames[selectedIndex], studentCourses[selectedIndex], studentRoom[selectedIndex],
                    studentSections[selectedIndex], studentDays[selectedIndex], studentTimes[selectedIndex]);
                MessageBox::Show(data, "Student Data", MessageBoxButtons::OK, MessageBoxIcon::Information);
            }
            else {
                MessageBox::Show("Please select a student to show data.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
            }
        }

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->listBoxStudents = (gcnew System::Windows::Forms::ListBox());
            this->textBoxName = (gcnew System::Windows::Forms::TextBox());
            this->textBoxCourse = (gcnew System::Windows::Forms::TextBox());
            this->textBoxRoom = (gcnew System::Windows::Forms::TextBox());
            this->textBoxSection = (gcnew System::Windows::Forms::TextBox());
            this->textBoxDay = (gcnew System::Windows::Forms::TextBox());
            this->textBoxTime = (gcnew System::Windows::Forms::TextBox());
            this->addButton = (gcnew System::Windows::Forms::Button());
            this->removeButton = (gcnew System::Windows::Forms::Button());
            this->showDataButton = (gcnew System::Windows::Forms::Button());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // listBoxStudents
            // 
            this->listBoxStudents->FormattingEnabled = true;
            this->listBoxStudents->ItemHeight = 16;
            this->listBoxStudents->Location = System::Drawing::Point(16, 15);
            this->listBoxStudents->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->listBoxStudents->Name = L"listBoxStudents";
            this->listBoxStudents->Size = System::Drawing::Size(265, 292);
            this->listBoxStudents->TabIndex = 0;
            // 
            // textBoxName
            // 
            this->textBoxName->Location = System::Drawing::Point(367, 17);
            this->textBoxName->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->textBoxName->Name = L"textBoxName";
            this->textBoxName->Size = System::Drawing::Size(132, 22);
            this->textBoxName->TabIndex = 1;
            // 
            // textBoxCourse
            // 
            this->textBoxCourse->Location = System::Drawing::Point(367, 49);
            this->textBoxCourse->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->textBoxCourse->Name = L"textBoxCourse";
            this->textBoxCourse->Size = System::Drawing::Size(132, 22);
            this->textBoxCourse->TabIndex = 2;
            // 
            // textBoxRoom
            // 
            this->textBoxRoom->Location = System::Drawing::Point(367, 81);
            this->textBoxRoom->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->textBoxRoom->Name = L"textBoxRoom";
            this->textBoxRoom->Size = System::Drawing::Size(132, 22);
            this->textBoxRoom->TabIndex = 3;
            // 
            // textBoxSection
            // 
            this->textBoxSection->Location = System::Drawing::Point(367, 113);
            this->textBoxSection->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->textBoxSection->Name = L"textBoxSection";
            this->textBoxSection->Size = System::Drawing::Size(132, 22);
            this->textBoxSection->TabIndex = 4;
            // 
            // textBoxDay
            // 
            this->textBoxDay->Location = System::Drawing::Point(367, 145);
            this->textBoxDay->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->textBoxDay->Name = L"textBoxDay";
            this->textBoxDay->Size = System::Drawing::Size(132, 22);
            this->textBoxDay->TabIndex = 5;
            // 
            // textBoxTime
            // 
            this->textBoxTime->Location = System::Drawing::Point(367, 175);
            this->textBoxTime->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->textBoxTime->Name = L"textBoxTime";
            this->textBoxTime->Size = System::Drawing::Size(132, 22);
            this->textBoxTime->TabIndex = 6;
            // 
            // addButton
            // 
            this->addButton->Location = System::Drawing::Point(291, 226);
            this->addButton->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->addButton->Name = L"addButton";
            this->addButton->Size = System::Drawing::Size(100, 28);
            this->addButton->TabIndex = 7;
            this->addButton->Text = L"Add";
            this->addButton->UseVisualStyleBackColor = true;
            this->addButton->Click += gcnew System::EventHandler(this, &Classroomwise::addButton_Click);
            // 
            // removeButton
            // 
            this->removeButton->Location = System::Drawing::Point(291, 263);
            this->removeButton->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->removeButton->Name = L"removeButton";
            this->removeButton->Size = System::Drawing::Size(100, 28);
            this->removeButton->TabIndex = 8;
            this->removeButton->Text = L"Remove";
            this->removeButton->UseVisualStyleBackColor = true;
            this->removeButton->Click += gcnew System::EventHandler(this, &Classroomwise::removeButton_Click);
            // 
            // showDataButton
            // 
            this->showDataButton->Location = System::Drawing::Point(399, 226);
            this->showDataButton->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->showDataButton->Name = L"showDataButton";
            this->showDataButton->Size = System::Drawing::Size(100, 65);
            this->showDataButton->TabIndex = 9;
            this->showDataButton->Text = L"Show Data";
            this->showDataButton->UseVisualStyleBackColor = true;
            this->showDataButton->Click += gcnew System::EventHandler(this, &Classroomwise::showDataButton_Click);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(297, 17);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(47, 16);
            this->label1->TabIndex = 10;
            this->label1->Text = L"Name:";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(297, 49);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(53, 16);
            this->label2->TabIndex = 11;
            this->label2->Text = L"Course:";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(297, 84);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(51, 16);
            this->label3->TabIndex = 12;
            this->label3->Text = L"Room#";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(297, 119);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(55, 16);
            this->label4->TabIndex = 13;
            this->label4->Text = L"Section:";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Location = System::Drawing::Point(297, 151);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(35, 16);
            this->label5->TabIndex = 14;
            this->label5->Text = L"Day:";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Location = System::Drawing::Point(297, 181);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(41, 16);
            this->label6->TabIndex = 15;
            this->label6->Text = L"Time:";
            // 
            // Classroomwise
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(512, 321);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->showDataButton);
            this->Controls->Add(this->removeButton);
            this->Controls->Add(this->addButton);
            this->Controls->Add(this->textBoxTime);
            this->Controls->Add(this->textBoxDay);
            this->Controls->Add(this->textBoxSection);
            this->Controls->Add(this->textBoxRoom);
            this->Controls->Add(this->textBoxCourse);
            this->Controls->Add(this->textBoxName);
            this->Controls->Add(this->listBoxStudents);
            this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
            this->Name = L"Classroomwise";
            this->Text = L"Classroomwise Timetable";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

        System::Windows::Forms::ListBox^ listBoxStudents;
        System::Windows::Forms::TextBox^ textBoxName;
        System::Windows::Forms::TextBox^ textBoxCourse;
        System::Windows::Forms::TextBox^ textBoxRoom;
        System::Windows::Forms::TextBox^ textBoxSection;
        System::Windows::Forms::TextBox^ textBoxDay;
        System::Windows::Forms::TextBox^ textBoxTime;
        System::Windows::Forms::Button^ addButton;
        System::Windows::Forms::Button^ removeButton;
        System::Windows::Forms::Button^ showDataButton;

    };
}

