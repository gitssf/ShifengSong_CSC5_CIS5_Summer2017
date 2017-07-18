/* 
 * File:   main.cpp
 * Author: Shifeng Song
 * Created on July 15, 2017, 19:32 PM
 * Purpose:  Winning Division
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
double getSales(double,double,double,double);
void findHighest(double,double,double,double);
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    double a,b,c,d;
        
    //Input data
    getSales(a,b,c,d);
    
    //Process and output the data
    findHighest(a,b,c,d);
    
    //Exit stage right!
    return 0;
}

double getSales(double,double,double,double){
    double neSale,seSale,nwSale,swSale;
    cout<<"Please input the quarterly sales form ";
    cout<<" Northeast,Southeast, Northwest, and Southwest: \n";
    cin>>neSale>>seSale>>nwSale>>swSale;
    while (neSale<0||seSale<0||nwSale<0||swSale<0){
        cout<<"Do not accept dollar amounts less than $0.00,";
        cout<<" enter again please: \n";
        cin>>neSale>>seSale>>nwSale>>swSale;
    }
   return  neSale,seSale,nwSale,swSale;
}

void findHighest(double,double,double,double){
    double neSale,seSale,nwSale,swSale;
    if (neSale>seSale&&neSale>nwSale&&neSale>swSale){
        cout<<"The division of Northeast got the higest sale";
        cout<<" that is $"<<neSale;
    }
    else if (seSale>neSale&&seSale>nwSale&&seSale>swSale){
        cout<<"The division of Southeast got the higest sale";
        cout<<" that is $"<<seSale;
    }
    else if (nwSale>neSale&&nwSale>seSale&&nwSale>swSale){
        cout<<"The division of Northwest got the higest sale";
        cout<<" that is $"<<nwSale;         
    }
        
    else{
        cout<<"The division of Southwest got the higest sale";
        cout<<" that is $"<<swSale<<".";
    }
}