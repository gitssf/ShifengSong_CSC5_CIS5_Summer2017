/* 
 * File:   main.cpp
 * Author: Shifeng Song
 * Created on July 16, 2017, 14:32 PM
 * Purpose:  Kinetic Energy
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
float kineticEnergy(float m, float v);
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float m,v;
    //Input data
    cout<<"Please enter the value for mass:";
    cin>>m;
    cout<<"Please enter the value for velocity:";
    cin>>v;
    //Output the transformed data
    cout<<"The kinetic energy is "<<kineticEnergy(m,v)<<".\n";
    //Exit stage right!
    return 0;
}

float kineticEnergy(float m, float v){
    float KE=1.0/2.0*m*v*v;v;
    return KE;
}