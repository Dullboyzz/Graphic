//AIM: Develop a simple text screen saver using graphics functions.
#include<conio.h>
#include<iostream>
#include<graphics.h>
int main()
{
 int gd=DETECT,gm,maxx,maxy;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 maxx=getmaxx()/2;
 maxy=getmaxy()/2;
 while(!kbhit())
 {
 for(int i=50;i<maxy;i++)
 {
 cleardevice();
 settextstyle(3,0,5);
 outtextxy(maxx/2,i,"Graphics C");
 delay(100);
 }
 }
 getch();
}
