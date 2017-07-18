/* 
 * File:   main.cpp
 * Author: Shifeng Song
 * Created on July 16, 2017, 15:08 PM
 * Purpose:  Coin Toss
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <ctime>    //For random
#include <cstdlib>  //For random
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
void coinToss();
//Execution begins here
int main(int argc, char** argv) {
    //Set seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    unsigned times;
        
    //Input data
   cout<<"How many times the coin should be tossed? ";
   cin>>times;
        
    //Output the transformed data
   for(int i=1;i<=times;i++){
       coinToss();
   }
    //Exit stage right!
    return 0;
}

void coinToss(){
    int coin;
    coin = rand()%2+1;
    if (coin==1)
        cout<<"heads\n";
    else 
        cout<<"tailes\n";    
    }