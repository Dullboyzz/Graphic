//Aim: Develop the program for the mod-point ellipse drawing algorithm.

/*
input:

Enter Co-ordinate of Centre:160 170
Enter X,Y Radius of Ellipse:30 70
*/
#include<graphics.h>
#include<stdlib.h>
#include<iostream>
#include<conio.h>
int main()
{
 int gd=DETECT,gm;
 int xc,yc,x,y;
 float p;
 long rx,ry;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 printf("Enter Co-ordinate of Centre:");
 scanf("%d%d",&xc,&yc);
 printf("Enter X,Y Radius of Ellipse:");
 scanf("%d%d",&rx,&ry);
 p=ry*ry-rx*rx*ry+rx*rx/4;
 x=0;y=ry;
 while(2.0*ry*ry*x<=2.0*rx*rx*y) {
 if(p<0) {
 x++;
 p=p+2*ry*ry*x+ry*ry;
 }
 else{
 x++;y--;
 p=p+2*ry*ry*x-2*rx*rx*y-ry*ry;
 }
 putpixel(xc+x,yc+y,RED);
 putpixel(xc+x,yc-y,RED);
 putpixel(xc-x,yc+y,RED);
 putpixel(xc-x,yc-y,RED);
 }
 p=ry*ry*(x+0.5)*(x+0.5)+rx*rx*(y-1)*(y-1)-rx*rx*ry*ry;
 while(y>0){
 if(p<=0){
 x++;y--;
 p=p+2*ry*ry*x-2*rx*rx*y+rx*rx;
 }
 else {
 y--;
 p=p-2*rx*rx*y+rx*rx;
 }
 putpixel(xc+x,yc+y,RED);
 putpixel(xc+x,yc-y,RED);
 putpixel(xc-x,yc+y,RED);
putpixel(xc-x,yc-y,RED);
 }
 getch();
 closegraph();
}
