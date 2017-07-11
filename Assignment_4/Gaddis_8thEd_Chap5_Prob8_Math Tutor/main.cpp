/* 
 * File:   main.cpp
 * Author: Shifeng Song
 * Created on July 9th, 2017, 17:32 AM
 * Purpose:  Math Tutor
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <ctime> //Time
#include <cstdlib> //rand
#include <iomanip> //Format
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float x,y,add,sub,multi,div,num;
        
    //Initialize variables
    srand(unsigned(time(0)));
    x=rand()%10000;
    y=rand()%10000;
    add=x+y;
    sub=x-y;
    multi=x*y;
    div=x/y;            
   
    //Map inputs to outputs the transformed data
    cout<<"1. Addition \n2. Subtraction\n3. Multiplication\n4. Division\n5. Quit\n";
    cout<<"Please enter a number on menu: ";
    cin>>num;
    while(num<1||num>5){
        cout<<"ERROR! Please enter a number on menu. \n";
        cout<<"1. Addition \n2. Subtraction\n3. Multiplication\n4. Division\n5. Quit\n";
        cout<<"Please a number: ";
        cin>>num;
    }
    if(num==1){
      cout<<x<<"+"<<y<<" =\n";
      
      cout<<x<<"+"<<y<<" = "<<add<<"\n";
      
    }
    else if(num==2){
      cout<<x<<"-"<<y<<" =\n";
                
      cout<<x<<"-"<<y<<" = "<<sub<<"\n";
     
    }
    else if(num==3){
      cout<<x<<"*"<<y<<" =\n";
      
      cout<<x<<"*"<<y<<" = "<<multi<<"\n";
    }
    else if(num==4){
      cout<<x<<"/"<<y<<" =\n";
      
      cout<<x<<"/"<<y<<" = "<<div<<"\n";
    }
    else(num==5);
    //Exit stage right!
    return 0;
}