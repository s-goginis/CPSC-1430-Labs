//Shreya Gogini
//lab1.cpp
//A code that welcomes the user and begins to get analyze integer inputs

#include <iostream>
#include <iomanip>

using namespace std;

//Function prototypes
void welcome(); //welcomes the user
void goodbye(); //tells goodbye to the user
int input(); //gets the user input
void print_statistics(int [], int); //prints the min, max and sum of the values

int main(){
  //calls the welcome function
  welcome();
  //creates an array named values
  int values [10];
  //gets input from the user 10 times
  for(int i = 0; i < 10; i++){
    values[i] = input();
  }
  //calls the print statistics function
  print_statistics(values, 10);
  //calls the goodbye function
  goodbye();
}

//Welcome
void welcome(){
  cout << "Welcome!" << endl;
}

//Goodbye
void goodbye(){
  cout << "Goodbye!" << endl;
}

//Input
int input(){
  int input = 0;
  cout << "Enter a number between -100 and 100" << endl;
  cin >> input;
  while(input < -100 || input > 100){
    cin >> input;
  }
  return input;
}
//Print stats
void print_statistics(int values[], int count){
  int sum = 0;
  int min = values[0];
  int max = values[0];
  for(int i = 0; i < count; i ++){
  
    sum += values[i];
    //Finds min value
    if(values[i]<min){
      min = values[i];
    }
    //Finds max value
    else if(values[i]>max){	
      max = values[i];
    }
  }
  //Prints the stats
  cout << "Sum of values: " << sum << endl;
  cout << "Minimum value: " << min << endl;
  cout << "Maximum value: " << max << endl;
}

	
