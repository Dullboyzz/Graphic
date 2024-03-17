/*

Aim: Draw the following basic shapes in the centre of the screen: i. Circle ii. Rectangle iii.
Square iv. Concentric Circles v. Ellipse vi. Line

//Circle in Centre of the Screen:

#include<graphics.h>
#include<conio.h>
int main()
{
int gd=DETECT,gm;
int x,y,radius=80;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
x=getmaxx()/2;
y=getmaxy()/2;
outtextxy(x-90,110,"Circle Using Graphics in C");
circle(x,y,radius);
getch();
closegraph();
}

//Rectangle in Centre of the Screen:

#include<stdio.h>
#include <graphics.h>
#include<conio.h>
int main() {
int gd = DETECT,gm;
int x,y;
initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
outtextxy(160,110, "BASIC SHAPE AT THE CENTER OF SCREEN- RECTANGLE");
rectangle(170,420,500,170);
getch();
closegraph();
return 0;
}

//Concentric Circle in Centre of the Screen:

#include<stdio.h>
#include <graphics.h>
#include<conio.h>
int main() {
int gd = DETECT,gm,color=1;
int x,y,i;
initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
x = getmaxx()/2;
y = getmaxy()/2;
outtextxy(160,20, "BASIC SHAPE AT THE CENTER OF SCREEN-CIRCLE");
for(i=20;i<=200;i+=20) {
setcolor(color++);
circle(x,y,i); }
getch();
closegraph();
return 0;
}

//Ellipse Circle in Centre of the Screen:
	
#include<graphics.h>
#include<conio.h>
int main()
{
int gd=DETECT,gm;
int x,y;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
x=getmaxx()/2;
y=getmaxy()/2;
outtextxy(x-100,110,"ELLIPSE Using Graphics in C");
ellipse(x,y,0,360,120,60);
getch();
closegraph();
}

//Line in Centre of the Screen:
	
#include<stdio.h>
#include <graphics.h>
#include<conio.h>
int main() {
int gd=DETECT,gm;
int x,y;
initgraph(&gd,&gm, "C:\\TURBOC3\\BGI");
x= getmaxx()/2;
y = getmaxy()/2;
outtextxy(160,150, "BASIC SHAPE AT THE CENTER OF SCREEN-LINE");
line(100,250,500,250);
getch();
closegraph();
return 0;
}

//Square in Centre of the Screen:
	
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main()
{
int gd = DETECT,gm;
int x,y;
initgraph(&gd, & gm, "C:\\TURBOC3\\BGI ");
outtextxy (120,150, "BASIC SHAPE AT THE CENTER OF SCREEN-SQUARE");
rectangle(180,180,380,340);
getch();
closegraph();
return 0;
}

*/
