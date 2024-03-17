/*
Aim: Study and enlist the basic functions used for graphics in C language

//Arc Function in C:

#include<graphics.h>
#include<conio.h>
int main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC\\BGI");
arc(100,100,0,135,50);
getch();
closegraph();
}

//Drawpoly Function in C:

#include<graphics.h>
#include<conio.h>
int main(){
int gd=DETECT,gm,points[]={320,150,420,300,250,300,320,150};
initgraph(&gd,&gm,"C:\\TURBOC\\BGI");
drawpoly(4,points);
getch();
closegraph();
}

//Circle Function in C:

#include<graphics.h>
#include<conio.h>
int main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC\\BGI");
circle(100,100,50);
getch();
closegraph();
}

//Cleardevice Function in C:

#include<graphics.h>
#include<conio.h>
int main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC\\BGI");
outtext("press any key to clear screen");
getch();
cleardevice();
outtext("press any key to exit");
getch();
closegraph();
}

//Floodfill Function in C:

#include<graphics.h>
#include<conio.h>
int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC\\BGI");
setcolor(RED);
circle(100,100,50);
floodfill(100,100,RED);
getch();
closegraph();
}

//Setcolor Function in C:

#include<graphics.h>
#include<conio.h>
int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC\\BGI");
circle(100,100,50);
setcolor(RED);
circle(200,200,50);
getch();
closegraph();
}

*/
