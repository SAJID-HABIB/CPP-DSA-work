#pragma once

#include<iostream>
#include "list.h"
using namespace std;

int main() {
  LinkedList list;
  // insert at the end

  list.insertEnd(10);
  list.insertEnd(20);
  list.insertEnd(30);


  cout<<"orignal list :";
  list.printList();

  list.insertBegin(5);
  cout<<"After insert the begin :";
  list.printList();

  list.deletFirst();
  cout<<"Delet the first node :";
  list.printList();

  list.deleteLast();
  cout<<"delete the last node :";
  list.printList();

  
  cout<<"seerch 20 :"<<(list.search(10) ? "found" : "Not found")<<endl;
  cout<<"total node :"<<list.countNode()<<endl;

  list.reverseList();
  cout<< "Reverse List :";
  list.printList();

  list.findMidle();
  list.printList();

}
