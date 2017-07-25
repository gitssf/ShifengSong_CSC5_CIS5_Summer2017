/* 
 * File:   main.cpp
 * Author: Shifeng Song
 * Created on July 23, 2017, 1:32 AM
 * Purpose:  Rainfall Statistics
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
    const int SIZE = 12;
    double monRainfall[SIZE], avrRainfall, maxRainfall, minRainfall,totRainfall;
        
    //Map inputs and process the data
    cout<<"Input the rainfall each of 12 months: \n";
    for(int i=0; i<SIZE; i++){
        cin>>monRainfall[i];
        while(monRainfall[i]<0){
        cout<<"Do not accept negative numbers for rainfall fifures, ";
        cout<<"innput again please:  \n";
        cin>>monRainfall[i];
        monRainfall[i]+=totRainfall;
      }
    }
         
    avrRainfall = totRainfall/12.0;
    maxRainfall = monRainfall[0];
    minRainfall = monRainfall[0];
    for(int i=1; i<SIZE; i++){
        if(maxRainfall<monRainfall[i]) maxRainfall = monRainfall[i];
        if(minRainfall>monRainfall[i]) minRainfall = monRainfall[i];
    }
    
    //Output the transformed data
    for(int j=0; j<SIZE; j++){
        cout<<"The rainfall of month "<<j+1<<" is "<<monRainfall[j]<<".\n";
    }
    cout<<"The average monthly rainfall is "<<avrRainfall<<".\n";
    cout<<"The month with highest rainfall is "<<maxRainfall<<".\n";
    cout<<"The month with lowest rainfall is "<<minRainfall<<".\n";
    
    //Exit stage right!
    return 0;
}

