# Student Record System

## What It Is
A simple C program that stores and displays student information including names and admission numbers. It demonstrates basic C programming concepts like structures, arrays, and file organization.

## Features
- Stores student names and admission numbers
- Displays all records in a formatted table
- Handles multiple student entries
- Safe input handling with buffer limits
- Clean console interface

## Prerequisites

### Required Software
1. **C Compiler** - GCC or any C compiler
   - Ubuntu/Debian: sudo apt install gcc
   - macOS: xcode-select --install
   - Windows: Install MinGW or Code::Blocks

2. **Git** (for cloning)
   - Ubuntu/Debian: sudo apt install git
   - macOS: brew install git
   - Windows: Download from git-scm.com

3. **Terminal or Command Prompt**

## How to Clone and Run

### Step 1: Clone the Repository
Open terminal or command prompt and run:
```
git clone https://github.com/daniel-oyoo/student_details.git
cd student_details
```

### Step 2: Compile the Program
```
gcc main.c -o main.o
```

### Step 3: Run the Program
- On Linux/macOS:
  ```
  ./main
  ```
- On Windows:
  ```
  main.exe
  ```

## Quick One-Line Command
Copy and paste this complete command to clone, compile, and run:
```
git clone https://github.com/daniel-oyoo/student_details.git && cd student_details && gcc main.c -o main.o && ./main
```

## Alternative Without Git
If you don't have Git, download the ZIP file from GitHub, extract it, open terminal in the folder, and run:
```
gcc main.c -o main.o
./main
```

## Expected Output
The program will ask for student names and admission numbers, then display them in a table format.
```
 ./main
=== STUDENT RECORD SYSTEM ===
Enter details for 3 students:

Student 1:
Name: John Doe
Admission Number: 1001

Student 2:
Name: Jane Smith  
Admission Number: 1002

Student 3:
Name: Bob Johnson
Admission Number: 1003

=== STUDENT RECORDS ===
NAME                 ADMISSION NO
-----------------------------------
John Doe             1001
Jane Smith           1002
Bob Johnson          1003

```
