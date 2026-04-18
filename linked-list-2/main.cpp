#include <iostream>
#include "node.h"
#include "list.h"
using namespace std;

int main()
{
    LinkedList list;
    int id;
    string name;
    int year;

    int count;
    int  i = 0;
    cout << "How many student's data you want to enter\n";
    cin >> count;
    while (i != count)
    {
        cout << "Enter student " << i + 1 << " data\n";
        cin.ignore();
        cout << "Name: ";
        getline(cin, name);
        cout << "Id: ";
        cin >> id;
        cout << "year: ";
        cin >> year;

        list.insertData(id, name, year);
        i++;
    }

    list.display();
    return 0;
}