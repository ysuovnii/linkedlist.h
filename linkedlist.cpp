#include <bits/stdc++.h>
#include "linkedlist.h"
using namespace std;

linkedlist :: linkedlist(){
    start = nullptr; 
}

void linkedlist::insertStart(int value){
    Node* temp = new Node;
    temp->data = value; 
    temp->next = start;
    start = temp; 
}

void linkedlist::insertMiddle(int value, int pos){
    if(pos == 0){
        insertStart(value);
        return; 
    }
    Node*temp = start; 
    pos--; 
    while(pos--){
        if(temp == nullptr){
            cout << "Position out of bonds";
            return;
        }
        temp = temp->next; 
    }
    if(temp == nullptr){
        cout << "Position out of bonds";
        return;
    }
    Node* temp2 = new Node;
    temp2->data = value; 
    temp2->next = temp->next; 
    temp->next = temp2;  
}

void linkedlist::insertEnd(int value){
    Node* temp = new Node;
    temp->data = value;
    temp->next = nullptr;

    if(start == nullptr){
        start = temp; 
        return; 
    }

    Node* t = start; 
    while(t->next != nullptr){
        t = t->next; 
    }

    t->next = temp;

}

bool linkedlist::Search(int value){
    Node* temp = start; 
    bool b = false; 
    while(temp){
        if(temp->data == value){
            b = true; 
            break;
        }
        temp = temp->next; 
    }
    return b; 

}

int linkedlist::Size(){
    Node* temp = start; 
    int count = 0; 
    while(temp){
        count++; 
        temp = temp->next; 
    }

    return count; 
}

void linkedlist::dltFirst(){
    if(start == nullptr){
        cout << "Empty list";
        return; 
    }
    Node* temp = start; 
    start = start->next;

    delete temp; 
}

void linkedlist::dltLast(){
    if(start == nullptr){
        cout << "Empty list";
        return; 
    }
    if(start->next == nullptr){
        delete start; 
        start = nullptr; 
        return; 
    }
    Node*temp = start; 
    Node* curr = nullptr; 
    while(temp->next != nullptr){
        curr = temp; 
        temp = temp->next; 
    }
    curr->next = nullptr;
    delete temp; 
}

void linkedlist::display(){
    Node* temp = start;
    while(temp){
        cout << temp->data << " ";
        temp = temp->next; 
    }
}

void linkedlist::dltList(){
   Node* temp; 
   while(start != nullptr){
        temp = start; 
        start = start->next; 
        delete temp;
   } 
}