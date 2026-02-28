📘 Digital Attendance System
🎓 Course Information
Course Code: EEE227 – Introduction to C++ Programming
Programme: HND Electrical Engineering (Level 200)
Assessment: Mid-Semester Capstone Project (30%)
Development Tool: Visual Studio Code
Version Control: Git & GitHub
Platform: Windows (Offline First)

📌 Project Overview
The Digital Attendance System is a console-based C++ application developed to replace traditional paper-based attendance recording in lecture halls.

The system provides an efficient way to:

Register students

Create lecture sessions

Mark attendance (Present, Absent, Late)

Generate attendance reports

Store data persistently using file handling

This project demonstrates practical application of core C++ programming concepts in solving a real-world engineering problem.

🎯 Objectives
This project demonstrates the ability to:

Apply object-oriented programming concepts

Design a structured, menu-driven console application

Use vectors for data storage

Implement file handling using fstream

Maintain persistent data between program executions

Use GitHub for professional version control

🏗️ System Features
👨‍🎓 1. Student Management
Register new students

View all registered students

Search student by index number

📅 2. Attendance Session Management
Create lecture session

Course Code

Date

Start Time

Duration

Mark attendance for each student

Update attendance records

📊 3. Reports & Summary
View attendance for a specific course

Display summary:

Present count

Late count

Absent count

💾 4. File Storage & Persistence
The system uses text and CSV files to ensure data persists between executions:

students.txt

attendance.txt

session_EE201_YYYY_MM_DD.txt

students.csv

sessions.csv

attendance.csv

File handling is implemented using:

#include <fstream>
#include <sstream>
🧠 Technologies Used
Language: C++

Concepts Applied:

Classes & Objects

Vectors

Functions

File Handling (ifstream, ofstream)

Menu-driven program structure

IDE: Visual Studio Code

Compiler: g++ (MinGW)

Version Control: Git & GitHub

📂 Project Structure
digital-attendance-system/
│── main.cpp
│── README.md
│── students.txt
│── attendance.txt
│── session_EE201_YYYY_MM_DD.txt
│── students.csv
│── sessions.csv
│── attendance.csv
🔄 Weekly Development Progress
✅ Week 1
Implemented Student class

Added student registration and viewing

Basic menu structure

✅ Week 2
Implemented AttendanceSession class

Created lecture session functionality

Improved program structure

✅ Week 3
Implemented AttendanceRecord class

Added attendance marking logic

Generated attendance summary reports

✅ Week 4
Implemented file saving and loading

Added CSV export functionality

Refactored code for readability

Final testing and documentation

▶️ How to Compile and Run
Compile:
g++ main.cpp -o attendance
Run:
attendance
(Windows users may use attendance.exe)

🧪 Sample Workflow
Register students

Create attendance session

Mark attendance

View summary

Save records

Exit and restart program to confirm persistence

📈 Marking Alignment
Component	Status
Student Management	✅ Implemented
Session Creation	✅ Implemented
Attendance Marking	✅ Implemented
File Storage & Loading	✅ Implemented
Reports & Summary	✅ Implemented
Code Structure & Quality	✅ Structured & Modular
👤 Author
Name: Abdul Nasir Suleman
Programme: HND Electrical Engineering
Course: EEE227 – Introduction to C++ Programming