#pragma once

using namespace System;
using namespace System::Windows::Forms;

namespace Project132 {

    public ref class RoomArranger : public System::Windows::Forms::Form
    {
    public:
        RoomArranger(void)
        {
            InitializeComponent();
            // Initialize the timetable with data for 5 students
            InitializeTimetable();
        }

    private:
        // Data for students
        array<String^>^ studentCourses;
        array<String^>^ studentRoom;
        int numberOfCourses; // To keep track of the number of courses

        /// <summary>
        /// Initialize the timetable with data for 5 courses
        /// </summary>
        void InitializeTimetable() {
            numberOfCourses = 5;
            studentCourses = gcnew array<String^>(numberOfCourses);
            studentRoom = gcnew array<String^>(numberOfCourses);

            // Initialize data for 5 courses (you can customize this as needed)
            studentCourses[0] = "DS";
            studentRoom[0] = "4-17";

            studentCourses[1] = "CF";
            studentRoom[1] = "4-18";

            studentCourses[2] = "LA";
            studentRoom[2] = "4-19";

            studentCourses[3] = "OOP";
            studentRoom[3] = "4-01";

            studentCourses[4] = "ECS";
            studentRoom[4] = "4-02";

            // Display initial room data
            DisplayRoomData();
        }

        // Function to display room data
        void DisplayRoomData() {
            String^ roomData = "Room Data:\n";
            for (int i = 0; i < numberOfCourses; i++) {
                roomData += studentCourses[i] + ": " + studentRoom[i] + "\n";
            }
            labelRoomData->Text = roomData;
        }

        // Function to swap rooms of two courses
        void SwapRooms(String^ courseName1, String^ courseName2) {
            // Find the index of the courses in the studentCourses array
            int index1 = -1;
            int index2 = -1;
            for (int i = 0; i < numberOfCourses; i++) {
                if (studentCourses[i] == courseName1) {
                    index1 = i;
                }
                if (studentCourses[i] == courseName2) {
                    index2 = i;
                }
            }

            // Check if both courses exist
            if (index1 != -1 && index2 != -1) {
                // Swap the rooms
                String^ tempRoom = studentRoom[index1];
                studentRoom[index1] = studentRoom[index2];
                studentRoom[index2] = tempRoom;

                // Display room data after swapping
                DisplayRoomData();

                // Inform the user
                MessageBox::Show("Rooms swapped successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
            }
            else {
                // Inform the user if one or both courses are not found
                MessageBox::Show("One or both courses not found!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }

        // Event handler for the "Swap" button click
        System::Void swapButton_Click(System::Object^ sender, System::EventArgs^ e) {
            // Get course names from text boxes
            String^ courseName1 = textBoxCourse1->Text;
            String^ courseName2 = textBoxCourse2->Text;

            // Swap the rooms for the courses
            SwapRooms(courseName1, courseName2);
        }

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->textBoxCourse1 = (gcnew System::Windows::Forms::TextBox());
            this->textBoxCourse2 = (gcnew System::Windows::Forms::TextBox());
            this->swapButton = (gcnew System::Windows::Forms::Button());
            this->labelCourse1 = (gcnew System::Windows::Forms::Label());
            this->labelCourse2 = (gcnew System::Windows::Forms::Label());
            this->labelRoomData = (gcnew System::Windows::Forms::Label());
            // Other UI components...

            this->SuspendLayout();
            // 
            // textBoxCourse1
            // 
            this->textBoxCourse1->Location = System::Drawing::Point(291, 15);
            this->textBoxCourse1->Name = L"textBoxCourse1";
            this->textBoxCourse1->Size = System::Drawing::Size(100, 22);
            this->textBoxCourse1->TabIndex = 1;
            // 
            // textBoxCourse2
            // 
            this->textBoxCourse2->Location = System::Drawing::Point(291, 53);
            this->textBoxCourse2->Name = L"textBoxCourse2";
            this->textBoxCourse2->Size = System::Drawing::Size(100, 22);
            this->textBoxCourse2->TabIndex = 2;
            // 
            // swapButton
            // 
            this->swapButton->Location = System::Drawing::Point(291, 91);
            this->swapButton->Name = L"swapButton";
            this->swapButton->Size = System::Drawing::Size(100, 28);
            this->swapButton->TabIndex = 3;
            this->swapButton->Text = L"Swap";
            this->swapButton->UseVisualStyleBackColor = true;
            this->swapButton->Click += gcnew System::EventHandler(this, &RoomArranger::swapButton_Click);
            // 
            // labelCourse1
            // 
            this->labelCourse1->AutoSize = true;
            this->labelCourse1->Location = System::Drawing::Point(180, 18);
            this->labelCourse1->Name = L"labelCourse1";
            this->labelCourse1->Size = System::Drawing::Size(75, 17);
            this->labelCourse1->TabIndex = 4;
            this->labelCourse1->Text = L"Course 1:";
            // 
            // labelCourse2
            // 
            this->labelCourse2->AutoSize = true;
            this->labelCourse2->Location = System::Drawing::Point(180, 56);
            this->labelCourse2->Name = L"labelCourse2";
            this->labelCourse2->Size = System::Drawing::Size(75, 17);
            this->labelCourse2->TabIndex = 5;
            this->labelCourse2->Text = L"Course 2:";
            // 
            // labelRoomData
            // 
            this->labelRoomData->AutoSize = true;
            this->labelRoomData->Location = System::Drawing::Point(12, 130);
            this->labelRoomData->Name = L"labelRoomData";
            this->labelRoomData->Size = System::Drawing::Size(85, 17);
            this->labelRoomData->TabIndex = 6;
            this->labelRoomData->Text = L"Room Data:";
            // 
            // RoomArranger
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(419, 174);
            this->Controls->Add(this->labelRoomData);
            this->Controls->Add(this->labelCourse2);
            this->Controls->Add(this->labelCourse1);
            this->Controls->Add(this->swapButton);
            this->Controls->Add(this->textBoxCourse2);
            this->Controls->Add(this->textBoxCourse1);
            this->Name = L"RoomArranger";
            this->Text = L"Room Arranger";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

        System::Windows::Forms::TextBox^ textBoxCourse1;
        System::Windows::Forms::TextBox^ textBoxCourse2;
        System::Windows::Forms::Button^ swapButton;
        System::Windows::Forms::Label^ labelCourse1;
        System::Windows::Forms::Label^ labelCourse2;
        System::Windows::Forms::Label^ labelRoomData;
        // Other UI components...

    };
}
