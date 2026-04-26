#pragma once
#include "list.h"
#include <iostream>
using namespace std;
 
int main () {
  circularList cli;

  // cli.inserterATail(1);
  // cli.inserterATail(2);
  // cli.inserterATail(3);

  cli.insertAtHead(1);
  cli.insertAtHead(2);
  cli.insertAtHead(3);

cli.printList();


  // cli.delelteAtHed();
  // cli.printList();

  // cli.delelteAtHed();
  // cli.printList();

  // cli.delelteAtHed();
  // cli.printList();

  cli.deleteAtTail();
  cli.printList();


  cli.deleteAtTail();
  cli.printList();

  cli.deleteAtTail();
  cli.printList();

  return 0;
} 