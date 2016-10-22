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
