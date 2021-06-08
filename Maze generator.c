#include <graphics.h>
#include <stdlib.h>
#include <conio.h>
#include <dos.h>

int main()
{
 int x,y,spacing,maxx;
 int gdriver=DETECT,gmode,errorcode;
 initgraph(&gdriver, &gmode, "C:\\TurboC3\\BGI");
 x=0;
 y=0;
 spacing=15;
 maxx=getmaxx();
 setcolor(0);
 setlinestyle(0,0,3);
 do
 {
  if(random(2)>0.5)
  {
   line(x,y,x+spacing,y+spacing);
  }
  else
  {
   line(x,y+spacing,x+spacing,y);
  }
  x=x+spacing;
  if(x>maxx)
  {
   x=0;
   y=y+spacing;
  }
  setcolor(random(15)+1);
  delay(10);
 }while(!kbhit());
 getch();
 closegraph();
 return 0;
}
