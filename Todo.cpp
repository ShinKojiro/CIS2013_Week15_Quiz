#ifndef TODO_CPP
#define TODO_CPP

#include <string>
#include <iostream>

using namespace std;

class Todo{

    private:

    string tasks[100];
    int length = 0;
    int count = 0;

    public:

    Todo(){
        length = 0;
        count = 1;
    }

    void addTask(string action){
        tasks[count] = action;
        count++;
        length++;

        // if(count == 9){
        //     cout << "List is at maximum capacity, do less today.";
        // }
        // else{
        //     cout << "What are the details of the task?" << endl;
        //     getline(cin, tasks[count]);

        //     //cin >> tasks[count];
        //     count++;
        // }
    }

    void completeList(int x){
        string newList[99];
        int newListNum = 0;
        for (int i = 0; i < 99; i++){
            if((i+1) == x){
                //do not copy
                newListNum++;
            }else{
                newList[i] = tasks[newListNum];
                newListNum++;
            }
            
        }
    }

    void printList(){
        int count2 = 1;
        for(int i = 0; i < length; i++){
            cout << count2 << ": " << tasks[i] << endl;
            count2++;
        }
    }

};

#endif