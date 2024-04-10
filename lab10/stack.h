//Shreya Gogini
//stack.h
//Description: Header file for the Stack class with struct for creating Nodes

#include <iostream>


class Stack{
    
    private: 
    struct Node{
        int data;
        Node *next;
    };
    Node *top;

    public:

    Stack();
    Stack(Stack const &other);
    ~Stack();
    void operator = (Stack const &other);


    void push (int);
    int pop();
    bool is_empty();

};
