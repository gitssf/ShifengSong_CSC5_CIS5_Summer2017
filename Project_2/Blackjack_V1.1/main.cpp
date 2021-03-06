/*
 * File:   main.cpp
 * Author: Shifeng Song
 * Created on July 25, 2017, 2:32 AM
 * Project Title:  Blackjack_V1.1
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <ctime>     //For random seed
#include <cstdlib>  // For srand
#include <fstream>  // For writing and reading file
#include <iomanip>  // For Format


using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants


//Function Prototypes
int  getANumber();           //Get random number 1-52
void getPokerDesc(int);     //Transfer card suits
int  getPoint(int);         //Transfer card points
void savePlayerScore(int); //Input data to a file
int  getPlayerScore();     //Read data from a file
double getWinRate();       //Get Player's Winning Rate 

//Execution begins here
int main(int argc, char** argv){
    //Set random seed
    srand(static_cast<unsigned int> (time(0)));

    //Declare variables
    int dealer[20], player[20];
    char choice;
    int playerPoint,dealerPoint;
    
    //Initialize some variables
    player[0]=getANumber();
    dealer[0]=getANumber();
    player[1]=getANumber();
    dealer[1]=getANumber();
    
   //Map inputs to outputs the transformed data
    cout<<"The two cards you got are";
    getPokerDesc(player[0]);
    cout<<" and";
    getPokerDesc(player[1]);
    cout<<endl;

    cout<<"The one of two cards the dealer got is";
    getPokerDesc(dealer[0]);
    cout<<endl;

    cout<<"Do you want to continue? ";
    cin>>choice;
    cin.ignore(1024,'\n');

    if(choice == 'y' || choice == 'Y') {
       player[2]=getANumber();
       cout<<"The third card you got is";
       getPokerDesc(player[2]);
       cout<<endl;
       playerPoint=getPoint(player[0])+getPoint(player[1])+getPoint(player[2]);
    }
    else{
        playerPoint=getPoint(player[0])+getPoint(player[1]);
    }

    dealerPoint=getPoint(dealer[0])+getPoint(dealer[1]);
    if(dealerPoint<=17){            //The dealer must be get third card 
        dealer[2]=getANumber();     //if his points no more than 17
        dealerPoint+=getPoint(dealer[2]);
        cout<<"The third card the dealer got is";
        getPokerDesc(dealer[2]);
        cout<<endl;
    }
    else
        cout<<"The dealer did not follow. \n";

    cout<<"The card the dealer did not show is";
    getPokerDesc(dealer[1]);
    cout<<"\n\n";
    cout<<"The point you got is ";
    cout<<playerPoint<<".\n";

    cout<<"The point the dealer got is ";
    cout<<dealerPoint<<".\n\n";

    if(playerPoint<=21&&dealerPoint>21){
          cout<<"**************\n";
          cout<<"* You win!!! *\n";
          cout<<"**************\n";
        savePlayerScore(1);
    }
    else if(playerPoint>21&&dealerPoint<=21){
          cout<<"***************\n";
          cout<<"* You lost!!! *\n";
          cout<<"***************\n";
           savePlayerScore(-1);
    }
    else if(playerPoint>21&&dealerPoint>21){
          cout<<"***************\n";
          cout<<"* You even!!! *\n";
          cout<<"***************\n";
           savePlayerScore(0);
    }
    else {
    	if(playerPoint>dealerPoint){
          cout<<"**************\n";
          cout<<"* You win!!! *\n";
          cout<<"**************\n";
         savePlayerScore(1);
      }
      else if(playerPoint<dealerPoint){
          cout<<"***************\n";
          cout<<"* You lost!!! *\n";
          cout<<"***************\n";
         savePlayerScore(-1);
      }
      else {
          cout<<"***************\n";
          cout<<"* You even!!! *\n";
          cout<<"***************\n";
         savePlayerScore(0);
      }
    }
    
    cout<<"Your final score is "<<getPlayerScore()<<".\n";
    cout<<"Your Winning Rate is "
        <<setprecision(2)<<fixed<<getWinRate()<<"%.\n";

    //Exit stage right!
    return 0;
}


/*
** get random number 1-52
** input the numbers to getNumArr
** if the function is called more than 52 times then return -1
*/
int getANumber()
{
  int ret, offset, flag, i;  
  const int maxCardNum  = 52; // The Max number of playing cards
  static int NumArray [maxCardNum]; // Avoid repeating random numbers
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
void getPokerDesc(int num){
  const char *poker_desc[] = {"A","2","3","4","5","6","7","8",
                              "9","10","Jack","Queen","King"};

  if (num>0 && num<14)
    cout<<" Club "<<poker_desc[num-1];
  else if (num>=14 && num<27)
    cout<<" Diamond "<<poker_desc[num-14];
  else if (num>=27 && num<40)
    cout<<" Heart "<<poker_desc[num-27];
  else if (num>=40 && num<=52)
    cout<<" Spade "<<poker_desc[num-40];
  else
    cout<<"ERROR!!!";
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

/* Input data to a file for the game's record
 * 
 */

void savePlayerScore(int score){
  ofstream outfile;

  outfile.open("record.dat", ios::app);
  if(!outfile) {
    cout<<"File Open ERROR."<<endl;
  } else {
    outfile << score << endl;
    outfile.close();
  }
}

//Read data of final scores from a file
int getPlayerScore(){
  ifstream infile;
  string buf;
  int score;

  infile.open("record.dat", ios::in);
  if(!infile) return 0;
  score = 0;
  while(getline(infile,buf)) {
    score += atoi(buf.c_str());
  }

  infile.close();

  return score;
}

//Get Winning Rate by calculating all of data  
double getWinRate(){
  ifstream infile;
  string buf;
  int play, win;

  infile.open("record.dat", ios::in);
  if(!infile) return 0;

  play = 0;
  win = 0;
  while(getline(infile,buf)) {
    play++;
    if (atoi(buf.c_str()) > 0) win++;
  }

  infile.close();

  if (play > 0 ) {
    return 1.0 * win / play*100;
  } else {
  	return 0;
  }
}
