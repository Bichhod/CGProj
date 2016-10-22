#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void main(){

   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int x1, y1, x2, y2;
   long i;

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "D:\\BORLANDC\\BGI");

   /* read result of initialization */
   errorcode = graphresult();

   if (errorcode != grOk){  /* an error occurred */
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1); /* terminate with an error code */
   }

   printf("\nEnter coordinates of starting point: ");
   scanf("%d%d",&x1,&y1);
   printf("\nEnter coordinates of ending point: ");
   scanf("%d%d",&x2,&y2);
   for(;x1<=x2&&y1<=y2;x1++,y1++){
	    for(i=0;i<=900000;i++);
	    putpixel(x1,y1,1);
   }

   /* clean up */
   getch();
   closegraph();
}
