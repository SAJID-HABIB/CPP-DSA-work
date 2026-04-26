#pragma once
#include <iostream>
using namespace std;

// insert at the hesd
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
      return;
      cout<< head->data << "->";
      Node* temp = head->next; 
      while (temp != head)
      {
        cout << temp->data << "->";
        temp = temp->next;
      }
       cout<< temp->data <<endl;
  }
  // insert at the tail

void inserterATail(int val) {
  Node* newNode = new Node(val);
    if (tail == NULL)
    {
      head = tail = newNode;
      tail->next = head;
      // head = newNode;
    } else
    {
      newNode->next = head;
      tail->next = newNode;
      tail = newNode;
      // tail->next = head; 
    }
}
void delelteAtHed() {
  if (head == NULL)
  return;
  else if (tail == head)   //for single  Node
  {
    delete head;
    head = tail = NULL;
  } else {  // 2 or more  node
    Node* temp = head;
    head = head->next;
    tail->next = head;
  } 
}

void deleteAtTail() {
  if (head == NULL)
  {
    return;
  }
  else if (head == tail)
  {
    delete head;
    head = tail = NULL;
  } else
  {
    Node* temp = tail;
    Node* prev = head;
    while (prev->next != tail)
    {
      prev = prev->next;
    }
    tail = prev;
    tail->next = head;

    temp->next = NULL;
    delete temp;
  }
  
  
}
};




