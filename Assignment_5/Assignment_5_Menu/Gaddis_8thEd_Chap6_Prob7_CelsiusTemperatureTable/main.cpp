/* 
 * File:   main.cpp
 * Author: Shifeng Song
 * Created on June 16, 2017, 14:55 PM
 * Purpose:  Celsius Temperature Table
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
float celsius(float F);
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float C;    
      
    //Map inputs to outputs the data
    cout<<"Fahrenheit               Celsius\n";
    cout<<"-------------------------------------\n";
    for (int F=0;F<=20;F++){        
        cout<<F<<"                       "<<celsius(F)<<"\n";
    }
        
    //Exit stage right!
    return 0;
}

float celsius(float F){
    float C;
    C=5.0/9.0*(F-32);
    return C;
}