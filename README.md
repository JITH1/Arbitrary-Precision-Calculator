# 🧮 Arbitrary Precision Calculator

A command-line **Arbitrary Precision Calculator implemented in C** for performing arithmetic operations on integers that exceed the range of standard C integer data types.

The project supports **addition, subtraction, multiplication, and division** of large signed integers using a doubly linked list for number representation.

---

## 🚀 Features

- ➕ Addition of large integers
- ➖ Subtraction of large integers
- ✖️ Multiplication of large integers
- ➗ Division of large integers
- ➕ Support for positive and negative operands
- 🔢 Handles integers beyond standard data type limits
- 🔗 Doubly linked list based number representation
- ✅ Command-line argument validation
- 🚫 Invalid operand and operator detection
- 🧹 Leading-zero handling
- 📊 Formatted output for operands, operation, and result
- ⚙️ Makefile support for compilation

---

## 🛠️ Technologies & Core Concepts

### Language

- C

### Core Concepts

- Structures
- Pointers
- Doubly Linked Lists
- Dynamic Memory Allocation
- Command-Line Arguments
- String Manipulation
- Modular Programming
- Memory Management
- Function Pointers
- Arithmetic Operations
- Sign Handling
- Input Validation
- Large Integer Processing
- Makefile

### Development Tools

- GCC
- GNU Make
- Linux

---

## 🧱 Data Structure

The calculator uses a **doubly linked list** to represent large integers.

Each digit is stored in a node, allowing the program to process numbers beyond the limits of standard C integer data types.

Example:

    Large Integer

    12345678901234567890

        ┌───┐   ┌───┐   ┌───┐   ┌───┐
        │ 1 │ ↔ │ 2 │ ↔ │ 3 │ ↔ │ 4 │ ↔ ...
        └───┘   └───┘   └───┘   └───┘

---

## 📂 Project Structure

    Arbitrary-Precision-Calculator/
    │
    ├── main.c
    ├── APC.h
    ├── Make_List.c
    ├── Make_List.h
    ├── addition.c
    ├── substraction.c
    ├── Multiplication.c
    ├── Division.c
    ├── Makefile
    └── README.md

### File Description

| File | Description |
|---|---|
| `main.c` | Handles command-line arguments and controls program execution |
| `APC.h` | Contains common structures, definitions, macros, and declarations |
| `Make_List.c` | Handles linked-list creation and utility operations |
| `Make_List.h` | Contains linked-list and arithmetic function declarations |
| `addition.c` | Implements addition |
| `substraction.c` | Implements subtraction |
| `Multiplication.c` | Implements multiplication |
| `Division.c` | Implements division |
| `Makefile` | Automates project compilation |
| `README.md` | Project documentation |

---

## ➗ Supported Operations

| Operator | Operation |
|---|---|
| `+` | Addition |
| `-` | Subtraction |
| `x` / `X` | Multiplication |
| `/` | Division |

---

## 💻 Usage

The calculator accepts two operands and an arithmetic operator through command-line arguments.

### Syntax

    ./apc <operand1> <operator> <operand2>

### Addition

    ./apc 12345678901234567890 + 98765432109876543210

### Subtraction

    ./apc 98765432109876543210 - 12345678901234567890

### Multiplication

    ./apc 12345678901234567890 x 98765432109876543210

### Division

    ./apc 98765432109876543210 / 1234567890

### Negative Operands

    ./apc -123456789 + 987654321

---

## 📋 Example

    Operation : +

    --------------------------------------------------------------------------
    |  Operand 1 : 12345678901234567890                                     |
    --------------------------------------------------------------------------
    |  Operand 2 : 98765432109876543210                                     |
    --------------------------------------------------------------------------
         Result  : 111111111011111111100

---

## ✅ Input Validation

The program validates:

- Command-line argument count
- Numeric operands
- Positive and negative numbers
- Supported arithmetic operators
- Invalid characters
- Empty operands

Invalid inputs are handled with appropriate error messages.

---

## 🔨 Compilation

### Using Makefile

Build the project using:

    make

Clean the generated build files using:

    make clean

### Manual Compilation

The project can also be compiled directly using GCC:

    gcc main.c Make_List.c addition.c substraction.c Multiplication.c Division.c -o apc

For compilation with warnings enabled:

    gcc -Wall -Wextra main.c Make_List.c addition.c substraction.c Multiplication.c Division.c -o apc

---

## ▶️ Running the Program

After compilation, run the calculator using:

    ./apc <operand1> <operator> <operand2>

Example:

    ./apc 999999999999999999999 + 1

---

## 🧠 Learning Outcomes

This project helped strengthen practical understanding of:

- C Programming
- Doubly Linked Lists
- Structures and Pointers
- Dynamic Memory Allocation
- Command-Line Arguments
- Modular Programming
- Memory Management
- Large Integer Representation
- Arithmetic Operations
- Sign Handling
- Input Validation
- Function Pointers
- Makefile and Build Automation

---

## 🎯 Project Objective

The primary objective of this project is to understand how **very large integers can be represented and processed without relying on built-in integer data types**.

The project combines **C programming, linked lists, pointers, dynamic memory allocation, and arithmetic operations** to build a practical command-line calculator capable of handling large integer values.

---

## 🚧 Future Improvements

- [ ] Add modulus operation
- [ ] Add exponentiation
- [ ] Improve input parsing
- [ ] Improve division edge-case handling
- [ ] Add automated test cases
- [ ] Extend support for additional arithmetic operations

---

# 👨‍💻 About Me

## Jithin P

**Electronics and Communication Engineering Graduate | Embedded Systems & Firmware**

I am an **Electronics and Communication Engineering graduate** with skills in **Embedded Systems, Firmware Development, C/C++, Data Structures & Algorithms, and Linux Internals**.

I focus on building strong foundations in programming and system-level development, with an emphasis on writing efficient and reliable software.

### 💻 Technical Skills

- C Programming
- C++
- Data Structures & Algorithms (DSA)
- Embedded Systems
- Firmware Development
- Linux Internals

---

## 🔗 Connect With Me

- LinkedIn: www.linkedin.com/in/jithinjith
- GitHub: https://github.com/JITH1
