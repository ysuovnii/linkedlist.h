#ifndef linkedlist_H
#define linkedlist_H

class Node{
public: 
    int data; 
    Node* next; 
}; 

class linkedlist{
    Node* start;
public: 
    linkedlist();
    void insertStart(int value); 
    void insertMiddle(int value, int pos); 
    void insertEnd(int value); 
    void Search(int value); 
    void dlt();
    void Size(); 

    void display(); 
}; 


#endif