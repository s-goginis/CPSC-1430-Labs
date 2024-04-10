//Shreya Gogini
//queue.h
//Description : header file for the Queue class

#include <iostream>

class Queue{
    private:
    struct Node{
        int data;
        Node *next;
    };
    
    //initializing the head and tail pointers
    Node *head;
    Node *tail;

    public:
    //constructors
    Queue();
    Queue(Queue const &other);
    ~Queue();

    void operator=(Queue const&other);

    void enqueue(int);
    int dequeue();
    bool is_empty();

    
};
