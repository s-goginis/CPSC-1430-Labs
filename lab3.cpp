// Shreya Gogini
// lab3.cpp
// Gets a list of numbers from a file and sorts them into arrays

#include <fstream>
#include <iostream>

using namespace std;

// Reads a file and updates array numbers[]
int read_file(int[]);
// Sorts the elements from numbers[] into the respective arrays
void find_in_array(int[], int[], int[], int[], int, int &, int &, int &);
// Prints the arrays
void print_list(int[], int);

int  main() {
    // Creating the arrays with maximum elements
    int even_list[30];
    int threeven_list[30];
    int numbers[30];
    int other_list[30];

    // Three reference variables keep track of array length
    int even_count     = 0;
    int threeven_count = 0;
    int other          = 0;

    // Calling functions
    int count = read_file(numbers);
    find_in_array(numbers, even_list, threeven_list, other_list, count, even_count, threeven_count, other);

    cout << "The even list is: ";
    print_list(even_list, even_count);
    cout << "Threeven list is: ";
    print_list(threeven_list, threeven_count);
    cout << "The other list is: ";
    print_list(other_list, other);

    return 0;
}
// Opens file and reads it
int read_file(int numbers_test[]) {
    ifstream my_file;
    my_file.open("numbers.txt");
    if (!my_file) {
        cout << "Not Open" << endl;
    }
    // keeps count of array length
    int count = 0;
    while (my_file >> numbers_test[count]) {
        count++;
    }

    my_file.close();
    return count;
}
// Sorts the elements of the array
void find_in_array(
    int  numbers[],
    int  even_list[],
    int  threeven_list[],
    int  other_list[],
    int  count,
    int &even_count,
    int &threeven_count,
    int &other
) {
    for (int i = 0; i < count; i++) {
        // Finds even numbers
        if (numbers[i] % 2 == 0) {
            even_list[even_count] = numbers[i];
            even_count++;
        }
        // Find numbers divisible by 3 that are not in even array
        else if (numbers[i] % 3 == 0) {
            threeven_list[threeven_count] = numbers[i];
            threeven_count++;
        }
        // Any leftovers
        else {
            other_list[other] = numbers[i];
            other++;
        }
    }
}
// Prints the arrays
void print_list(int arr[], int count) {
    int i = 0;
    while (arr[i] && i < count) {
        cout << arr[i] << " ";
        i++;
    }

    cout << endl;
}
