//breshanham midpoint algorithm 
#include<graphics.h>
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	float d;
	int x,y,r,x1,y1,gd=0,gm;
	cout<<"enter x1 co-ordiante: ";
	cin>>x1;
	cout<<"enter y1 co-ordinate: ";
	cin>>y1;
	cout<<"enter radius: ";
	cin>>r;
	initgraph(&gd,&gm,(char*)"");
	x=0;
	y=r;
	d=1.25-r;
	do{
		 putpixel(y1+x,x1+y,15); 
        putpixel(x1+y,y1+x,RED); 
        putpixel(x1+y,y1-x,GREEN); 
        putpixel(y1+x,x1-y,YELLOW); 
        putpixel(y1-x,x1-y,15); 
        putpixel(x1-y,y1-x,RED); 
        putpixel(x1-y,y1+x,GREEN); 
        putpixel(y1-x,x1+y,YELLOW);
		if(d<=0){
			x++;
			y=y;
			d=d+2*x+1;
		}else{
			x++;
			y=y-1;
			d=d+2*(x-y)+1;
		}
		}while(x<y);
		delay(7000);
		return 0;
	}	

