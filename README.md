# Student Management System (C++)

A modular and object-oriented console-based Student Management System implemented in modern C++.  
This project demonstrates core software engineering principles including encapsulation, separation of concerns, STL usage, and file persistence.



## 🔧 Technical Overview

The system is designed with a layered structure:

- **Student** → Data model class
- **StudentManager** → Business logic and data operations
- **Main** → User interaction layer (menu-driven interface)

Data is stored dynamically using `std::vector` and persisted to disk via CSV file handling.



## 🧠 Engineering Concepts Applied

- Object-Oriented Programming (OOP)
- Encapsulation and abstraction
- Separation of concerns
- Const-correctness
- RAII principles
- STL containers (`std::vector`)
- STL algorithms (`std::sort`)
- Lambda expressions
- File I/O (`std::ifstream`, `std::ofstream`)
- Erase-remove idiom
- Basic error handling



## ⚙️ Features

- Add / remove student records
- Search by unique ID
- Display all students
- Sort by exam grade
- Calculate class average
- Persistent storage (save/load from file)
- Modular architecture



## 📁 Project Structure
student-management-system-cpp/
│
├── Student.h
├── Student.cpp
├── StudentManager.h
├── StudentManager.cpp
├── main.cpp
└── README.md



## 💻 Build & Run

- IDE: Visual Studio 2022
- Language Standard: C++17 (or later recommended)

Steps:
1. Open solution in Visual Studio
2. Build the project
3. Run the application



## 📈 Future Improvements

- Exception-based error handling
- Unit testing integration
- Template-based generic management system
- GUI implementation
- REST API version
- Database integration



## 👩‍💻 Author

Elif Önder  
Electrical & Electronics Engineering Student  


