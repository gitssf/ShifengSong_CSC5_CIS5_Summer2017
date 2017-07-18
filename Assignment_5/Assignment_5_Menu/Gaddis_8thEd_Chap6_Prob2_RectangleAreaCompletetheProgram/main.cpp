/*
 * File:   main.cpp
 * Author: Shifeng Song
 * Created on July 15, 2017, 14:32 PM
 * Purpose:  Rectangle Area—Complete the Program
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
double getLength( );
double getWidth( );
double getArea(double , double );
void displayData(double );
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    double x,y,z;

    //Input data
    x=getLength();
    y=getWidth();

    //Map inputs to outputs or process the data
    z=getArea(x,y);

    //Output the transformed data
    displayData(z);

    //Exit stage right!
    return 0;
}

double getLength(){
    double len;
  cout<<"Please enter the length: ";
  cin>>len;
  return len;
}

double getWidth(){
    double wid;
  cout<<"Please enter the width: ";
  cin>>wid;
  return wid;
}

double getArea(double getLength, double getWidth){
    return getLength*getWidth;
}

void displayData(double getArea){
    cout<<"TherRectangle Area is "<<getArea<<".\n";
}
