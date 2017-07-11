/* 
 * File:   main.cpp
 * Author: Shifeng Song
 * Created on July 10th, 2017, 18:27 PM
 * Purpose:  Celsius to Fahrenheit Table
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
    float fah;
       
    //Map inputs to outputs the transformed data
    cout<<"Celsius temperature           Fahrenheit\n";
    cout<<"-----------------------------------------\n";
    for(float c=0;c<=20;c++){
     fah=c*9/5+32;
     cout<<c<<"                              "<<fah<<endl;
        
    }
        
    //Exit stage right!
    return 0;
}
