#include<graphics.h>
int main(){
	int gd=DETECT,gm;
	initgraph(&gd,&gm,(char*)"");
	rectangle(150,150,450,450);
	getch();
	closegraph();
	return 0;
}
