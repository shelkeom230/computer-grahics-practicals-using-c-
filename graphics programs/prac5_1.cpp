/*
2 dimentional transformatin
1. point translation
*/
#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
void translatePoint(int p[],int T[]){
	int gd=DETECT,gm;
	initgraph(&gd,&gm,(char*)"");
	
	cout<<"original co-ordinates: "<<p[0]<<","<<p[1]<<endl;
	putpixel(p[0],p[1],1);
	
//	calculating translated co-ordinates 
	p[0]=p[0]+T[1];
	p[1]=p[1]+T[1];
	cout<<"Translated co-ordinates: "<<p[0]<<","<<p[1];
//	draw new co-ordinates 
	putpixel(p[0],p[1],3);
	closegraph();
}
int main(){
	int p[2]={5,8};
	int T[2]={2,1};
	translatePoint(p,T);
	return 0;
}
