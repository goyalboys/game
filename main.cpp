#include<iostream>
#include"insect.h"
#include"snake.h"
#include"circle.h"
using namespace std;
int main()
{
	while(1)
  {  int t;
    cout<<"which game you want to play\n";
    cout<<"snake game\n"<<"beetle game\n"<<"pokemon game\n";
    cout<<"press 1 for beetle game";
    cout<<"press 2 for snake game";
    cout<<"press 3 for pokemon game";
    cin>>t;
    if(t==1)
snake();
if(t==2)
insect();
if(t==3)
ain();
else
    cout<<"you pressed wrong key\n";
cout<<"to play again";
cout<<"\npress y or not to to play y";
char a;
cin>>a;
if(a=='y')
continue;
else
break;
}

}
