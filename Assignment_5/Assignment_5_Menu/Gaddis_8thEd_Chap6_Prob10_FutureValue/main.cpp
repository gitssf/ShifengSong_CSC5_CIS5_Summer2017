/* 
 * File:   main.cpp
 * Author: Shifeng Song
 * Created on July 16, 2017, 17:18 AM
 * Purpose:  Future Value
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cmath>     //Math formula
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
float futureValue(float P, float i, int t);
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float P, i;
    int t;
        
    //Input data
    cout<<"Present value: ";
    cin>>P;
    cout<<"Monthly interest Rate: ";
    cin>>i;
    cout<<"the number of months: ";
    cin>>t;
    
    //Output the transformed data
    cout<<"the account’s future value is $"<<futureValue(P,i,t)<<".\n";
    
    //Exit stage right!
    return 0;
}

float futureValue(float P, float i, int t){
    float F;
    F = P*pow((1+i),t);
    return F;
}