/* 
 * File:   main.cpp
 * Author: Song Shifeng 
 * Created on July 16, 2017, 17:32 AM
 * Purpose:  Lowest Score Drop
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
void getScore(int &);
void calcAverage(int, int, int, int, int);
int findLowest(int, int, int, int, int);
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int a,b,c,d,e;
        
    //Input data
    getScore(a);
    getScore(b);
    getScore(c);
    getScore(d);
    getScore(e);
    
    //Output the transformed data
    calcAverage(a,b,c,d,e);
    
    //Exit stage right!
    return 0;
}

void getScore(int &score){
    cout<<"Input the scores: ";
    cin>>score;
    while(score<0||score>100){
       cout<<"Do not accept test scores lower than 0 or higher than 100, ";
       cout<<"Input the scores again: ";
       cin>>score; 
    }
}

void calcAverage(int a, int b, int c, int d, int e){
    cout<<"The average of the four highest scores is: ";
    cout<<(a+b+c+d+e-findLowest(a,b,c,d,e))/4.0;
    
}

int findLowest(int a,int b,int c, int d, int e){
    int lowerScore;
    if(a<b){
        lowerScore=a;
    }
    else {
        lowerScore=b;
    }
    if (c<lowerScore) lowerScore=c;
    if (d<lowerScore) lowerScore=d;
    if (e<lowerScore) lowerScore=e;
    return lowerScore;
}    