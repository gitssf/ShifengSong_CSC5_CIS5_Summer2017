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
int getANumber();    //Get random number 1-52
void getPokerDesc(int);//Transfer card suits
int getPoint(int); //Transfer card points;
//Execution begins here
int main(int argc, char** argv) {
    //Set random seed
    srand(static_cast<unsigned int> (time(0)));
    //Declare variables    
    int dealer[20], player[20];
    char choice;
    
    //Input data
    player[0]=getANumber();
    dealer[0]=getANumber();
    player[1]=getANumber();
    dealer[1]=getANumber();
     
    cout<<"The cards you got are";
    getPokerDesc(player[0]);
    cout<<" and";
    getPokerDesc(player[1]);
    cout<<endl;
    cout<<"The card dealer got is";
    getPokerDesc(dealer[0]);
    cout<<endl;
    cout<<"Do you want to continue?";
    cin>>choice;
    cin.ignore(1024,'\n');

    if(choice == 'y' || choice == 'Y') {
       player[2]=getANumber();
       cout<<"The card you got is";
       getPokerDesc(player[2]);
  }
   
    if(getPoint(dealer[0])+getPoint(dealer[1])>15){
        cout<<"The point dealer got is ";
        cout<<getPoint(dealer[0])+getPoint(dealer[1])<<".\n";
    }
    else {
        cout<<"The point dealer got is ";
        cout<<getPoint(dealer[0])+getPoint(dealer[1])+getPoint(dealer[2])<<".\n";
    }
            
     cout<<"The point dealer got is ";
     cout<<getPoint(player[0])+getPoint(player[1])+getPoint(player[2])<<".\n";
     
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
int getANumber(){
  int ret, offset, flag, i;
  
  offset = maxCardNum;
  for (i=0; i<maxCardNum; i++) {
    if (0 == NumArray[i]) {
      offset = i;
      break;
    }
  }

  if (offset == maxCardNum) return -1;

  while (1) {
    ret = rand()%maxCardNum + 1;

    flag = 0;
    for (i=0; i<offset; i++) {
      if (ret == NumArray[i]) {
        flag = 1;
        break;
      }
    }

    if (0 == flag) break;
  }

  NumArray[offset] = ret;

  return ret;
}

/*
** Return card suits
**  1-13 Club A、2、3...10、J、Q、K
** 14-26 Diamond A、2、3...10、J、Q、K
** 27-39 Heart A、2、3...10、J、Q、K
** 40-52 Spade A、2、3...10、J、Q、K
*/
void getPokerDesc(int num)
{
  const char *poker_desc[] = {"A","2","3","4","5","6","7","8","9","10","Jack","Queen","King"};

  if (num>0 && num<14)
    cout<<" Club "<<poker_desc[num-1];
  else if (num>=14 && num<27)
    cout<<" Diamond "<<poker_desc[num-14];
  else if (num>=27 && num<40)
    cout<<" Heart "<<poker_desc[num-27];
  else if (num>=40 && num<=52)
    cout<<" Spade "<<poker_desc[num-40]<<endl;
  else
    cout<<"ERROR!";
}



/*
** Return card points
**  1-13 Club A、2、3...10、J、Q、K
** 14-26 Diamond A、2、3...10、J、Q、K
** 27-39 Heart A、2、3...10、J、Q、K
** 40-52 Spade A、2、3...10、J、Q、K
*/
int getPoint(int num){
  if (num>0 && num<14) {
    if (num>10)
      return 10;
    else
     return num;
  } 
  else if (num>=14 && num<27) {
    if (num>23)
      return 10;
    else
     return num-13;
  } else if (num>=27 && num<40) {
    if (num>36)
      return 10;
    else
     return num-26;
  } else if (num>=40 && num<=52) {
    if (num>49)
      return 10;
    else
     return num-39;
  } else {
    return 0;
  }
}


