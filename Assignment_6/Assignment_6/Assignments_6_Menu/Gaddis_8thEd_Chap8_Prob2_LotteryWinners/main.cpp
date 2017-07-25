/* 
 * File:   main.cpp
 * Author: Shifeng Song
 * Created on July 24, 2017, 15:32 PM
 * Purpose:  Lottery Winners
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <vector>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
int find(vector<int> , int);
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    vector<int> num;
    int val;
    
    //Initialize variables
     num.push_back(13579);
     num.push_back(26791);
     num.push_back(26792);
     num.push_back(33445);
     num.push_back(55555);
     num.push_back(62483);
     num.push_back(77777);
     num.push_back(79422);
     num.push_back(85647);
     num.push_back(93121);

    //Input data
     cout<<"Enter this week’s winning 5-digit number please: ";
     cin>>val;
     
    //Process the data and output the transformed data
     if(find(num,val) != -1) 
         cout<<"You are a winner this week!!!\n";
     else 
         cout<<"You are not a winner this week. \n";
    
    //Exit stage right!
    return 0;
}

int find(vector<int> num, int val){
    int size = num.size();
    int index;
    int position = -1;
    for (index = 0; index<size; index++){
        if(num[index] == val) {
            position = index;
        break;     
        }
    }
    return position;
}