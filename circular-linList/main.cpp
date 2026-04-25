#pragma once
#include "list.h"
#include <iostream>
using namespace std;
 
int main () {
  circularList cli;

  cli.insertAtHead(1);
  cli.insertAtHead(2);
  cli.insertAtHead(3);
cli.printList();
  return 0;
} 