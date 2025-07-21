# Linked List Header File (C++)

This project provides a simple implementation of a singly linked list in C++ using a custom header file. The header file defines a `Node` class and a `linkedlist` class, allowing basic operations such as insertion, deletion, and traversal.

## Features

- Insert node at the beginning, middle, or end
- Delete first and last node
- Clean and modular class-based implementation

## File Structure

- `linkedlist.h` – Contains class declarations and method prototypes for linked list operations.
- `linkedlist.cpp` – Contains the definitions of methods declared in the header file.
- `test.cpp` – Example usage and test cases for the linked list.
- `documentation.md` – Detailed explanation of each class and method in the project.

## Usage

1. Include the header file in your main program:
    ```cpp
    #include "linkedlist.h"
    ```

2. Compile the program with:
    ```bash
    g++ main.cpp linkedlist.cpp -o main
    ./main
    ```

## Note

This project is intended for educational purposes and can be extended with more features like searching, reversing, sorting, etc.
