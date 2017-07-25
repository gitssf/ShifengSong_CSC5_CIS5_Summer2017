/* 
 * File:   main.cpp
 * Author: Shifeng Song
 * Created on July 24, 2017, 22:32 PM
 * Purpose:  Rainfall Statistics Modification
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
void selectionSortDesc(double [], int );
void swapTwoNum(double &, double &);
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    const int SIZE = 12;
    double monRainfall[SIZE], maxRainfall, minRainfall;
        
    //Map inputs and process the data
    cout<<"Input the rainfall each of 12 months: \n";
    for(int i=0; i<SIZE; i++){
        cin>>monRainfall[i];
        while(monRainfall[i]<0){
        cout<<"Do not accept negative numbers for rainfall fifures, ";
        cout<<"innput again please:  \n";
        cin>>monRainfall[i];
       }
    }   
   selectionSortDesc(monRainfall,12);
    
    //Output the transformed data
     for(int j=0; j<SIZE; j++){
        cout<<"The rainfall of month is "<<monRainfall[j]<<".\n";
    }
    
    //Exit stage right!
    return 0;
}


void selectionSortDesc(double array[], int size){
  double biggestNum;
  int biggestIndex;

  for (int i=0; i<size;i++) {
    biggestNum = array[i];
    biggestIndex = i;

    for (int j=i+1; j<size; j++) {
      if (array[j]>biggestNum) {
        biggestNum = array[j];
        biggestIndex = j;
      }
    }

    if (i != biggestIndex) swapTwoNum(array[i], array[biggestIndex]);
  }
}

void swapTwoNum(double &a, double &b){
  double temp = a;
  a = b;
  b = temp;
}
