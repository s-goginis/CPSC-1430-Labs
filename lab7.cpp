#include <iostream>

using namespace std;

// Creating a struct for the item of storage
// and initializes a pointer stored with an element that identifies the next element
struct Node {
    public:
    string letter;
    Node  *next;
};

int main() {

    // Hardcoding the first segment of the instructions
    Node link1;
    Node link2;
    Node link3;
    Node link4;

    // creating links to elements to create a full list that is stored in memory
    link1.letter = "a";
    link1.next   = &link2;
    link2.letter = "b";
    link2.next   = &link3;
    link3.letter = "c";
    link3.next   = &link4;
    link4.letter = "d";
    link4.next   = nullptr;

    // Printing out the string of characters (a, b, c, d)
    cout << link1.letter << ", " << link2.letter << ", " << link3.letter << ", " << link4.letter << endl;

    // creating the pointer variable for the head of the list
    Node *head = nullptr;
    // adding the elements of the list using the ascii values for characters
    for (int i = 122; i >= 97; i--) {
        Node *temp   = new Node;
        temp->next   = head;
        temp->letter = i;
        head         = temp;
    }

    // pointer to iterate through the list
    Node *iter = head;

    // while the current element is not pointing to a nullptr
    while (iter != nullptr) {
        // prints the current element
        cout << iter->letter << ",";
        // moves to the next element
        iter = iter->next;
    }
    cout << endl;

    // deletes the list by removing the elements from the list
    // and deallocating the pointers to remove memory loss
    while (head != nullptr) {
        Node *for_deletion = head;
        head               = head->next;
        delete for_deletion;
    }

    return 0;
}
