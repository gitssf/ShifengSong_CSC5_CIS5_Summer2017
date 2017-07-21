/* 
 * File:   main.cpp
 * Author: Shifeng Song
 * Created on July 17, 2017, 21:32 PM
 * Project Title:  Blackjack
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <ctime>     // 
#include <cstdlib>  //
#include <iostream> //
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const int maxCardNum  = 52; // The Max number of playing cards
int NumArray [maxCardNum];
//Function Prototypes
int getCardNum(int);    //
void transCard1(int); //Transfer card suits
int transCard2(int); //transfer card points;
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables    
    int dealer[20], player[20];

    
    //Initialize variables
    
    //Input data
    player[0]=getCardNum();
    dealer[0]=getCardNum();
    player[1]=getCardNum();
    dealer[1]=getCardNum();
            
    transCard1(dealer[0]);
    transCard1(player[0]);
    transCard1(player[1]);
    
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}



/*
** get random number 1-52
** input the numbers to getNumArr 
** if the function is called more than 52 times then return -1
*/
int getCardNum(){
  int ret, offset, flag, i;

  offset = maxCardNum ;
  for (i=0; i<maxCardNum ; i++) {
    if (0 == NumArray [i]) {
      offset = i;
      break;
    }
  }

  if (offset == maxCardNum ) return -1;

  while (1) {
    ret = rand()%maxCardNum  + 1;

    flag = 0;
    for (i=0; i<offset; i++) {
      if (ret == NumArray [i]) {
        flag = 1;
        break;
      }
    }

    if (0 == flag) break;
  }

  NumArray [offset] = ret;

  return ret;
}


void transCard1(int cardNum){
    int cardSuit;
    if (cardNum==1)cout<<"The card you choosed is Heart A"<<endl;
    if (cardNum==2)cout<<"The card you choosed is Spade A"<<endl;
    if (cardNum==3)cout<<"The card you choosed is Club A"<<endl;
    if (cardNum==4)cout<<"The card you choosed is Diamond A"<<endl;
    if (cardNum==5)cout<<"The card you choosed is Heart 2"<<endl;
    if (cardNum==6)cout<<"The card you choosed is Spade 2"<<endl;
    if (cardNum==7)cout<<"The card you choosed is Club 2"<<endl;
    if (cardNum==8)cout<<"The card you choosed is Diamond 2"<<endl;
    if (cardNum==9)cout<<"The card you choosed is Heart 3"<<endl;
    if (cardNum==10)cout<<"The card you choosed is Spade 3"<<endl;
    if (cardNum==11)cout<<"The card you choosed is Club 3"<<endl;
    if (cardNum==12)cout<<"The card you choosed is Diamond 3"<<endl;
    if (cardNum==13)cout<<"The card you choosed is Heart 4"<<endl;
    if (cardNum==14)cout<<"The card you choosed is Spade 4"<<endl;
    if (cardNum==15)cout<<"The card you choosed is Club 4"<<endl;
    if (cardNum==16)cout<<"The card you choosed is Diamond 4"<<endl;
    if (cardNum==17)cout<<"The card you choosed is Heart 5"<<endl;
    if (cardNum==18)cout<<"The card you choosed is Spade 5"<<endl;
    if (cardNum==19)cout<<"The card you choosed is Club 5"<<endl;
    if (cardNum==20)cout<<"The card you choosed is Diamond 5"<<endl;
    if (cardNum==21)cout<<"The card you choosed is Heart 6"<<endl;
    if (cardNum==22)cout<<"The card you choosed is Spade 6"<<endl;
    if (cardNum==23)cout<<"The card you choosed is Club 6"<<endl;
    if (cardNum==24)cout<<"The card you choosed is Diamond 6"<<endl;
    if (cardNum==25)cout<<"The card you choosed is Heart 7"<<endl;
    if (cardNum==26)cout<<"The card you choosed is Spade 7"<<endl;
    if (cardNum==27)cout<<"The card you choosed is Club 7"<<endl;
    if (cardNum==28)cout<<"The card you choosed is Diamond 7"<<endl;
    if (cardNum==29)cout<<"The card you choosed is Heart 8"<<endl;
    if (cardNum==30)cout<<"The card you choosed is Spade 8"<<endl;
    if (cardNum==31)cout<<"The card you choosed is Club 8"<<endl;
    if (cardNum==32)cout<<"The card you choosed is Diamond 8"<<endl;
    if (cardNum==33)cout<<"The card you choosed is Heart 9"<<endl;
    if (cardNum==34)cout<<"The card you choosed is Spade 9"<<endl;
    if (cardNum==35)cout<<"The card you choosed is Club 9"<<endl;
    if (cardNum==36)cout<<"The card you choosed is Diamond 9"<<endl;
    if (cardNum==37)cout<<"The card you choosed is Heart 10"<<endl;
    if (cardNum==38)cout<<"The card you choosed is Spade 10"<<endl;
    if (cardNum==39)cout<<"The card you choosed is Club 10"<<endl;
    if (cardNum==40)cout<<"The card you choosed is Diamond 10"<<endl;
    if (cardNum==41)cout<<"The card you choosed is Heart Jack"<<endl;
    if (cardNum==22)cout<<"The card you choosed is Spade Jack"<<endl;
    if (cardNum==43)cout<<"The card you choosed is Club Jack"<<endl;
    if (cardNum==44)cout<<"The card you choosed is Diamond Jack"<<endl;
    if (cardNum==45)cout<<"The card you choosed is Heart Queen"<<endl;
    if (cardNum==45)cout<<"The card you choosed is Spade Queen"<<endl;
    if (cardNum==47)cout<<"The card you choosed is Club Queen"<<endl;
    if (cardNum==48)cout<<"The card you choosed is Diamond Queen"<<endl;
    if (cardNum==49)cout<<"The card you choosed is Heart King"<<endl;
    if (cardNum==50)cout<<"The card you choosed is Spade King"<<endl;
    if (cardNum==51)cout<<"The card you choosed is Club King"<<endl;
    if (cardNum==52)cout<<"The card you choosed is Diamond king"<<endl;    
   
}

int transCard2(int cardNum){
    int cardPoint;
    if (cardNum==1)cardPoint=1;
    if (cardNum==2)cardPoint=1;
    if (cardNum==3)cardPoint=1;
    if (cardNum==4)cardPoint=1;
    if (cardNum==5)cardPoint=2;
    if (cardNum==6)cardPoint=2;
    if (cardNum==7)cardPoint=2;
    if (cardNum==8)cardPoint=2;
    if (cardNum==9)cardPoint=3;
    if (cardNum==10)cardPoint=3;
    if (cardNum==11)cardPoint=3;
    if (cardNum==12)cardPoint=3;
    if (cardNum==13)cardPoint=4;
    if (cardNum==14)cardPoint=4;
    if (cardNum==15)cardPoint=4;
    if (cardNum==16)cardPoint=4;
    if (cardNum==17)cardPoint=5;
    if (cardNum==18)cardPoint=5;
    if (cardNum==19)cardPoint=5;
    if (cardNum==20)cardPoint=5;
    if (cardNum==21)cardPoint=6;
    if (cardNum==22)cardPoint=6;
    if (cardNum==23)cardPoint=6;
    if (cardNum==24)cardPoint=6;
    if (cardNum==25)cardPoint=7;
    if (cardNum==26)cardPoint=7;
    if (cardNum==27)cardPoint=7;
    if (cardNum==28)cardPoint=7;
    if (cardNum==29)cardPoint=8;
    if (cardNum==30)cardPoint=8;
    if (cardNum==31)cardPoint=8;
    if (cardNum==32)cardPoint=8;
    if (cardNum==33)cardPoint=9;
    if (cardNum==34)cardPoint=9;
    if (cardNum==35)cardPoint=9;
    if (cardNum==36)cardPoint=9;
    if (cardNum==37)cardPoint=10;
    if (cardNum==38)cardPoint=10;
    if (cardNum==39)cardPoint=10;
    if (cardNum==40)cardPoint=10;
    if (cardNum==41)cardPoint=10;
    if (cardNum==22)cardPoint=10;
    if (cardNum==43)cardPoint=10;
    if (cardNum==44)cardPoint=10;
    if (cardNum==45)cardPoint=10;
    if (cardNum==45)cardPoint=10;
    if (cardNum==47)cardPoint=10;
    if (cardNum==48)cardPoint=10;
    if (cardNum==49)cardPoint=10;
    if (cardNum==50)cardPoint=10;
    if (cardNum==51)cardPoint=10;
    if (cardNum==52)cardPoint=10;
    
    return cardPoint;
    
 cout<<"Your card's points is "<<cardPoint<<endl;   
}