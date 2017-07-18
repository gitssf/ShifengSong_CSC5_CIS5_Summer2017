/* 
 * File:   main.cpp
 * Author: Shifeng Song
 * Created on July 16, 2017, 16:55 PM
 * Purpose:  Present Value
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cmath>     //For math formula
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
float presentValue(float F,float r, unsigned n);
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float F, r;
    unsigned n;
    
    //Process and output data 
    presentValue(F,r,n);
    
    //Exit stage right!
    return 0;
}

float presentValue(float F,float r, unsigned n){
    float P;
    cout<<"Future value: ";
    cin>>F;
    cout<<"Annual Interest Rate: ";
    cin>>r;
    cout<<"The number of years: ";
    cin>>n;
    P = F/pow((1+r),n);
    cout<<"The value you need to deposit today  is $"<<P<<".\n";
    return P;
}