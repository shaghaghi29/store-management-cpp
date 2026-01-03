# Store Management System (C++)

## 📌 Project Description
This project is a simple **Store Management System** implemented in **C++** as a **final term project** for the **Fundamentals of Computer Programming** course.

The program is designed for **first semester students** and uses only basic C++ concepts such as **arrays**, **structures**, **functions**, and **file handling**, according to the course requirements.

---

## ✨ Features
- Add new products (name, price, quantity)
- Display all products
- Calculate and display inventory value for each product
- Show low stock products (quantity < 5)
- Search products by name
- Edit or delete existing products
- Save product data to a text file
- Load data from file when the program starts
- Sort products by price (ascending order)

---

## 🧱 Data Structure
Each product contains the following attributes:
- **Name** (string)
- **Price** (double)
- **Quantity** (int)

All products are stored in a **fixed-size array** with a maximum capacity of **50 products**.

---

## ▶️ How to Run
1. Make sure a C++ compiler (such as `g++`) is installed.
2. Compile the program using the following command:
   g++ main.cpp -o app
3. Run the executable file:
   ./app
4. Use the menu displayed in the console to manage store products.

## 👥 Team Members
- **Abolfazl Shaghaghi** – Development
- **Elena Mostafapour** – Development

Note: At the time of submission, only one GitHub account is available.
The second team member will be added to the repository once a GitHub account is created.

## 🎓 Course Information
- University: Mazandaran University of Science and Technology
- Course: Fundamentals of Computer Programming
- Instructor: Dr. Amiri
- Semester: Winter 1404
- Project Type: Final Term Project
- Programming Language: C++

## 📝 Notes
- This project is developed for educational purposes.
- Only basic C++ concepts suitable for first semester students are used.
- The program runs in a console environment.


## 💾 File Handling
Product information is stored in a text file named `data.txt` to preserve data between program executions.

Each line in the file follows this format:
