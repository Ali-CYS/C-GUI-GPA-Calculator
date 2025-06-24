//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <l.cpp>
#include "Unit8.h"


//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm8 *Form8;
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
__fastcall TForm8::TForm8(TComponent* Owner)
	: TForm(Owner)
{
	ComboBox1->Style = csDropDown;
	ComboBox1->Items->Add("Linear Algebra");
	ComboBox1->Items->Add("Information Security");
	ComboBox1->Items->Add("Fundamentals of Programming");
	ComboBox1->Items->Add("Cryptography");
	ComboBox1->Items->Add("Functional English");

}


void __fastcall TForm8::ComboBox1Change(TObject *Sender)
{
	Button1->Enabled = !ComboBox1->Text.Trim().IsEmpty();
}

// Enroll button click
void __fastcall TForm8::Button1Click(TObject *Sender)
{
	String course = ComboBox1->Text.Trim();

	if (course.IsEmpty()) {
		ShowMessage("Please enter or select a course to enroll.");
		return;
	}

	if (ListBox1->Items->IndexOf(course) != -1) {
		ShowMessage("You are already enrolled in " + course + ".");
		return;
	}

	ListBox1->Items->Add(course);
	ComboBox1->Text = "";
	Button1->Enabled = false;

	// Write to file (one line per course)
	String filename = name2 + ".txt";
	TStringList *fileLines = new TStringList();

	try {
		if (FileExists(filename))
			fileLines->LoadFromFile(filename);

		fileLines->Add(course);  // append new course
		fileLines->SaveToFile(filename);
	}
	__finally {
		delete fileLines;
	}
}




// Show clicked course
void __fastcall TForm8::ListBox1Click(TObject *Sender)
{
	int idx = ListBox1->ItemIndex;
	if (idx >= 0) {
		String enrolled = ListBox1->Items->Strings[idx];
		ShowMessage("Enrolled in: " + enrolled);
	}
}

// Optional: Load previous enrollments on form show
void __fastcall TForm8::Label1Click(TObject *Sender)
{
 Label1->Caption = name2;


}
void __fastcall TForm8::FormShow(TObject *Sender)
{
//	Label1->Caption = name1;
}

//---------------------------------------------------------------------------



//---------------------------------------------------------------------------



	// Open the file and read its contents
	void __fastcall TForm8::Button2Click(TObject *Sender)
{

	// Construct the filename using the student's name
	String filename = name2 + ".txt";

    // Check if the file exists
    if (!FileExists(filename)) {
        ShowMessage("No courses enrolled or file not found.");
        return;
    }

    // Open the file and read its contents
	TStringList *courseList = new TStringList();

	try {
        courseList->LoadFromFile(filename);  // Load the courses from the file

        // Clear the ListBox before adding new items
        ListBox1->Items->Clear();

        // Add all courses from the file to the ListBox
		for (int i = 0; i < courseList->Count; i++) {
            ListBox1->Items->Add(courseList->Strings[i]);
        }
    }
    __finally {
		delete courseList;  // Make sure to clean up
	}
}




//---------------------------------------------------------------------------


