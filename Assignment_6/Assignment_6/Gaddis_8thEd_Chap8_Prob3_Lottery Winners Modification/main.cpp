/* 
 * File:   main.cpp
 * Author: Shifeng Song
 * Created on July 24, 2017, 20:06 PM
 * Purpose:  Lottery Winners Modification
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
int binaryFind(int [], int );
//Execution begins here
int main(int argc, char** argv) {
    //Declare and initialize variables
    int array[] = {13579, 26791, 26792, 33445, 55555, 62483,
                   77777, 79422, 85647, 93121};
    int  val;
        
    //Input data
     cout<<"Enter this week’s winning 5-digit number please: ";
     cin>>val;
     
    //Process the data and output the transformed data
     if(binaryFind(array,val) != -1) 
         cout<<"You are a winner this week!!!\n";
     else 
         cout<<"You are not a winner this week. \n";
    
    //Exit stage right!
    return 0;
}

int binaryFind(int array[], int val){
    int index;
    int position = -1;
    int len = sizeof(array);
    int first, middle, last;
    bool found = false;
    
    first = 0;
    last = len - 1;
    
    while(!found&&first<=last){
        middle = (first + last)/2;
        
        if(array[middle] == val){
            position = middle;
            found = true;
        }
        else if (array[middle]>val){
            last = middle - 1;
        }
        else{
            first = middle + 1;
        }
    }
    return position;
}