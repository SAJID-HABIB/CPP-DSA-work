#pragma once
#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node* next;
  
  Node(int val) {
    data = val;
    next = NULL;
  }
};

class circularList
{
   Node* head;
   Node* tail;
public:
  circularList() {
    head = tail = NULL;
  }
  void insertAtHead(int val){
    Node* newNode = new Node(val);
    if (tail == NULL)
    {
      head = tail = newNode;
      tail->next = head;
      // head = newNode;
    } else
    {
      newNode->next = head;
      head = newNode;
      tail->next = head; 
    }
    
  }

  void printList() {
    if (head == NULL)
    {
      return;
    }
      Node* temp = head->next; 
      while (temp != head)
      {
        cout << temp->data << "->";
        temp = temp->next;
      }
       cout<< temp->data <<endl;
  }
};



