/* 
 * File:   main.cpp
 * Author: Shifeng Song
 * Created on July 7th, 2017, 21:12 PM
 * Purpose:Characters for the ASCII Codes
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
    char ASCII='A';
            
    for(int a=0;a<=127;a++){  //Initialize variables and map inputs to outputs 
                              //the data and output the transformed data
        ASCII=a;
        cout<<ASCII<<"  ";
        if(a%16==0){
            cout<<"\n";
        }
       
    }
            
    
    //Exit stage right!
    return 0;
}