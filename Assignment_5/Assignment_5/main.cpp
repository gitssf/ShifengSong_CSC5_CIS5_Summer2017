/* 
  File:   main.cpp
  Author: Shfeng Sonmg
  Created on July 17, 2017, 21:57 PM
  Purpose:  Assignment_5_Menu
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

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int choice;
    
    //Loop on the menu
    do{
    
        //Input values
        cout<<"Choose from the list"<<endl;
        cout<<"Type 1 for Assignment_5_Pro1"<<endl;
        cout<<"Type 2 for Assignment_5_Pro2"<<endl;
        cout<<"Type 3 for Assignment_5_Pro3"<<endl;
        cout<<"Type 4 for Assignment_5_Pro4"<<endl;
        cout<<"Type 5 for Assignment_5_Pro5"<<endl;
        cout<<"Type 6 for Assignment_5_Pro6"<<endl;
        cout<<"Type 7 for Assignment_5_Pro7"<<endl;
        cout<<"Type 8for Assignment_5_Pro8"<<endl;
        cout<<"Type 9 for Assignment_5_Pro9"<<endl;
        cout<<"Type a for Assignment_5_Pro10"<<endl;
        cout<<"Type b for Assignment_5_Pro11"<<endl;
        cout<<"Type any other character to exit"<<endl;
        cin>>choice;
        cin.ignore(1024,'\n');

        //Switch to determine the Problem
        switch(choice){
            case 1:
                cout<<"We are in Problem 1"<<endl;
                system("cat Gaddis_8thEd_Chap6_Prob1_Markup/main.cpp");
                break;
            
            case 2:
                cout<<"We are in Problem 2"<<endl;
                system("cat Gaddis_8thEd_Chap6_Prob2_RectangleAreaCompletetheProgram/main.cpp");
                break;
            
            case 3:
                cout<<"We are in Problem 3"<<endl;
                system("cat Gaddis_8thEd_Chap6_Prob3_WinningDivision/main.cpp");
                break;
            
             case 4:
                cout<<"We are in Problem 4"<<endl;
                system("cat Gaddis_8thEd_Chap6_Prob5_FallingDistance/main.cpp");
                break;
            
              case 5:
                cout<<"We are in Problem 5"<<endl;
                system("cat Gaddis_8thEd_Chap6_Prob6_KineticEnergy/main.cpp");
                break;
            
               case 6:
                cout<<"We are in Problem 6"<<endl;
                system("cat Gaddis_8thEd_Chap6_Prob7_CelsiusTemperatureTable/main.cpp");
                break;
                
                case 7:
                cout<<"We are in Problem 7"<<endl;
                system("cat Gaddis_8thEd_Chap6_Prob8_CoinToss/main.cpp");
                break;
                
                case 8:
                cout<<"We are in Problem 8"<<endl;
                system("cat Gaddis_8thEd_Chap6_Prob9_PresentValue/main.cpp");
                break;
                
                case 9:
                cout<<"We are in Problem 9"<<endl;
                system("cat Gaddis_8thEd_Chap6_Prob10_FutureValue/main.cpp");
                break;
                
                case 10:
                cout<<"We are in Problem 10"<<endl;
                system("cat Gaddis_8thEd_Chap6_Prob11_LowestScoreDrop/main.cpp");
                break;
                
                case 11:
                cout<<"We are in Problem 11"<<endl;
                system("cat Gaddis_8thEd_Chap6_Prob12_StarSearch/main.cpp");
                break;
                
                            
            default:
                cout<<"You are exiting the program"<<endl;
        }
    }while(choice>=1&&choice<=11);
    
    //Exit stage right!
    return 0;
}