//AIM: Divide your screen into four region, draw circle, rectangle, ellipse and half ellipse in each region with appropriate message.

#include<graphics.h>
#include<conio.h>

int main()
{
	int gd = DETECT,gm;
	int xmax,ymax;
	initgraph(&gd, &gm, "c:\\turboc3\\bgi");
	setcolor(getmaxcolor());
	xmax = getmaxx();
	ymax = getmaxy();
	line(xmax/2, 0, xmax/2, ymax);
	line(0, ymax/2, xmax, ymax/2);
	circle(120, 120, 100);
		outtextxy(120,120, "Circle");
	rectangle(10, 250, 280, 400);
		outtextxy(150, 300, "Rectangle");
	arc(500, 150, 50, 140, 100);
		outtextxy(500, 150, "Half Ellipse");
	ellipse(500, 300, 0, 360, 100, 50);
		outtextxy(500, 300, "Ellipse");
	getch();
	closegraph();

}
