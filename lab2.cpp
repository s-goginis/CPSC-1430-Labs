//Shreya Gogini
//lab2.cpp
//Gets string input and swaps the order
#include <iostream>
#include <iomanip>

using namespace std;

//Function prototypes
void input(string&, string &); // gets two string inputs from user
void swap_strings(string&, string&); //swaps the two strings
void output(string&, string&); //prints the string in order

int main(){
  string first;
  string second;
  input(first, second);
  output(first, second); //prints the string normally
  swap_strings(first, second);
  output(first, second);//prints the strings after they were swapped
  
  return 0;
}

void input(string &first, string &second){
  cout << "Enter the first string value: " << endl;
  getline(cin, first);
  cout << "Enter the second string value: " << endl;
  getline(cin, second);
}

void swap_strings(string &first, string &second){
  string temp = first; //temp variable for the swap
  first = second;
  second = temp;
}

void output(string &first, string &second){
  cout << first << " " <<second << endl;
}

