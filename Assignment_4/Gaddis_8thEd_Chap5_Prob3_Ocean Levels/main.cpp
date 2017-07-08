/* 
 * File:   main.cpp
 * Author: Shifeng Song
 * Created on July 7th, 2017, 23:49 PM
 * Purpose:  Ocean Levels
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
    float risMilli;
    
    //Initialize variables
    //Input and process and output data
    for(int i=1;i<=25;i++){
         risMilli=1.5*i;
         if(i%5==1){
            cout<<"  \n";
        }
        cout<<risMilli<<"\t";
    }
        
    
    
    //Exit stage right!
    return 0;
}