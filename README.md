# final
![image](https://github.com/user-attachments/assets/fa26913c-da97-4fa5-88a3-1c163c932954)







GPA Calculator:
The Program is designed to help students calculate their Grade Average point (GPA) based on their grades and credit hours for six courses. It takes user inputs for grade and credit hours through the text boxes , and Tells the overall GPA of the student 


INPUT:

We ask the user to input the grade points. Each grade point is in accordance with the letter grade. We use the following GPA letter grade logic:
GPA Range	Letter Grade
4 and above	A
3.5 to 3.99	B+
3 to 3.49	B
2.5 to 2.99	C+
2 to 2.49	C
1.5 to 1.99	D+
1.0 to 1.49	D
0.0 to 0.99	F
Below Zero(error)	Invalid

There is also a slider (trackbar) added to make it easier for the user to input the values in the text making some ease for the user.

 
 
FLOW OF  CODE:


1.	Input Parsing and Conversion:
We take the credit hours from text box and then convert in to a numeric data type by “System::Convert::ToDouble”
2.	Grade point Calculation:
We multiply each grade point with its corresponding credit hour and then sum them up to calculate the total grade point.
“double gradepoints = (grade1 * credit1) + (grade2 * credit2) + ...;”
3.	Credit hours Calculation:
We then sum up all the credit hours:
“double credithours = credit1 + credit2 + ...;”
4.	GPA Calculation:
The program divides the total grade points by total credit hours to compute the GPA
“double gpa = gradepoints / credithours;”


LOGIC OF CODE:


1.	Double type:
We use this to store grades, credithours because they can have decimal values.
2.	System::Convert;
To convert string input from text box to double type.
3.	TextBox:
Collects user inputs for grade and credit hours.
4.	Label:
Used to display the result .
5.	Try-catch:
Handles invalid input like 0 or division by zero.
6.	ToString(“F2”):
Formats the GPA to two decimal places
7.	Conditional Statement:
Sees the Gpa and Maps it to letter grades
8.	MessageBox::Show:
Display error messages in a pop-up window when invalid calculation (division by zero)
OUTPUT:
•	Total Grade Points: The sum of the weighted grades for all courses.
•	Total Credit Hours: The sum of credit hours for all courses.
•	GPA: The weighted average of grades, calculated as total grade points divided by total credit hours.
•	Letter Grade: The GPA is mapped to a corresponding letter grade (e.g., A, B+, C, etc.).
