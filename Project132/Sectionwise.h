#pragma once

namespace Project132 {

    using namespace System;
    using namespace System::Windows::Forms;

    public ref class Sectionwise : public System::Windows::Forms::Form
    {
    public:
        Sectionwise(void)
        {
            InitializeComponent();
            // Initialize the timetable with data for 5 students
            InitializeTimetable();
        }

    protected:

        ~Sectionwise()
        {
            // Destructor code
        }

    private:
        // Data for students
        array<String^>^ studentNames;
        array<String^>^ studentCourses;
        array<String^>^ studentSections;
        array<String^>^ studentDays;
        array<String^>^ studentTimes;
    private: System::Windows::Forms::Label^ label1;
    private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
           int numberOfStudents; // To keep track of the number of students

           /// <summary>
           /// Initialize the timetable with data for 5 students
           /// </summary>
           void InitializeTimetable() {
               numberOfStudents = 5;
               studentNames = gcnew array<String^>(numberOfStudents);
               studentCourses = gcnew array<String^>(numberOfStudents);
               studentSections = gcnew array<String^>(numberOfStudents);
               studentDays = gcnew array<String^>(numberOfStudents);
               studentTimes = gcnew array<String^>(numberOfStudents);

               // Initialize data for 5 students
               studentNames[0] = "Emaan";
               studentCourses[0] = "DS";
               studentSections[0] = "B";
               studentDays[0] = "Monday";
               studentTimes[0] = "11:00 AM";

               studentNames[1] = "Madeiha";
               studentCourses[1] = "DS";
               studentSections[1] = "A";
               studentDays[1] = "Tuesday";
               studentTimes[1] = "12:00 PM";

               studentNames[2] = "John";
               studentCourses[2] = "Math";
               studentSections[2] = "A";
               studentDays[2] = "Wednesday";
               studentTimes[2] = "1:00 PM";

               studentNames[3] = "Alice";
               studentCourses[3] = "Science";
               studentSections[3] = "B";
               studentDays[3] = "Thursday";
               studentTimes[3] = "2:00 PM";

               studentNames[4] = "Bob";
               studentCourses[4] = "English";
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
           void AddStudent(String^ name, String^ course, String^ section, String^ day, String^ time) {
               // Resize the arrays to accommodate the new student
               Array::Resize(studentNames, numberOfStudents + 1);
               Array::Resize(studentCourses, numberOfStudents + 1);
               Array::Resize(studentSections, numberOfStudents + 1);
               Array::Resize(studentDays, numberOfStudents + 1);
               Array::Resize(studentTimes, numberOfStudents + 1);

               // Add the new student
               studentNames[numberOfStudents] = name;
               studentCourses[numberOfStudents] = course;
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
                   studentSections[i] = studentSections[i + 1];
                   studentDays[i] = studentDays[i + 1];
                   studentTimes[i] = studentTimes[i + 1];
               }
               // Resize arrays to remove the last element
               Array::Resize(studentNames, numberOfStudents - 1);
               Array::Resize(studentCourses, numberOfStudents - 1);
               Array::Resize(studentSections, numberOfStudents - 1);
               Array::Resize(studentDays, numberOfStudents - 1);
               Array::Resize(studentTimes, numberOfStudents - 1);

               numberOfStudents--; // Decrement the count of students
           }

           System::Void Add_Click(System::Object^ sender, System::EventArgs^ e) {
               // Add functionality for adding new student data
               String^ name = textBoxName->Text;
               String^ course = textBoxCourse->Text;
               String^ section = textBoxSection->Text;
               String^ day = textBoxDay->Text;
               String^ time = textBoxTime->Text;
               AddStudent(name, course, section, day, time);
               DisplayStudentData();
           }

           System::Void Remove_Click(System::Object^ sender, System::EventArgs^ e) {
               // Remove functionality for removing student data
               int index = listBoxStudents->SelectedIndex; // Get the selected index from the list box
               if (index != -1) { // Check if an item is selected
                   RemoveStudent(index);
                   DisplayStudentData();
               }
               else {
                   MessageBox::Show("Please select a student to remove.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
               }
           }

           System::Void Showdata_Click(System::Object^ sender, System::EventArgs^ e) {
               // Clear the list box
               listBoxStudents->Items->Clear();

               // Display data for all students
               for (int i = 0; i < numberOfStudents; i++) {
                   String^ studentInfo = "Name: " + studentNames[i] + "\n" +
                       "Course: " + studentCourses[i] + "\n" +
                       "Section: " + studentSections[i] + "\n" +
                       "Day: " + studentDays[i] + "\n" +
                       "Time: " + studentTimes[i];
                   listBoxStudents->Items->Add(studentInfo);
               }
           }

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
               this->listBoxStudents = (gcnew System::Windows::Forms::ListBox());
               this->labelName = (gcnew System::Windows::Forms::Label());
               this->labelCourse = (gcnew System::Windows::Forms::Label());
               this->labelSection = (gcnew System::Windows::Forms::Label());
               this->labelDay = (gcnew System::Windows::Forms::Label());
               this->labelTime = (gcnew System::Windows::Forms::Label());
               this->label1 = (gcnew System::Windows::Forms::Label());
               this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
               this->SuspendLayout();
               // 
               // buttonAdd
               // 
               this->buttonAdd->Location = System::Drawing::Point(16, 488);
               this->buttonAdd->Margin = System::Windows::Forms::Padding(4);
               this->buttonAdd->Name = L"buttonAdd";
               this->buttonAdd->Size = System::Drawing::Size(100, 28);
               this->buttonAdd->TabIndex = 0;
               this->buttonAdd->Text = L"Add";
               this->buttonAdd->UseVisualStyleBackColor = true;
               this->buttonAdd->Click += gcnew System::EventHandler(this, &Sectionwise::Add_Click);
               // 
               // buttonRemove
               // 
               this->buttonRemove->Location = System::Drawing::Point(164, 488);
               this->buttonRemove->Margin = System::Windows::Forms::Padding(4);
               this->buttonRemove->Name = L"buttonRemove";
               this->buttonRemove->Size = System::Drawing::Size(100, 28);
               this->buttonRemove->TabIndex = 1;
               this->buttonRemove->Text = L"Remove";
               this->buttonRemove->UseVisualStyleBackColor = true;
               this->buttonRemove->Click += gcnew System::EventHandler(this, &Sectionwise::Remove_Click);
               // 
               // buttonShowData
               // 
               this->buttonShowData->Location = System::Drawing::Point(310, 488);
               this->buttonShowData->Margin = System::Windows::Forms::Padding(4);
               this->buttonShowData->Name = L"buttonShowData";
               this->buttonShowData->Size = System::Drawing::Size(100, 28);
               this->buttonShowData->TabIndex = 2;
               this->buttonShowData->Text = L"Show Data";
               this->buttonShowData->UseVisualStyleBackColor = true;
               this->buttonShowData->Click += gcnew System::EventHandler(this, &Sectionwise::Showdata_Click);
               // 
               // textBoxName
               // 
               this->textBoxName->Location = System::Drawing::Point(77, 62);
               this->textBoxName->Margin = System::Windows::Forms::Padding(4);
               this->textBoxName->Name = L"textBoxName";
               this->textBoxName->Size = System::Drawing::Size(132, 22);
               this->textBoxName->TabIndex = 3;
               // 
               // textBoxCourse
               // 
               this->textBoxCourse->Location = System::Drawing::Point(77, 104);
               this->textBoxCourse->Margin = System::Windows::Forms::Padding(4);
               this->textBoxCourse->Name = L"textBoxCourse";
               this->textBoxCourse->Size = System::Drawing::Size(132, 22);
               this->textBoxCourse->TabIndex = 4;
               // 
               // textBoxSection
               // 
               this->textBoxSection->Location = System::Drawing::Point(77, 144);
               this->textBoxSection->Margin = System::Windows::Forms::Padding(4);
               this->textBoxSection->Name = L"textBoxSection";
               this->textBoxSection->Size = System::Drawing::Size(132, 22);
               this->textBoxSection->TabIndex = 5;
               // 
               // textBoxDay
               // 
               this->textBoxDay->Location = System::Drawing::Point(77, 189);
               this->textBoxDay->Margin = System::Windows::Forms::Padding(4);
               this->textBoxDay->Name = L"textBoxDay";
               this->textBoxDay->Size = System::Drawing::Size(132, 22);
               this->textBoxDay->TabIndex = 6;
               // 
               // textBoxTime
               // 
               this->textBoxTime->Location = System::Drawing::Point(79, 230);
               this->textBoxTime->Margin = System::Windows::Forms::Padding(4);
               this->textBoxTime->Name = L"textBoxTime";
               this->textBoxTime->Size = System::Drawing::Size(132, 22);
               this->textBoxTime->TabIndex = 7;
               // 
               // listBoxStudents
               // 
               this->listBoxStudents->FormattingEnabled = true;
               this->listBoxStudents->ItemHeight = 16;
               this->listBoxStudents->Location = System::Drawing::Point(16, 292);
               this->listBoxStudents->Margin = System::Windows::Forms::Padding(4);
               this->listBoxStudents->Name = L"listBoxStudents";
               this->listBoxStudents->Size = System::Drawing::Size(443, 164);
               this->listBoxStudents->TabIndex = 8;
               // 
               // labelName
               // 
               this->labelName->AutoSize = true;
               this->labelName->Location = System::Drawing::Point(13, 62);
               this->labelName->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->labelName->Name = L"labelName";
               this->labelName->Size = System::Drawing::Size(47, 16);
               this->labelName->TabIndex = 9;
               this->labelName->Text = L"Name:";
               // 
               // labelCourse
               // 
               this->labelCourse->AutoSize = true;
               this->labelCourse->Location = System::Drawing::Point(15, 104);
               this->labelCourse->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->labelCourse->Name = L"labelCourse";
               this->labelCourse->Size = System::Drawing::Size(53, 16);
               this->labelCourse->TabIndex = 10;
               this->labelCourse->Text = L"Course:";
               // 
               // labelSection
               // 
               this->labelSection->AutoSize = true;
               this->labelSection->Location = System::Drawing::Point(13, 144);
               this->labelSection->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->labelSection->Name = L"labelSection";
               this->labelSection->Size = System::Drawing::Size(55, 16);
               this->labelSection->TabIndex = 11;
               this->labelSection->Text = L"Section:";
               // 
               // labelDay
               // 
               this->labelDay->AutoSize = true;
               this->labelDay->Location = System::Drawing::Point(13, 189);
               this->labelDay->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->labelDay->Name = L"labelDay";
               this->labelDay->Size = System::Drawing::Size(35, 16);
               this->labelDay->TabIndex = 12;
               this->labelDay->Text = L"Day:";
               // 
               // labelTime
               // 
               this->labelTime->AutoSize = true;
               this->labelTime->Location = System::Drawing::Point(13, 233);
               this->labelTime->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
               this->labelTime->Name = L"labelTime";
               this->labelTime->Size = System::Drawing::Size(41, 16);
               this->labelTime->TabIndex = 13;
               this->labelTime->Text = L"Time:";
               // 
               // label1
               // 
               this->label1->AutoSize = true;
               this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label1->Location = System::Drawing::Point(104, 9);
               this->label1->Name = L"label1";
               this->label1->Size = System::Drawing::Size(266, 25);
               this->label1->TabIndex = 14;
               this->label1->Text = L"SectionwisewiseTimetable";
               // 
               // Sectionwise
               // 
               this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
               this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
               this->ClientSize = System::Drawing::Size(492, 561);
               this->Controls->Add(this->label1);
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
               this->Margin = System::Windows::Forms::Padding(4);
               this->Name = L"Sectionwise";
               this->Text = L"MyForm";
               this->ResumeLayout(false);
               this->PerformLayout();

           }

           System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
               // Display student data when the form loads
               DisplayStudentData();
           }

    private:
        System::Windows::Forms::Button^ buttonAdd;
        System::Windows::Forms::Button^ buttonRemove;
        System::Windows::Forms::Button^ buttonShowData;
        System::Windows::Forms::TextBox^ textBoxName;
        System::Windows::Forms::TextBox^ textBoxCourse;
        System::Windows::Forms::TextBox^ textBoxSection;
        System::Windows::Forms::TextBox^ textBoxDay;
        System::Windows::Forms::TextBox^ textBoxTime;
        System::Windows::Forms::ListBox^ listBoxStudents;
        System::Windows::Forms::Label^ labelName;
        System::Windows::Forms::Label^ labelCourse;
        System::Windows::Forms::Label^ labelSection;
        System::Windows::Forms::Label^ labelDay;
        System::Windows::Forms::Label^ labelTime;
    };
}
