#include <iostream>
#include "node.h"
using namespace std;
 

class LinkedList
{
  private:
  Node* head;

public:
  LinkedList() {
    head = nullptr;
  }

  // insert at the end

  void insertEnd(int value) {
    Node* newNode = new Node(value);
    if (head == nullptr)
    {
      head = newNode;
      return;
    }
    Node* temp = head;
    while (temp->next != nullptr)
    {
      temp = temp->next;
    }

    temp->next = newNode; 
}
 void printList() {
    Node* temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
  }

  // insert at the beging 

  void insertBegin(int value ) {
    Node* newNode = new Node (value);
    newNode->next = head;
    head = newNode;
  }

  //delete first node 

  void deletFirst() {
    if (head == nullptr)
    {
      return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
  }

  // deleteLast node

  void deleteLast() {
    if (head == nullptr)
    {
      return;
    }
    if (head->next == nullptr)
    {
      delete head;
      head = nullptr;
      return;
    }
    Node* temp = head;
    while (temp->next->next != nullptr)
    {
      temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
  }

  // serch node in the list 

  bool search(int key) {
    Node* temp = head;
    while (temp != nullptr)
    {
      if (temp->data == key)
      {
        return true;
        temp = temp->next;
      }
      return false;
    }
    
  }
  // count the node 

  int countNode() {
    int count = 0;
    Node* temp = head;
    while (temp != nullptr)
    {
      count++;
      temp = temp->next;
    }
    return count;
  }

  // reverse the LinkedList 

  void reverseList() {
    Node* prev = nullptr;
    Node* curr = head;
    Node* next = nullptr;

    while (curr != nullptr)
    {
      next = curr->next;
      curr->next = prev;
      prev = curr;
      curr = next;
    }
    head = prev;
  }

  // find the midle Node
  void findMidle() {
    if (head == nullptr)
    {
      return;
    }
    Node* slow = head;
    Node* fast = head;
    while (fast != nullptr && fast->next != nullptr)
    {
      slow = slow->next;
      fast = fast->next->next;
    }
    cout<<"Middle :"<< slow->data<<endl;
  }

  // Loop check
  
};

