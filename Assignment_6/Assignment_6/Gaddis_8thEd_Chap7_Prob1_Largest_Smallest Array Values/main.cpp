/* 
 * File:   main.cpp
 * Author: Shifeng Song
 * Created on July 22, 2017, 16:32 AM
 * Purpose:  Largest/Smallest Array Values
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    const int SIZE = 10;
    int value[SIZE];
    
    //Initialize variables
    
    //Input data
    cout<<"Input 10 values please: \n";
    for(int i=0; i<SIZE; i++){
        cin>>value[i];
    }
    //Map inputs to outputs or process the data
    int maxVal = value[0];
    int minVal = value[0];
    for(int j=1; j<SIZE; j++){
        if(maxVal<value[j]) maxVal = value[j];  
        if(minVal>value[j]) minVal = value[j];
    }
   
    //Output the transformed data
    cout<<"The Largest value is "<<maxVal<<".\n";
    cout<<"The smallest value is "<<minVal<<".\n";
    //Exit stage right!
    return 0;
}

