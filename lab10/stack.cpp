//Shreya Gogini
//stack.cpp
//Description: cpp file for the methods and holds the stack implementation


#include <iostream>
#include "stack.h"

#include <stdexcept>

using namespace std;

//desc : Constructor for the Stack class
//pre : a top pointer should be initialized
//post : sets the top of the stack to null
Stack :: Stack(){
    top = nullptr;
}

//desc: copy constructor that initializes the constructing instance with an
//      independent copy of the input's elements
//pre: a valid list from Stack should exist
//post : none
Stack :: Stack(Stack const &other){
    top = nullptr;
    *this = other;
}

//desc : destructor to deallocate the memory
//pre : stack exists
//post : none
Stack :: ~Stack(){
    /*while(top != nullptr){
        Node *for_deletion = top;
        top = top->next;
        delete for_deletion;
    }*/
    while(!is_empty()){
        pop();
    }

}

//desc : Overwrites the contents of the instance with an
//      independent copy of the inputs methods
//pre : A valid list from Stack should exist
//post : Only the values from the list should be copied over, not the pointers
void Stack :: operator = (Stack const &other){
  
   //deallocates the list to use other
   this ->~Stack();
   //creates a temp to store the elements in the correct order
   Stack temp;
   Node *current = other.top;
   while(current !=nullptr){
    temp.push(current->data);
    current = current ->next;
   }
   //temp stack becomes the current stack
   current = temp.top;
   while(current != nullptr){
    push(current->data);
    current = current->next;
   }
}

//desc : adds the input value to the instance's collection of elements
//pre : a valid node exists
//post : none
void Stack :: push (int value){
    Node *temp = new Node();
    temp -> data = value;
    temp -> next = top;
    top = temp;   
}

//desc : removes and returns whichever element in the instance's
//      collection which was most recently added.
//pre : the stack has values otherwise error is thrown
//post : returns most recent element
int Stack :: pop(){
   
   //int return_value;
   //checks for run_time error
   if(is_empty()){
    throw runtime_error("No elements in stack to pop");
   }
   int return_val = top->data;
    Node *temp;
    temp = top;
    //return_value = temp->data;
    top = top->next;
    delete temp;
    return return_val;
   
   //returns the top value before the pop
   /*cout << return_value << " popped from stack" << endl;
   return return_value;*/
   
}

//desc : checks is the stack is empty
//pre : a stack exists
//post : returns true if stack is empty and false if not
bool Stack :: is_empty(){
    if (top == nullptr){
        return true;
    }
    else{
        return false;
    }
}
