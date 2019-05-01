#ifndef TODO_CPP
#define TODO_CPP

#include <string>
#include <iostream>

using namespace std;

class Todo{

    private:

    

    public:

    int count = 0;
    //int list_length = 0;
    string tasks[10];

    Todo(){
        
    }

    void addTask(){
        // count = c;
        // tasks = t;
        
        if(count == 9){
            cout << "List is at maximum capacity, do less today.";
        }
        else{
            cout << "What are the details of the task?" << endl;
            getline(cin, tasks[count]);

            //cin >> tasks[count];
            count++;
        }
    }

    void completeList(){

    }

    void printList(){
        // count = c;
        // tasks = t;
        int count2 = 1;
        for(int i = 0; i < 10; i++){
            cout << count2 << ": " << tasks[i] << endl;
            count2++;
        }
    }

};

#endif