#include <string>
#include <iostream>
#include "Todo.cpp"

using namespace std;

int main(){

    char choice = 'a';
    int num;
    string action;
    Todo myList;

    cout << "C++ Todo List, Version 0.0.1 Alpha." << endl;

    while(choice != 'x'){
        cout << "Add to list (a)\nDone list item (d)\nPrint list (p)\nExit list app (x)\n"; 
        cout << "What you want to do:" << endl;
        cin >> choice;

        switch(choice){
            case 'a':
                myList.addTask(action);
                break;
            case 'd':
                myList.completeList(num);
                cin >> num;
                break;
            case 'p':
                myList.printList();
                break;
            case 'x':
                cout << "Than you for using Todo list 0.0.1 Alpha.";
                break;
            default:
                cout << "That is not a valid option.";
        }
    }

}