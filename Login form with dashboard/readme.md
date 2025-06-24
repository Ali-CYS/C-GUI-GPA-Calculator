
# Login and Registration System (RAD Studio C++ Project)

## Overview

This project implements a basic login and registration system with a student dashboard using **RAD Studio C++ Builder** and **VCL (Visual Component Library)** for the graphical user interface. It demonstrates file handling, object-oriented programming, and GUI interaction in C++.

---

## 📚 Libraries & Tools

- **RAD Studio C++ Builder** (Community Edition)
- **VCL (Visual Component Library)** for GUI
- Standard C++ libraries (e.g., `<fstream>`, `<vector>`, `<cstring>`)

---

## 🔧 Project Structure

The application consists of three main forms:

1. **Main Form**  
   - Acts as the entry point.
   - Contains buttons to open either the registration or login form.
   - Uses event-driven programming to load and hide relevant forms.

2. **Registration Form**  
   - Allows users to register by entering details like name, school, and password.
   - Stores the data in a file with comma-separated values.
   - Uses `AnsiString` for GUI inputs, converted to `std::string` using `c_str()` for compatibility with `fstream`.

3. **Login Form**  
   - Reads user credentials from the saved file.
   - Parses CSV-formatted lines using `stringstream` and a `vector` to split fields.
   - Verifies the username and password using `strcmp`.
   - If valid, it opens the Student Dashboard; otherwise, an error form is shown.

4. **Student Dashboard**  
   - Displays a dropdown of courses.
   - Allows students to register for available courses.
   - Prevents duplicate course registration using runtime checks.
   - Each student has a unique `.txt` file storing their enrolled courses.
   - Uses a `TStringList` to manage and write data line-by-line.
   - Displays enrolled courses using a `ListBox`.

---

## 🧠 Key Concepts Demonstrated

- GUI programming with RAD Studio
- File handling with C++
- String manipulation and conversion between `AnsiString` and `std::string`
- Conditional logic with `if`, `for`, and functions
- CSV parsing using `stringstream` and `vector`
- Preventing duplicate entries
- Real-time file updates based on user input

---

## 🛠️ Challenges Faced

- Integrating GUI (VCL) with standard C++ logic.
- Converting `AnsiString` from GUI components to standard strings for backend file operations.
- Ensuring proper parsing and error handling when reading and writing user data.
- Avoiding duplicate course registration in real time.

---

## 📁 File Handling

- Each student is associated with a unique text file.
- Data is saved and loaded using standard file streams.
- Course selections are stored line-by-line and loaded dynamically.

---

## ✅ Features

- User registration and login system
- Dashboard for course registration
- Duplicate course check
- File-based data storage
- Basic error handling for incorrect logins and duplicate entries

---

## 📌 Note

This project is created using the **community edition of RAD Studio**, which is free for non-commercial use.

---

