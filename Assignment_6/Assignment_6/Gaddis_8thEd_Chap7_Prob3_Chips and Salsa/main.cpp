/*
 * File:   main.cpp
 * Author: Shifeng Song
 * Created on July 23, 2017, 11:32 AM
 * Purpose:  Chips and Salsa
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <string>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
int getNum(string);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    const int SIZE = 5;
    int numSold[SIZE], totSale,highestSale,lowestSale;


    //Initialize variables
    string typSalsa[] = {"mild", "medium", "sweet","hot", "zesty"};

    //Map inputs and process the data
    cout<<"Input the number of jars sold for each type: \n";

    for(int i=0; i<SIZE; i++){
      numSold[i]=getNum(typSalsa[i]);
    }

    highestSale = numSold[0];
    lowestSale = numSold[0];
    totSale = 0;
    for(int i=0; i<SIZE; i++){
      if(highestSale<numSold[i]) highestSale = numSold[i];
      if(lowestSale>numSold[i]) lowestSale = numSold[i];
      totSale += numSold[i];
    }

    //Output the transformed data
    for(int j=0; j<SIZE; j++){
        cout<<typSalsa[j]<<" : "<<numSold[j]<<"\n";
    }
    cout<<"The total sale: "<<totSale<<"\n";
        
    int offset;
    for(int j=0; j<SIZE; j++){
        if (highestSale == numSold[j]) {
        offset = j;
        break;
  }
} 
    cout<<"the highest sale: "<<typSalsa[offset]<<"\n";
    
    int offset2;
    for(int k=0; k<SIZE;k++){
        if(lowestSale == numSold[k]){
            offset2 = k;
        }   
        break;
    }
    cout<<"the lowest sale: "<<typSalsa[offset2]<<"\n";


    //Exit stage right!
    return 0;
}



int getNum(string promptStr){
  int num;
  while (1) {
    cout<<"Please input the number of "<<promptStr<<" sold:";
    cin>>num;
    cin.ignore(1024,'\n');

    if (num<0) {
      cout<<"The input number should be greater than 0!\n";
      continue;
    } else {
      break;
    }
  }

  return num;
}
