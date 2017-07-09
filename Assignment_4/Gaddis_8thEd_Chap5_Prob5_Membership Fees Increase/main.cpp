/* 
 * File:   main.cpp
 * Author: Shifeng Song
 * Created on July 9th, 2017, 15:28 PM
 * Purpose:  Membership Fees Increase
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cmath> //math

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float rates;
        
    //Map inputs to outputs the transformed data
    for(int i=1;i<=6;i++){
        rates=2500*pow((1+0.04),i);
        cout<<"After "<<i<<" years' rates is $"<<rates<<"."<<endl;
    }
        
    //Exit stage right!
    return 0;
}

