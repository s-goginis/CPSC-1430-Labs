//Shreya Gogini
//list.h
//file that holds the headers of the methods and the constructors
#include <iostream>

using namespace std;

//Struct for creating nodes
struct Node{
    string name;
    string text;
    bool checked=false;
    Node *next;        
};

class TodoList{
    //creates a head node
    private:
    Node *head = new Node();
    
    public:
    //default constructor: initializes the constructing instance to have an empty linked list
    TodoList();

    
    
    //destructor: frees all outstanding memory allocations used by the destructing instance
    ~TodoList();

   // user based methods
    void add(string, string);
    
    void check(string);
    void uncheck(string);
    
    //prints the list
    void display();
    
}; 
