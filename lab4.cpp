// Shreya Gogini
// lab4.cpp
// Makes an array based on user input and prints the reversed array
#include <iomanip>
#include <iostream>

using namespace std;

int *new_array(int);          // makes and returns a pointer to an int array
void read_ints(int *, int);   // fills the array
void reverse(int *, int);     // reverses the elements in the array
void delete_int_array(int *); // de-allocates the int pointed by ptr

int  main() {
    int  n = 0;
    int *array_ptr;
    cin >> n; // gets count

    array_ptr = new_array(n);

    read_ints(array_ptr, n);

    reverse(array_ptr, n);

    // Prints array with reversed elements
    for (int i = 0; i < n; i++) {
        cout << array_ptr[i] << " ";
    }

    cout << endl;
    delete_int_array(array_ptr);

    return 0;
}

// pointer to an array of count elements
int *new_array(int count) {
    int *arr = new int[count];
    return arr;
}

// helps with memory allocation and eliminates lost memory
void delete_int_array(int *array_ptr) {
    delete[] array_ptr;
}

// reverse the elements in the array
void read_ints(int *array_ptr, int count) {
    for (int i = 0; i < count; i++) {
        cin >> array_ptr[i];
    }
}

// Reverses the elements in the array
void reverse(int array_ptr[], int count) {
    int half = count / 2;
    for (int i = 0; i < half; i++) {
        int temp                 = array_ptr[i];
        array_ptr[i]             = array_ptr[count - 1 - i];
        array_ptr[count - 1 - i] = temp;
    }
}
