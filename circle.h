#include<graphics.h>
#include<conio.h>
#include<iostream>
#include<time.h>
using namespace std;
int h=0;
void start()
{
     POINT cursorPosition;
    int mx,my;
    while(1)
    {

		  readimagefile("1.jpg",0,0,1368,778);
        GetCursorPos(&cursorPosition);
        mx=cursorPosition.x;
        my=cursorPosition.y;
    cout<<endl;

 if((mx>=1120&&mx<=1220)&&(my>=370&&my<=442))
        {readimagefile("4.jpg",0,0,1368,778);
        delay(100);
        }
  if(mx>=1120&&mx<=1250&&my>600&&my<=650)
    {
    readimagefile("3.jpg",0,0,1368,778);
            if(GetAsyncKeyState(VK_LBUTTON))
            h=0;
        delay(100);
        break;
    }
    if(mx>=1120&&mx<=1270&&my>500&&my<=700)
    {readimagefile("2.jpg",0,0,1368,778);
            if(GetAsyncKeyState(VK_LBUTTON))
        {  outtextxy(1000,400,"use any of the key for playing");
            delay(1000);}
        }
      if(GetAsyncKeyState(VK_LBUTTON))
          {
             if((mx>=1120&&mx<=1220)&&(my>=370&&my<=442))
                		{
                		    h=1;
                        break;

                        }

    }
    }
}
void ain()
{
char f[50];

    initwindow(1366,778,"paint");
    readimagefile("images (3).jpg",0,0,1368,778);
    delay(500);

      int t=0;
      start();
    cout<<endl;
readimagefile("back.jpg",0,0,1368,778);
readimagefile("water.jpg",0,200,400,380);
int s=0;
   srand(time(NULL));
while(h)
 {  int f=0;
     if(s==5)
 s=0;
 t=0;
     s++;
readimagefile("back.jpg",400,150,800,300);
readimagefile("fire.jpg",800,100,1200,280);
if(kbhit())
    t=getch();
if(t)
{
readimagefile("waterh.jpg",400,150,800,300);
delay(500);
break;
}
else
    {
        if(s==(rand()%(5-1+1)+1))
    {readimagefile("fireh.jpg",800,100,1200,280);
    delay(150);
    while(f<200)
    {
    f++;
    readimagefile("attackh1.jpg",600-f,150,900-f,250);
    if(kbhit())
   {
    t=getch();
if(t)
{
readimagefile("attack.jpg",400,150,800,300);
break;}
  }
else
    t=0;

    }
if(t==0)
{
break;
 }
}}}
if(t==0)
{readimagefile("waterl1.jpg",0,200,400,380);
delay(50);
    readimagefile("loser.jpg",0,0,1368,778);
}
   else
readimagefile("download (4).jpg",0,0,1368,778);
        getche();

}

