#include<iostream>
#include<math.h>
#include<cstdlib>
using namespace std;

int round(){
int pc,player;
int score = 0;
//initially the score of the player is 0
pc = (rand()%3)+1;
//generating a random number between 1-3

cout<<"enter choice : 1.rock 2.paper 3.scissors : ";
cin>>player;
//score is as follows : 1 if player wins , 0 if match draws and 1 if match win
if((player>0)&&(player<=3)){
if(player == pc){
score = 0;
}

else if(player == 1){
if(pc == 2){
score = -1;}
else if(pc == 3){
score = 1;}
}

else if(player == 2){
if(pc == 1){
score = 1;}
else if(pc == 3){
score = -1;}
}

else if(player == 3){
if(pc == 1){
score = -1;}
else if(pc == 2){
score = 1;
}
}

}

else{
cout<<"wrong choice enter again!;";}

return score;
}


int main(){

int r = round();
if(r == 1){
cout<<"you win";}
else if(r == 0){
cout<<"draw";}
else if(r == 1){
cout<<"you lose";}
return 0;}
