/* 
  File:   main.cpp
  Author: Shifeng
  Created on July 25th, 2017, 12:10 AM
  Purpose:  Menu to be used in Assignments_6 
 */

//System Libraries
#include <iostream>//Input Output Library
#include <cstdlib> //Random number generator seed
#include <ctime>   //Time Library
#include <iomanip> //Format Library
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another

//Function Prototypes
void menu();
void prob1();
void prob2();
void prob3();
void prob4();
void prob5();
void prob6();
void prob7();
void prob8();
void prob9();
void prob10();

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Loop on the menu
    do{
        //Input values
        menu();
        cin>>choice;

        //Switch to determine the Problem
        switch(choice){
            case '1':prob1();break;
            case '2':prob2();break;
            case '3':prob3();break;
            case '4':prob4();break;
            case '5':prob5();break;
            case '6':prob6();break;
            case '7':prob6();break;
            case '8':prob6();break;
            case '9':prob6();break;
            case '10':prob6();break;
            default:
                cout<<"You are exiting the program"<<endl;
        }
    }while(choice>='1'&&choice<='10');
    
    //Exit stage right!
    return 0;
}

void menu(){
    cout<<"Choose from the list"<<endl;
    cout<<"Type 1 for Problem 1"<<endl;
    cout<<"Type 2 for Problem 2"<<endl;
    cout<<"Type 3 for Problem 3"<<endl;
    cout<<"Type 4 for Problem 4"<<endl;
    cout<<"Type 5 for Problem 5"<<endl;
    cout<<"Type 6 for Problem 6"<<endl;
    cout<<"Type 6 for Problem 7"<<endl;
    cout<<"Type 6 for Problem 8"<<endl;
    cout<<"Type 6 for Problem 9"<<endl;
    cout<<"Type 6 for Problem 10"<<endl;
    cout<<"Type any other character to exit"<<endl;
}

const int SIZE=51;
void prntAry(char x[][SIZE],int numX){
    cout<<endl;
    for(int row=1;row<=numX;row++){
        for(int col=1;col<=numX;col++){
            if(x[row][col]!=0)cout<<static_cast<int>(x[row][col]);
            else cout<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
void prob1(){
    cout<<"We are in Problem 1"<<endl;
    system("cat Gaddis_8thEd_Chap7_Prob1_Largest_SmallestArrayValues/main.cpp");
}

void prob2(){
    cout<<"We are in Problem 2"<<endl;
    system("cat Gaddis_8thEd_Chap7_Prob2_RainfallStatistics/main.cpp");
}

void prob3(){
    cout<<"We are in Problem 3"<<endl;
    system("cat Gaddis_8thEd_Chap7_Prob3_ChipsandSalsa/main.cpp");
}

void prob4(){
    cout<<"We are in Problem 4"<<endl;
    system("cat Gaddis_8thEd_Chap7_Prob4_LargerThann/main.cpp");
}

void prob5(){
    cout<<"We are in Problem 5"<<endl;
    system("cat Gaddis_8thEd_Chap7_Prob5_MonkeyBusiness/main.cpp");
}


void prob6(){
    cout<<"We are in Problem 6"<<endl;
    system("cat Gaddis_8thEd_Chap8_Prob1_ChargeAccountValidation/main.cpp");
}

void prob7(){
    cout<<"We are in Problem 7"<<endl;
    system("cat Gaddis_8thEd_Chap8_Prob2_LotteryWinners/main.cpp");
}

void prob8(){
    cout<<"We are in Problem 8"<<endl;
    system("cat Gaddis_8thEd_Chap8_Prob3_LotteryWinnersModification/main.cpp");
}

void prob9(){
    cout<<"We are in Problem 9"<<endl;
    system("cat Gaddis_8thEd_Chap8_Prob4_ChargeAccountValidationModification/main.cpp");
}

void prob10(){
    cout<<"We are in Problem 10"<<endl;
    system("cat Gaddis_8thEd_Chap8_Prob5_RainfallStatisticsModification/main.cpp");
}