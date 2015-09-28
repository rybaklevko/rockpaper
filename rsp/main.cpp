#include <iostream>
#include <string>
#include<time.h>
#include <random>
using namespace std;
void main(){
bool win=false;
int x,y;
while(win==false){
    std::string s1="";
        std::string s2="";
cout<<"Enter Rock, Scissors or Paper:";
cin>>s1;
if(s1=="Rock")
    x=0;
else if(s1=="Scissors")
    x=1;
else x=2;
srand(time(0));
y=rand()%3;
if(y==0)
    s2="Rock";
else if(y==1) s2="Scissors";
else s2="Paper";
cout<<"s1="<<s1<<endl;
cout<<"s2="<<s2<<endl;
if((x-y==-1)||(x-y==2)){
    cout<<"You win!"<<endl;
    win=true;}
else if((x-y==1)||(x-y==-2)){
    cout<<"Looser"<<endl;
    win=true;}
else cout<<"draw"<<endl;
}
system("pause");
}
