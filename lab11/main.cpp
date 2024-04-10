#include <iostream>
#include "queue.h"

using namespace std;

int main(){

    Queue q;
    //Queue second;
    q.enqueue(10);
    q.enqueue(20);
    cout << q.dequeue() << " has been dequeued" << endl;
    cout << q.dequeue()  << " has been dequeued" << endl;;
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    cout << q.dequeue() << " has been dequeued" << endl;
    
    
}
