/* 
 * File:   main.cpp
 * Author: Shifeng Song
 * Created on July 17, 2017, 15:38 PM
 * Purpose:  Star Search
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
void getJudgeData(float &);
void calcScore(float,float,float,float,float);
int findLowest(float,float,float,float,float);
int findHighest(float,float,float,float,float);
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float s1,s2,s3,s4,s5;
        
    //Input data
    getJudgeData( s1);
    getJudgeData( s2);
    getJudgeData( s3);
    getJudgeData( s4);
    getJudgeData( s5);
            
    //Output the transformed data
    calcScore(s1,s2,s3,s4,s5);
    
    //Exit stage right!
    return 0;
}

void getJudgeData(float &score){
    cout<<"Input a judge's score: ";
    cin>>score;
    while(score<0||score>10){
        cout<<"Do not accept judge scores lower than 0 or higher than 10, ";
        cout<<"Input a judge's score again: ";
        cin>>score;
    }
}

void calcScore(float s1,float s2,float s3,float s4,float s5){
     cout<<"The average of the three scores is ";
     cout<<(s1+s2+s3+s4+s5-findLowest(s1,s2,s3,s4,s5)-
             findHighest(s1,s2,s3,s4,s5))/3.0<<" .\n";
}

int findLowest(float s1,float s2,float s3,float s4,float s5){
    float lowerS;
    if (s1>s2) lowerS=s2;
    else lowerS=s1;
    if (lowerS>3) lowerS=s3;
    if (lowerS>s4) lowerS=s4;
    if (lowerS>s5) lowerS=s5;
    
    return lowerS;    
}


int findHighest(float s1,float s2,float s3,float s4,float s5){
    float higherS;
    if (s1<s2) higherS=s2;
    else higherS=s1;
    if (higherS<s3) higherS=s3;
    if (higherS<s4) higherS=s4;
    if (higherS<s5) higherS=s5;
    
    return higherS;
}