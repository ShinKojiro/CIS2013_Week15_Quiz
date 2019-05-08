#ifndef TODO_CPP
#define TODO_CPP

#include <string>
#include <iostream>

using namespace std;

class Todo{
    
    private:
    
    string tasks[100];
    int count = 0;

    public:

    Todo(){
        count = 0;
    }

    void addTask(string action){
        tasks[count] = action;
        count++;

        // if(count == 9){
        //     cout << "List is at maximum capacity, do less today.";
        // }
        // else{
        //     cout << "What are the details of the task?" << endl;
        //     cin >> tasks[count];
        //     getline(cin, tasks[count]);
        //     count++;
        // }
    }

    void completeList(int x){
        // count--;
        string newList[99];
        int newListNum = 0;
        for (int i = 0; i < 99; i++){
            if((i + 1) == x){
                //do not copy
                count--;
                newListNum++;
            } else {
                newList[i - 1] = tasks[i];
                newList[i] = tasks[newListNum];
                for(int j = 0; j < newListNum; j++){
                    tasks[j] = newList[j];
                }
                newListNum++;
            }
        }

        //copy(newList, newList + 100, tasks);

        //tasks[100] = newList[99];
    }

    void printList(){
        int count2 = 1;
        if(count == 0){
            cout << "You do not currently have any tasks added to the list." << endl;
        } else {
            cout << "Your current list of tasks is: " << endl;
            for(int i = 0; i < count; i++){
                cout << count2 << ": " << tasks[i] << endl;
                count2++;
            }
        }
        
        //cout << endl;
    }

};

#endif