/* 
 * File:   main.cpp
 * Author: Shifeng Song
 * Created on July 9th , 2017, 15:11 PM
 * Purpose:  Calories Burned
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
    float caloriesBurn;
      
        
    //Map inputs to Outputs the transformed data 
    for(int i=5;i<=30;i+=5){
        caloriesBurn=3.6*i;
        cout<<caloriesBurn<<endl;
    }
      
        
        
    //Exit stage right!
    return 0;
}