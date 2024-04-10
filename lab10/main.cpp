//Shreya Gogini
//lab10.cpp
//Description: main file that calls the methods in stack

#include <iostream>
#include "stack.h"

using namespace std;

int main(){
    //creating a new instance of Stack
    Stack new_stack;
    Stack copy_stack;
    
    //test cases
    new_stack.push(10);
    cout << new_stack.pop() << " Popped from stack" << endl;
    new_stack.push(20);
    new_stack.push(30);

    cout << new_stack.pop() << " Popped from stack" << endl;
    cout << new_stack.pop() << " Popped from stack" << endl;
    if(new_stack.is_empty()){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }
    cout << new_stack.pop() << " Popped from stack" << endl;

    
    
        
    return 0;
}
