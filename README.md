Matrix Manipulator
Description
Matrix Manipulator is a C++ program developed as part of a second-semester Programming Fundamentals project during my Bachelor of Science in Computer Science at the University of Central Punjab. The program performs various matrix operations using dynamic 2D arrays and pointers, adhering to constraints that prohibit Object-Oriented Programming (OOP) concepts. It supports input via console or text files and allows output to be displayed on the console or saved to a file (data.txt). The project demonstrates fundamental programming concepts such as arrays, loops, functions, dynamic memory allocation, and file handling while ensuring no memory leaks.
The program offers the following matrix operations:

Sum of all matrix elements
Product of all matrix elements
Row-wise average
Column-wise average
Whole matrix average
Row-wise sorting
Column-wise sorting
Addition of two matrices
Subtraction of two matrices
Matrix transpose

How It Works
The program uses a menu-driven interface to allow users to select a matrix operation (1–10). Users can input matrix data either manually via the console or by reading from a text file. The program dynamically allocates 2D arrays using pointers to store matrices and performs the selected operation. Results can be displayed on the console or saved to data.txt. Memory is carefully managed to prevent leaks, with deallocation performed after each operation.
Key Features

Dynamic Memory Allocation: Uses new and delete to create and free 2D arrays, ensuring flexibility for matrices of any size.
Input Flexibility: Supports both console input and file-based input for matrix data.
Output Options: Results can be displayed on the console or saved to a file (data.txt).
Error Handling: Validates matrix dimensions for operations like addition and subtraction, and checks for file existence.
Sorting Algorithms: Implements bubble sort for row-wise and column-wise sorting.

Code Structure

Main Function: Displays a menu, handles user input for operation selection, and manages input/output modes (console or file).
Matrix Operations:
sum_of_matrix: Calculates the sum of all elements.
product_matrix: Computes the product of all elements.
row_wise_avg: Calculates the average of each row.
column_wise_avg: Calculates the average of each column.
whole_matrix_avg: Computes the average of all elements.
row_wise_sort: Sorts each row in ascending order using bubble sort.
column_wise_sort: Sorts each column in ascending order using bubble sort.
two_matrices_addition: Adds two matrices if they have the same dimensions.
two_matrices_subtraction: Subtracts one matrix from another if dimensions match.
matrix_transpose: Transposes the matrix by swapping rows and columns.


Memory Management: Dynamically allocates memory for matrices and deallocates it after use to prevent memory leaks.
File Handling: Uses ifstream for reading matrix data from text files and ofstream for saving results to data.txt.

Prerequisites

C++ compiler (e.g., g++ for Linux/Mac or MinGW for Windows)
Git (for cloning the repository)
Text editor or IDE (e.g., VS Code, Code::Blocks)

Installation

Clone the repository:git clone https://github.com/MyProVerse/Matrix_Manipulator_CPP.git


Navigate to the project directory:cd Matrix_Manipulator_CPP


Compile the program:g++ Matrix_Manipulator.cpp -o Matrix_Manipulator


Run the program:./Matrix_Manipulator



Usage

Run the program and select an operation (1–10) from the menu.
Choose input method:
Option 1: Enter matrix dimensions and elements manually.
Option 2: Provide a text file (e.g., matrix1.txt) containing matrix data.


For operations 8 and 9 (addition/subtraction), provide a second matrix via console or another file (e.g., matrix2.txt).
Choose output method:
Option 1: Display results on the console.
Option 2: Save results to data.txt.


Press 0 to exit or any other key to continue with another operation.

Sample Input Files
The repository includes two sample text files for file-based input:

matrix1.txt: A 2x3 matrix1 2 3
4 5 6


matrix2.txt: A 2x3 matrix for addition/subtraction7 8 9
10 11 12



Example Usage
Input via Console:

Select option 1 for sum of matrix.
Enter rows (2) and columns (3).
Input matrix elements: 1 2 3 4 5 6.
Choose output option 1 to display the sum (21) on the console.

Input via File:

Select option 10 for matrix transpose.
Choose file input (2) and enter matrix1.txt.
Choose output option 2 to save the transposed matrix to data.txt.

Contribution
Contributions are welcome! To contribute:

Fork the repository.
Create a new branch:git checkout -b feature/your-feature-name


Make changes and commit:git commit -m "Add your feature description"


Push to your branch:git push origin feature/your-feature-name


Open a pull request on GitHub.

Suggested Improvements

Add input validation for negative dimensions or non-integer inputs.
Optimize sorting algorithms (e.g., use quicksort instead of bubble sort).
Enhance file handling to support different file formats or error checking.
Add unit tests for matrix operations.
Improve user interface with better formatting or colored output.

About the Author
Hi, I'm Ali Zaman (@MyProVerse), a Computer Science student at the University of Central Punjab and a Full Stack Developer at CodingBeings Software House. I’m passionate about web development, AI, and open-source projects. Connect with me on LinkedIn or email me at alizaman6780@gmail.com.
License
This project is licensed under the MIT License. See the LICENSE file for details.
