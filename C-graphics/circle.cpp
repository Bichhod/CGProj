#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void main(){
  int gdriver = DETECT, gmode, errorcode; /* request auto detection */
  initgraph(&gdriver, &gmode, "D:\\BorlandC\\BGI");/* initialize graphics and local variables */
  errorcode = graphresult();/* read result of initialization */
  
  if (errorcode != grOk) {/* an error occurred */
    printf("Graphics error: %s\n", grapherrormsg(errorcode));
    printf("Press any key to halt:");
    getch();
    exit(1); /* terminate with an error code */
  }
  
  setcolor(EGA_YELLOW);//color of the circle
  /* draw the circle */
  circle(250, 250, 123);//circle(x-coord,y-coord,radius)
  /* clean up */
  getch();
  closegraph();
}

/**
The above program draws a circle in output console. 
Initially, we have to include four header files namely graphics.h (for graphics support), stdlib.h (for exit function), 
stdio.h (for standard I/O), and conio.h (for getch function). 
The statement int gdriver = DETECT, gmode, errorcode; is for detecting the graphics driver automatically. 
Similarly, initgraph(&gdriver, &gmode, "D:\\BorlandC\\BGI"); is used to initialize graphics driver and graphics mode. 
The group of statements below check if any error has occurred using graphresult(); function. 
After that, we use the setcolor(EGA_YELLOW); function to set the color of the circle we are going to draw. 
The main statement here circle(250, 250, 123); is then used to draw the circle centered at (250px , 250px) with a radius of 123px. 
Finally, we wrap up the program by getch(); which prompts a key-press from the user and closegraph(); closes the graphics mode.
**/
