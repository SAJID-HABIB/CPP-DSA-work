#pragma once
#include <iostream>
#include "node.h"

using namespace std;

class DoublyList
{
private:
  Node *head;

public:
  DoublyList()
  {
    head = NULL;
  }
  void insert(int val)
  {
    Node *newNode = new Node(val);
    if (head == NULL)
    {
      head = newNode;
      return;
    }
    Node* temp = head;
    while (temp->next != NULL)
    {
      temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
  }

  // display forward
   void dispalyForward() {
     Node* temp = head;
     while (temp != NULL)
     {
      cout<< temp->data << " ";
      temp = temp->next;
     }
     cout<<endl;
   }
   void displayBackward() {
    Node* temp = head;
    if (temp == NULL)
    {
      return;
    }
     while (temp->next != NULL)
     {
      temp = temp->next;
     }
     while (temp != NULL)
     {
      cout<< temp->data << " ";
      temp = temp->prev;
     }
     cout<< endl;
   }
   void insertStart(int val) {
    Node* newNode = new Node(val);
    if (head == NULL)
    {
      head = newNode;
      return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
   }

   void deleteFirst() {
    if (head == NULL){
      return;
    }
    
      Node* temp = head;
      head = head->next;
    
    if (head != NULL)
    {
      head->prev = NULL;
    }
    delete temp;
   }
};
