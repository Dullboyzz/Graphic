//B Draw a co-ordinate axis at the center of the screen.

#include <graphics.h>
#include <conio.h>
main()
{
int gd=DETECT,gm;
int midx,midy;
initgraph(&gd,&gm, "C:\\TURBOC3\\BGI");
midx=getmaxx()/2;
midy=getmaxy()/2;
line(1,midy,640,midy);
line(midx,1,midx,640);
getch();
closegraph();
return 0;
}
