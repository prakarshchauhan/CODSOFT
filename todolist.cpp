#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

class Task{
public:
    string task;
    bool completed; 
};

class TaskManager{
    public:
        vector<Task> tasks;
    public:
        void addTask(string task){
            Task ob;
            ob.task=task;
            ob.completed=false;

            tasks.push_back(ob);
        }
        void viewTask(){
            int count=1;
            if(!tasks.empty()){
                for(Task t: tasks){
                    cout<<"Task "<<count<<":";
                    cout<<"\t"<<t.task<<endl;
                    if(t.completed==0){
                        cout<<"Status:\t"<<"Pending"<<endl;
                    }
                    else{
                        cout<<"Status:\t"<<"Completed"<<endl;
                    }
                    count++;
                    cout<<endl;
                }
            }
            else{
                cout<<"No tasks present"<<endl;
            }
            cout<<endl;
        }
        void deleteTask(int index){
            tasks.erase(tasks.begin()+index-1);
        }
        void markTask(int index,bool mark){
            tasks[index-1].completed=mark;
        }
};

int main(){
    
    TaskManager tm;


    int option;
    do{
        cout<<"0 - Exit todolist"<<endl;
        cout<<"1 - Add task"<<endl;
        cout<<"2 - Remove task"<<endl;
        cout<<"3 - View task"<<endl;
        cout<<"4 - Mark task"<<endl;

       
        cout<<"Enter option"<<endl;
        cin>>option;

       
        switch(option){
            case 0:
            break;
            case 1:{
            string task;
            cout<<"Add Your task"<<endl;
            cin.ignore();
            getline(cin,task);

            tm.addTask(task);
            break;
            }
            case 2:
            int id;
            cout<<"Enter task id(1 or 2 or 3,....)"<<endl;
            cin>>id;
            
            tm.deleteTask(id);
            break;

            case 3:
            tm.viewTask();

            break;
            case 4:
             int id1;
             int mark;
            cout<<"Enter task id to be marked"<<endl;
            cin>>id1;
            cout<<"Enter the mark(1-true/0-false)"<<endl;
            cin>>mark;
            if(mark==1){
                tm.markTask(id1,true);
            }
            else{
                tm.markTask(id1,false);
            }
            break;
            default:
            
            cout<<"Wrong Input"<<endl;
        }

    }while(option!=0);
}