#include<iostream>
#include<windows.h>
#include<conio.h>
#include<time.h>
#include<dos.h>
using namespace std;
void anm(int &ct,int key)
{
for(int i=0;i<=11;i++)
{for(int j=0;j<75&&i<=2;j++)
cout<<" ";
if(i>2&&i<=5)
cout<<"    ";
for(int j=0;j<i-2&&i>2&&i<=5;j++)
cout<<"*";
for(int k=0;k<5-i&&i>2&&i<=5;k++)
cout<<" ";

for(int j=0;j<7&&i>5&&i<8;j++)
cout<<"*";
for(int j=0;j<3&&i>=8;j++)
cout<<" ";
if(kbhit())
    Sleep(10);
if(!kbhit())
{
 if(i>=8&&i<=10)
      if(ct%2==0)
        { if(i%2==0)
            cout<<" *";
         else
            cout<<"* ";
		}
    else
    {if(i%2==0)
          cout<<"* ";
    else
          cout<<" * ";
	}
}
if(i>=8&&i<=10)
    {
    for(int j=0;j<38-ct;j++)
    cout<<" ";
    cout<<"##";
    }
cout<<endl;
if(i==11)
    for(int j=0;j<75;j++)
    cout<<"_";
}
}

void man()
{


    int ct=0,score=0;
    int key;
    cout<<"GAME IS GOING TO START\n";
    cout<<"PRESS up FOR JUMP";
    Sleep(1000);
    system("cls");

    for(int i=0;i<25;i++)
       {
            for(int j=0;j<75;j++)
          {
           if(i==20&&j==35)
            cout<<"loading..";
           if(i==24)
             {
               cout<<"x";
                Sleep(5);
             }
         }
       cout<<endl;
      }

      while(1)
      {
          key=0;
       cout<<" score :"<<10*score;
        if(kbhit())
        {
            key=getch();
            if(key==72)
            {
               if(ct==37||ct==36||ct==35||ct==34)
                 {
                   score++;
                  ct=0;
                  continue;
                 }
              if(ct==38)
               {
                cout<<"you  lose the game"<<endl;
                 break;
               }
            }
        }
    if(ct==38)
        {
           cout<<"you lose the game"<<endl;
        break;
        }
     ct++;
     if(score<100)
    anm(ct,key);

    system("cls");
   }

   system("cls");
   cout<<"game over\n";
  cout<<"your score is  "<<10*score;
  getch();
}
/*int main()
{

    man();
}*/
