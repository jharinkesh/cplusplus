#include<iostream.h>
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{


   int gdriver = EGA, gmode = EGAHI, errorcode;
   int color, maxcolor, x, y;
   char msg[80];


   initgraph(&gdriver, &gmode, "");


   errorcode = graphresult();
   if (errorcode != grOk)
   {
     // printf("Graphics error: %s\n", grapherrormsg(errorcode));
     cout<<grapherrormsg(errorcode);
     cout<<"Press any key to halt";
     // printf("Press any key to halt:");
      getch();
      exit(1);
   }


   maxcolor = getmaxcolor();


   settextjustify(CENTER_TEXT, CENTER_TEXT);
   x = getmaxx() / 2;
   y = getmaxy() / 2;


   for (color=1; color<=maxcolor; color++)
   {

      cleardevice();


      setcolor(color);

       cout<<msg<<color;
     // sprintf(msg, "Color: %d", color);
      outtextxy(x, y, msg);
      getch();
   }

   /* clean up */
   closegraph();
   return 0;
}

