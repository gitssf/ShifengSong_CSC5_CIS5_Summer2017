/* 
 * File:   main.cpp
 * Author: Shifeng Song
 * Created on July 10th, 2017, 17:32 PM
 * Purpose:  Population
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cmath> //Math expressions
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    double startNum, aIncrease, popDay;
    int days;
    //Initialize variables
    cout<<"Enter the starting number of organisms please: ";
    cin>>startNum;
    while (startNum<2){
        cout<<"Do not accept the starting number less than 2, ";
        cout<<"please enter again: ";
        cin>>startNum;
    }
    cout<<"The percentage of average daily population increase is: ";
    cin>>aIncrease;
    while (aIncrease<0){
        cout<<"Do not accept a negative number for average daily ";
        cout<<"population increase, please enter again: ";
        cin>>aIncrease;
    }
    cout<<"The number of days they will multiply : ";
        cin>>days;
        while (days<1){
            cout<<"Do not accept a number less than 1 for the number of days, ";
            cout<<"please enter again: ";
            cin>>days;            
        }
        
     //Map inputs to outputs or process the data
    for(int d=1;d<=days;d++){
      popDay=startNum*pow((1+aIncrease),d);
      cout<<"The size of the population for day "<<d<<" is "<<popDay<<".\n"; 
                
    }
    
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}
