//Aim: Develop the program for the mid-point circle drawing algorithm.

/*
input:

Enter Radius of Circle:50
Enter Co=ordinate of Circle:100 200
*/

#include<iostream>
#include<graphics.h>
#include<conio.h>
void drawcircle(int x0,int y0,int radius)
{
 int x=radius;
 int y=0;
 int err=0;
 while(x>=y)
 {
 putpixel(x0+x,y0+y,7);
 putpixel(x0+y,y0+x,7);
 putpixel(x0-y,y0+x,7);
 putpixel(x0-x,y0+y,7);
 putpixel(x0-x,y0-y,7);
 putpixel(x0-y,y0-x,7);
 putpixel(x0+y,y0-x,7);
 putpixel(x0+x,y0-y,7);
 if(err<=0)
 {
 y+=1;
 err+=2*y+1;
 }
 if(err>=0)
 {
 x-=1;
 err-=2*x+1;
 }
 }
}
int main()
{
 int gddriver=DETECT,gmode,error,x,y,r;
 initgraph(&gddriver,&gmode,"C:\\TURBOC3\\BGI");
 printf("Enter Radius of Circle:");
 scanf("%d",&r);
 printf("Enter Co=ordinate of Circle:");
 scanf("%d%d",&x,&y);
 drawcircle(x,y,r);
 getch();
 return 0;
}
