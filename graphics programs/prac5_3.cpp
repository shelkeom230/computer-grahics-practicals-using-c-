//rotation 
#include<math.h>
#include<iostream>
#include<conio.h>
#include<graphics.h>
using namespace std;
int main(){
	int gd=DETECT,gm,x1,y1,x2,y2,x4,y4;
	float angle=0,ang;
	cout<<"\nROTATION OF A LINE\n";
	cout<<"enter the first coordinate of a line: ";
	cin>>x1>>y1;
	cout<<"enter the second coordinate of a line: ";
	cin>>x2>>y2;
	
	cout<<"enter the angle: ";
	cin>>ang;
	angle=(ang*3.4)/180;
	initgraph(&gd,&gm,(char*)"");
	line(x1,y1,x2,y2);
	setcolor(RED);
	x4=x2-(((x2-x1)*cos(angle))-((y2-y1)+sin(angle)));
	y4=y2-(((x2-x1)*sin(angle))+((y2-y1)*cos(angle)));
	line(x2,y2,x4,y4);
	getch();
	closegraph();
	
}
