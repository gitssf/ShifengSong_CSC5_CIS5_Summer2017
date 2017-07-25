/* 
 * File:   main.cpp
 * Author: Shifeng Song
 * Created on July 23, 2017, 17:32 PM
 * Purpose:  Monkey Business
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
float getNum(int , int);
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    const int ROW_SIZE = 3;
    const int COL_SIZE = 5;
    int monkeys[ROW_SIZE];
    int days[COL_SIZE];
    float food[ROW_SIZE][COL_SIZE], totFood,avrFood , leastFood, greatestFood;   
    
    //Map inputs to outputs or process the data     
    for(int row = 0; row<ROW_SIZE; row++){
        for(int col = 0; col<COL_SIZE; col++){
            food[row][col] = getNum(row, col );         
            totFood += food[row][col];
        }
    }
    avrFood = totFood/COL_SIZE;
   
    //Initialize variables
    leastFood = food[0][0];
    greatestFood = food[0][0];
    totFood = 0;   
   for(int row = 0; row<ROW_SIZE; row++){
        for(int col = 0; col<COL_SIZE; col++){
            if(leastFood>food[row][col])leastFood = food[row][col];
            if(greatestFood<food[row][col])greatestFood = food[row][col];
        }
    }
    
    //Output the transformed data
    cout<<"Average amount of food eaten per day by the whole family of monkeys ";
    cout<<"is "<<avrFood<<".\n";
    cout<<"The least amount of food eaten is "<<leastFood<<".\n";
    cout<<"The greatest amount of food eaten is "<<greatestFood<<".\n";
    
    //Exit stage right!
    return 0;
}

float getNum(int row, int col ){
    float n;
    cout<<"How many pounds food monkey "<<row+1<<" eats on day ";
            cout<<col+1<<" ? ";
            cin>>n;
    while (n<0){
        cout<<"Do not accept negative number, input again please: ";
        cin>>n;
            }
    return n;
}