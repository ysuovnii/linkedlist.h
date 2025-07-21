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
    void dltFirst();
    void dltLast();
    void dltList(); //to be done 
    int Size(); 
    bool Search(int value); 
    void display(); 
}; 


#endif