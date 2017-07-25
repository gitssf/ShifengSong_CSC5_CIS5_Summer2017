/* 
 * File:   main.cpp
 * Author: Shifeng Song
 * Created on July 9th, 2017, 15:50 PM
 * Purpose:  Distance Traveled
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
    float speed, hours, distance;
    
    //Input data
    cout<<"What is the speed of the vehicle in mph? ";
    cin>>speed;
    while (speed<0){
        cout<<"Do not accept a negative number for speed,enter again please: ";
        cin>>speed;
        
    }
    cout<<"How many hours has it traveled? ";
    cin>>hours;
    while (hours<1){
        cout<<"Do not accept any value less than 1 for time traveled,";
        cout<<"enter again please: ";
        cin>>hours;
    }
    //Map inputs to outputs the transformed data
    cout<<"Hours        Distance Traveled\n";
    cout<<"---------------------------\n";
    for (int i=1;i<=hours;i++){
        distance=speed*i;
        cout<<i<<"                  "<<distance<<endl;
    }
        
        
    //Exit stage right!
    return 0;
}