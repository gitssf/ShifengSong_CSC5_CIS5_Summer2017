/* 
 * File:   main.cpp
 * Author: Shifeng Song
 * Created on July 23, 2017, 19:32 PM
 * Purpose:  Charge Account Validation
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
int validation(int [], int, int);
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
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
    if (validation(accountNunm,SIZE,val)!=-1) 
    cout<<"The number you enter is valid.\n";    
    else cout<<"The number you enter is invalid.\n";
   
    //Exit stage right!
    return 0;
}

int validation(int num[], int SIZE, int val){
    int index;
    int position = -1;
    
    for(index=0; index<SIZE; index++){
        if(num[index] == val){
            position = index;
            break;
        }
    }
   return position; 
}