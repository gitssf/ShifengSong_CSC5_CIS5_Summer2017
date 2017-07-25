/* 
 * File:   main.cpp
 * Author: Shifeng Song
 * Created on July 9th, 2017, 16:32 PM
 * Purpose: Pennies for Pay
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cmath> //Math
#include <iomanip>//Fotrmat
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    double days,salaryEachday,salaryTot; 
    //Initialize variables
    
    //Input data
    cout<<"Please enter the number of days worked: ";
    cin>>days;
     while(days<1){
         cout<<"Do not accept a number less than 1, ";
         cout<<"enter again please: ";
         cin>>days;
     }
    cout<<"days"<<"     Each Day Pay\n";
    cout<<"---------------------------\n";
    //Map inputs to outputs the transformed data
    for (int i=1;i<=days;i++){
        salaryEachday=pow(2,(i-1))/100;
       
        cout<<i<<"            $"<<salaryEachday<<salaryTot<<endl;
    }
    salaryTot=(pow(2,days)-1)/100;
    cout<<"Total Pay :  $"<<salaryTot;
    
    //Exit stage right!
    return 0;
}