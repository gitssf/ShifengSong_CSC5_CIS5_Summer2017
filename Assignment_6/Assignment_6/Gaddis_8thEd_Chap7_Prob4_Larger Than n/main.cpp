/* 
 * File:   main.cpp
 * Author: Shifeng Song
 * Created on July 23, 2017, 16:32 PM
 * Purpose:  Larger Than n
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
void fun(int[], int, float);
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
     const int SIZE = 9;   
     float n;
   
    //Initialize variables
     int array[SIZE] = {2,3,4,7,4,9,11,15,19};
     n = 4.5;
   
    //Output the transformed data
    fun(array,SIZE,n);
        
    //Exit stage right!
    return 0;
}

void fun( int array[],int SIZE, float n){
    for(int i=0; i<SIZE; i++){
        if(array[i]>n) cout<<array[i]<<"  ";
    }
    
}