#include <iostream>
#include <string>
using namespace std;

char option = 'a';
double num = 0.0;



int main() {


ENTER_COMMAND:
  cout << "Enter Command: ";
  cin >> option;
  switch (toupper(option)){
        case 'S':
                cin >> num;
                cout << "Speed is " << num << endl;
                goto ENTER_COMMAND;
        case 'T':
                cin >> num;
                cout << "Turn is " << num << endl;
                goto ENTER_COMMAND;
        case 'C':
                cout << "We will turn in a circle" << endl;
                goto ENTER_COMMAND;
        default:
                cout << "Invalid command" << endl;

  }

 return 0;
}
