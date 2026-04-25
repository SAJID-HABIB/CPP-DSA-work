#pragma once
#include<iostream>
#include "list.h"
using namespace std;

int main() {
  DoublyList list;

  list.insert(10);
  list.insert(20);
  list.insert(30);

   list.insertStart(40);
  list.insertStart(50);

  cout<< "forward :";
  list.dispalyForward();

  list.deleteFirst();


  cout<< "Backword :";
  list.displayBackward();


}