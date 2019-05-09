#include <string>
#include <iostream>
#include "Todo.cpp"

using namespace std;

int main(){

    char choice = 'a';
    int num;
    string action;
    //string firstWord;
    Todo myList;

    cout << "C++ Todo List, Version 0.0.1 Alpha." << endl;

    while(choice != 'x'){
        cout << "Add to list (a)\nDone list item (d)\nPrint list (p)\nExit list app (x)\n"; 
        cout << "What you want to do:" << endl;
        cin >> choice;

        switch(choice){
            case 'a':
                cout << "What are the details of the task?" << endl;
                cin >> action;
                //firstWord = action;
                //getline(cin, action);
                
                //myList.addTask(firstWord, action);
                myList.addTask(action);
                cout << endl;
                break;
            case 'd':
                cout << "Which task is complete?";
                cin >> num;
                myList.completeList(num);
                cout << endl;
                break;
            case 'p':
                myList.printList();
                cout << endl;
                break;
            case 'x':
                cout << "Than you for using Todo list 0.0.1 Alpha.";
                break;
            default:
                cout << "That is not a valid option." << endl;
        }
    }

}