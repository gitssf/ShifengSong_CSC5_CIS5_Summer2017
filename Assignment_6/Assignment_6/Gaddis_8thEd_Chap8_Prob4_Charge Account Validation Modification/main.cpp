/* 
 * File:   main.cpp
 * Author: Shifeng Song
 * Created on July 24, 2017, 21:32 PM
 * Purpose:  Charge Account Validation Modification
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
void swapTwoNum(int &, int &);
void selectionSort(int [], int);
int binarySearch(int [], int, int);

//Execution begins here
int main(int argc, char** argv){
  //Declare and initialize variables
  const int SIZE = 18;
  int accountNunm[SIZE] = { 5658845,4520125,7895122,8777541,8451277,1302850,
                            8080152,4562555, 5552012, 5050552, 7825877,
                            1250255, 1005231, 6545231, 3852085, 7576651,
                            7881200, 4581002 };
  int val;

  //Input data
  cout<<"Enter a charge account number: ";
  cin>>val;

  //Map inputs to outputs or process the data
  selectionSort(accountNunm,SIZE);

  if (binarySearch(accountNunm,SIZE,val)!=-1)
    cout<<"The number you enter is valid.\n";
  else
    cout<<"The number you enter is invalid.\n";

  //Exit stage right!
  return 0;
}

void swapTwoNum(int &a, int &b){
  int temp = a;
  a = b;
  b = temp;
}

void selectionSort(int array[], int size){
  int smallestNum, smallestIndex;

  for (int i=0; i<size;i++) {
    smallestNum = array[i];
    smallestIndex = i;

    for (int j=i+1; j<size; j++) {
      if (array[j]<smallestNum) {
        smallestNum = array[j];
        smallestIndex = j;
      }
    }

    if (i != smallestIndex) swapTwoNum(array[i], array[smallestIndex]);
  }
}

int binarySearch(int array[], int size, int value){
  int position = -1;
  int first, last, middle;
  bool found = false;

  first = 0;
  last = size -1;

  while (!found && first <= last) {
    middle = (first + last) / 2;

    if (array[middle] == value) {
      position = middle;
      found = true;
    } else if (array[middle] > value) {
      last = middle - 1;
    } else {
      first = middle + 1;
    }
  } // end while

  return position;
}