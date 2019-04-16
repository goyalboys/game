#include<iostream>
using namespace std;
#include<conio.h>
#include<windows.h>

void snake()
{while(1)
{	cout<<"enter  \n1 for easy \n 2 for intermediate \n 3 for hard";
int t;
int h=0,f=0;
cin>>t;
	cout<<"GAME IS GOING TO START\n";
    cout<<"USE ARROW KEYS FOR PLAYING";
    Sleep(5000);
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
         } cout<<endl;
		 }
	int food=0,length=0,key,k=0,l=3,m=0,n=0,h2,h1,game=1;
char draw [15][40]={0};
while(game==1)
{
	Sleep(10/t);
	for(int i=0;i<15;i++)
	  {for(int j=0;j<40;j++)
	 {
	 if(i==0||j==0||j==39||i==14)
	  draw[i][j]='*';
	  else
	  {if(draw[i][j]=='@')
	  draw[i][j]='@';
	  else
	  draw[i][j]=' ';
	  }

	}
     }

	if(food==0)
	while(1)
	{
		   h2=rand()%15;
	    h1=rand()%40;
		if(draw[h2][h1]==' ')
	{draw[h2][h1]='@';
	food=1;
	length++;
	   break;
	   }
	   }
	   //move
	   if(kbhit())
	   {
			key=getch();
			switch(key)
			{case 72:
				{k=-1;l=0;m=0;n=0;break;}
			case 77:
					{k=0;l=1;m=0;n=0;
					break;}
			case 75:
						{k=0;l=0;m=-1;n=0;
						break;}
			case 80:
							{k=0;m=0;n=1;l=0;
							break;}

			}
		}
		 h=h+l+m;
		 f=f+k+n;
		 if(h==-1)
		 game=0;
		 if(f==-1)
		 game=0;
		 if(h==39)
		 game=0;
		 if(f==12)
		 game=0;
			draw[f+1][h+1]='o';
			if(f+1==h2&&h+1==h1)
			{food=0;
			cout<<"\a";

		}
			for(int i=0;i<15;i++)
	  {for(int j=0;j<40;j++)
	  cout<<draw[i][j];
	  	cout<<endl;
	}
	cout<<"score "<<length*10;
	system("cls");
}
cout<<"GAME OVER\n";
cout<<"score "<<length*10;

cout<<"\nto play again eneter y or n for close the game\n";
char a;
cin>>a;
if(a=='n')
break;
}}
