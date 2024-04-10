//Shreya Gogini
//p4.cpp
//Desc : holds the main function for calling the methods from TodoList

#include <iostream>
#include "list.h"
#include <sstream>

using namespace std;

int main(){
    //Initializing the variables
    string line;
    string name;
    string text;

    //Initiallizing the checks
    bool done = false;
    bool bad_input = false; 
    
    //creating two class instances to store two linked lists
    TodoList task;

    //while the user wants to continue and there is an input
    while(!done && getline(cin, line)){
        stringstream stream (line);
        string word;
        stream >> word;
        bad_input = false; 

        //if the user wants to quit     
        if (word == "quit"){
            done = true;

        }
        else if(word == "add"){
            if(stream >> name){
                if(getline(stream, text)){
                    task.add(name, text);
                    task.display();
                }
            }
            else{
                bad_input = true;                
            }
        }
        
        else if(word == "check"){
            if(stream >> name){
                task.check(name);
                task.display();
            }
            else{
                bad_input = true;
            }
        }
        else if(word == "uncheck"){
            if(stream >> name){
                task.uncheck(name);
                task.display();
            }
            else{
                bad_input = true;
            }
        }
        

        //if the input is invalid, user is prompted again
        if(bad_input == true){
            cout << "Error, enter again" << endl;
            stringstream stream(line);
            string word;
            stream >> word;
        }
        
    }
    
    return 0;  
   
}
