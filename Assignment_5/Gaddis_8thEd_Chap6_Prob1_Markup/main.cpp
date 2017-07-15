/* 
 * File:   main.cpp
 * Author: Shifeng Song
 * Created on July 14, 2017, 21:04PM
 * Purpose:  Markup
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
float calculateRetail(float saleCost, float markupPrc);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float retailPrice, saleCost, markupPrc;
    
    //Input data
    cout<<"Please enter an item’s wholesale cost: ";
    cin>>saleCost;
    while (saleCost<0){
        cout<<"The wholesale cost should be not less than 0,";
        cout<<"enter again please: ";
        cin>>saleCost;
        }
    cout<<"Please enter an item's markup percentage: ";
    cin>>markupPrc;       
    while (markupPrc<0){
        cout<<"The markup percentage should be not less than 0,";
        cout<<"enter again please: ";
        cin>>markupPrc;
        }
        
    //Output the transformed data
    cout<<"The item's retail price is $"<<calculateRetail(saleCost,markupPrc);
    cout<<".";
    
    //Exit stage right!
    return 0;
}

float calculateRetail(float saleCost, float markupPrc){
    float retailPrice;
    retailPrice = saleCost*(1+markupPrc);
}