#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio>.h
int main(){
	int gd,gm;
	int poly[10];
	gd=DETECT;
	initgraph(&gd,&gm,(char*)"");
	
	poly[0] = 20; /* 1st vertex */
poly[1] = 100;

	poly[2] = 120;
	poly[3] = 140; /* 2nd vertex */

	poly[4] = 240;
	poly[5] = 260; /* 3rd vertex */

	poly[6] = 120;
	poly[7] = 320; /* 4th vertex */

	poly[8] = poly[0];
	poly[9] = poly[1]; /* The polygon does not
close automatically, so we close it */

	setcolor(getmaxcolor());
	setfillstyle(SOLID_FILL,RED);
	filpoly(5,poly);
	getch();

	closegraph();
	return 0;
	
}
