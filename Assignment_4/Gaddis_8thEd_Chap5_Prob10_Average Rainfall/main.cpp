/* 
 * File:   main.cpp
 * Author: Shifeng Song
 * Created on July 10th, 2017, 16:32 PM
 * Purpose:  Average Rainfall
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
    int years, months;
    float rainfallPermonth, totRainfall, average;
       
    //Input data
    cout<<"Years: ";
    cin>>years;
    while (years<1){
        cout<<"Do not accept a number less than 1 for the number of years.";
        cout<<"Enter again please: 0";
        cin>>years;
                
    }
    
    //Map inputs to outputs or process the data
    for (int y=1;y<=years;y++){
        for (int m=1;m<=12;m++){
            cout<<"The inches of rainfall for month "<<m<<" :";
            cin>>rainfallPermonth;
            while (rainfallPermonth<0){
                cout<<"Do not accept negative numbers for the monthly ";
                cout<<"rainfall, enter again please: ";
                cin>>rainfallPermonth;
            }
            totRainfall+=rainfallPermonth;
            months=years*12;
            average=totRainfall/months;
            
        }
    }
    //Output the transformed data
    cout<<"The number of months is "<<months<<".\n";
    cout<<"The total of rainfall is "<<totRainfall<<" inches.\n";
    cout<<"The average rainfall per month for the entire period is ";
    cout<<average<<" inches,\n";
    //Exit stage right!
    return 0;
}

