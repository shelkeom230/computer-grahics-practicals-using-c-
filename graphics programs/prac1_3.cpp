#include<graphics.h>
int main(){
	int gd=DETECT,gm;
	initgraph(&gd,&gm,(char*)"");
	circle(150,200,50);
	getch();
	closegraph();
	return 0;
	
}
