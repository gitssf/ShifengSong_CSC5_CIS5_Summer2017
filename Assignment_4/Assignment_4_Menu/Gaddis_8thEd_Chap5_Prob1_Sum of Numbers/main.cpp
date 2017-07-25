/* 
 * File:   main.cpp
 * Author: Shifeng Song
 * Created on July 7th, 2017, 18:50 PM
 * Purpose:  Sum of Numbers
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
    int i,num,sum;
    //Input data
    cout<<"Please enter an integer number: ";
    cin>>num;
    
    while(num<0){
       cout<<"ERROR!!!Do not accept a negative starting number!\n";
       cout<<"Please enter again :";
       cin>>num;       
    }    
    
    //Map inputs to outputs or process the data
   
        sum=(1+num)*num/2;
   
    //Output the transformed data
    cout<<"The sum of all the integers from 1 up to "<<num<<" is "<<sum<<".\n";
    
    //Exit stage right!
    return 0;
}