/* 
 * File:   main.cpp
 * Author: Shifeng Song
 * Created on July 9th, 2017, 20:03PM
 * Purpose:  Hotel Occupancy
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cmath> //Math expressions
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {    //Declare variables
    int floors, peroccuRooms,totunoccuRooms,roomsPerfloor;
    float prcOccuRooms, totoccuRooms, totRooms;
    
    //Input data
    cout<<"How many floors the hotel has? ";
    cin>>floors;
    while(floors<1){
        cout<<"Do not accept a value less than 1 for the number of floors.\n";
        cout<<"How many floors the hotel has? ";
        cin>>floors;
    }
    
    //Map inputs to 0utputs the transformed data    
    for(int f=1;f<=floors;f++){        
        if (f==13) continue;  //Skip 13      
        cout<<"How many rooms on floor "<<f<<" ? ";        
        cin>>roomsPerfloor;
        while (roomsPerfloor<10){    
                  cout<<"Do not accept a number less than 10 for the ";
                  cout<<"number of rooms on a floor.\n";
                  cout<<"How many rooms on the floor? "; 
                  cin>>roomsPerfloor;        
        }     
        cout<<"How many rooms are occupied on floor "<<f<<" ? ";
        cin>>peroccuRooms;
        totRooms+=roomsPerfloor;
        totoccuRooms+=peroccuRooms;
        totunoccuRooms=totRooms-totoccuRooms;
        prcOccuRooms=totoccuRooms/totRooms*100;
        }
    
    
    cout<<"The hotel has "<<totRooms<<" rooms."<<endl;
    cout<<"There are "<<totoccuRooms<<" rooms that were occupied.\n";
    cout<<"There are "<<totunoccuRooms<<" rooms that were not occupied.\n";
    cout<<"The percentage of rooms occupied is "<<prcOccuRooms<<"%.\n";
    
    //Exit stage right!
    return 0;
}



