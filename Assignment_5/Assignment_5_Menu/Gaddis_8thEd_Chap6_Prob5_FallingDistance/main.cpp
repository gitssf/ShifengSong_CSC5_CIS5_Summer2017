/* 
 * File:   main.cpp
 * Author: Shifeng Song
 * Created on July 17, 2017, 13:25 AM
 * Purpose:  Falling Distance
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
float fallingDistance(float t);
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    const float g = 9.8;
    float t,d;
    
       
    //Map inputs to outputs or process the data
    cout<<"Time                Distance\n";
    cout<<"------------------------------\n";
    for (t=1; t<=10; t++ ){        
        cout<<t<<" seconds         "<<fallingDistance(t)<<" meters\n";  
        
}
    //Output the transformed data
      
    
    //Exit stage right!
    return 0;
}

float fallingDistance(float t){
    const float g = 9.8;
    float d;
    d = 1.0/2.0*g*t*t;
    return d;
}