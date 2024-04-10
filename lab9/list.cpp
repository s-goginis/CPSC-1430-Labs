//Shreya Gogini
//list.cpp
//Desc: Holds the logic and methods to run the TodoList class

#include "list.h"
#include <iostream>


using namespace std;

//desc : Constructor for the TodoList class
//pre : a head pointer should be created and initialized
//post : sets head to null
TodoList::TodoList(){
    head = nullptr;
}



//Destructor to deallocate the pointers at the end of the run
TodoList::~TodoList(){ 
    while (head != nullptr) {
        Node *for_deletion = head;
        head               = head->next;
        delete for_deletion;
    }
}

//desc : prints out the list after each command
//pre : head is initialized
//post : none
void TodoList :: display(){
   //iterates through the list and stops when it reaches nullptr
   Node *iter = head;
    while(iter != nullptr){
        char checker = ' ';
        if(iter->checked == true){
            checker = 'X';
        }
        cout << "[" << checker << "]" << iter->name << " " << iter -> text << endl;
        iter = iter -> next;
    }
    cout << endl;
    
}

//desc : adds a new node to the list alphabetically
//pre : head exists
//post : produces an alphabetically ordered list
void TodoList :: add (string item, string desc){
    Node *iter = head;
    
    //while iter is not nullptr
    while(iter && iter -> name != item){
        iter = iter->next;
    }

    //if the name already exists, the text is replaced
    if(iter != nullptr){
        iter -> text = desc;
    }
    else{
        Node *add_new = new Node();
        add_new -> name = item;
        add_new ->text = desc;
        add_new -> checked = false;
        add_new -> next = nullptr;
        //checks if head is empty and is alphabetically less than the others
        if(!head || item < head->name){
            add_new -> next = head;
            head = add_new;
        }
        else{
            Node *current = head;
            //if the name is greater than everything, it is placed after
            while(current -> next && item > current->next->name){
                current = current -> next;
            }
            add_new->next = current->next;
            current->next = add_new;
        }
    }
	
}



//desc : sets the checked member of the node to true
//pre : user provides a name and the list exists
//post : none
void TodoList::check(string name){
    Node *iter = head;
    while(iter != nullptr){
        if(iter -> name == name){
            iter->checked = true;
        }
        iter = iter->next;
    }
}

//desc : sets the checked member of the node to false
//pre : user provides a name and the list exists
//post : none
void TodoList::uncheck(string name){
    Node *iter = head;
    while(iter != nullptr){
        if(iter -> name == name){
            iter->checked = false;
        }
        iter = iter->next;
    }
} 



