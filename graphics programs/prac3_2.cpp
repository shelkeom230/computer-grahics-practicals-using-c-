//breshanham circle drawing algorithm
#include<graphics.h>
#include<iostream>
using namespace std;
int main(){
	float d;
	int x,y,x1,y1,r,gd=0,gm;
	cout<<"enter x1 co-ordinate: ";
	cin>>x1;
	cout<<"enter y1 co-ordianate: ";
	cin>>y1;
	cout<<"enter radius: ";
	cin>>r;
	initgraph(&gd,&gm,(char*)"");
	x=0;
	y=r;
	d=(3-2)*r;
	do
	{
		putpixel(y1+x,x1+y,15);
		putpixel(x1+y,y1+x,15); 
        putpixel(x1+y,y1-x,15); 
        putpixel(y1+x,x1-y,15); 
        putpixel(y1-x,x1-y,15); 
        putpixel(x1-y,y1-x,15); 
        putpixel(x1-y,y1+x,15); 
        putpixel(y1-x,x1+y,15); 
        if(d<=0){
        	d=d+(4*x)+6;
		}else{
			d=d+4*(x-y)+10;
			y=y-1;
		}
		x=x+1;
	}while(x<y);
	delay(7000);
	return 0;
	
}
