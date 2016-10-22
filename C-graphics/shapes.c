#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void main(){
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "D:\\BorlandC\\BGI");

   /* read result of initialization */
   errorcode = graphresult();
   if (errorcode != grOk) {/* an error occurred */
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1); /* terminate with an error code */
   }
   setcolor(EGA_YELLOW);

   /* draw the circle */
   circle(250, 250, 100);//circle(x-coord,y-coord,radius)
   line(20,30,300,30);//line(x1,y1,x2,y2)
   rectangle(350,350,500,400);//rectangle(int left, int top, int right, int bottom);
   rectangle(80,80,150,150);//square
   getch();
   closegraph(); //close the graphics mode
}

/**
The above program draws a circle, a line, a square and a rectangle in output console without overlap.  
We use the setcolor(EGA_YELLOW); function to set the color of the shape we are going to draw. 
The statement circle(250, 250, 120); is then used to draw the circle centered at (250px , 250px) with a radius of 120px.
  
Simialrly, line(20,30,300,30); is used to draw a line of form line(x1,y1,x2,y2) where (x1,y1) and (x2,y2) are the coordinates (in pixels)
of start and end point of the line. We use rectangle(350,350,500,400); to draw a rectangle in form 
rectangle(int left, int top, int right, int bottom), where the coordinates of top-left end of the rectangle is (left, left) and bottom-right end is (right, bottom). 
To draw a square we use symmetrical coordinates in rectangle statement as rectangle(80,80,150,150).

Finally, we wrap up the program by getch(); which prompts a key-press from the user and  closegraph(); closes the graphics mode.

**/
