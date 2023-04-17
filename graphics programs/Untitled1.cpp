#include<graphics.h>
int main(){
	int gd=DETECT,gm;
	int x=250,y=250;
	int start_angle=0;
	int end_angle=360;
	int x_rad=200;
	int y_rad=156;
	initgraph(&gd,&gm,(char*)"");
	ellipse(x,y,start_angle,end_angle,x_rad,y_rad);
	getch();
	closegraph();
	return 0;
}
