//AIM: Write a program to fill a circle using Flood Fill Algorithm.

/*
input:

Enter x and y positions for circle: 100 200
Enter radius of circle: 50

*/
#include <stdio.h>
#include <graphics.h>
#include <dos.h>
void floodFill(int x, int y, int oldcolor, int newcolor)
{
 if (getpixel(x, y) == oldcolor)
 {
 putpixel(x, y, newcolor);
 delay(10);
 floodFill(x + 1, y, oldcolor, newcolor);
 floodFill(x, y + 1, oldcolor, newcolor);
 floodFill(x - 1, y, oldcolor, newcolor);
 floodFill(x, y - 1, oldcolor, newcolor);
 }
}
int main()
{
 int gm, gd = DETECT, radius;
 int x, y;
 printf("Enter x and y positions for circle: ");
 scanf("%d%d", &x, &y);
 printf("Enter radius of circle: ");
 scanf("%d", &radius);
 initgraph(&gd, &gm, "C:\\TURBO3\\BGI");
 circle(x, y, radius);
 floodFill(x, y, 0, 15);
 delay(5000);
 closegraph();
 return 0;
}
