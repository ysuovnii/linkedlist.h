# Linked List in C++

This project contains a simple implementation of a singly linked list in C++ using a custom header file.

## Features

- Insert at start, middle, and end
- Delete first, last, or by value
- Search for a value
- Display the list
- (Optional) Get size of the list

## Functions

### `insertStart(int value)`
Inserts a new node at the beginning of the list.

### `insertMiddle(int value, int pos)`
Inserts a new node at the given 0-based position. If the position is invalid, the function does nothing.

### `insertEnd(int value)`
Inserts a new node at the end of the list.

### `dltFirst()`
Deletes the first node in the list.

### `dltLast()`
Deletes the last node in the list.

### `deleteByValue(int value)`
Deletes the first node that matches the given value.

### `display()`
Prints all elements of the list in order.

### `search(int value)`
Prints whether the given value is found in the list.

### `size()`
Returns the number of nodes in the list. *(Only if implemented)*

## Example

```cpp
linkedlist l;
l.insertStart(10);
l.insertEnd(20);
l.insertMiddle(15, 1);
l.display();         // Output: 10 15 20
l.search(15);        // Output: Found
l.dltFirst();
l.display();         // Output: 15 20
