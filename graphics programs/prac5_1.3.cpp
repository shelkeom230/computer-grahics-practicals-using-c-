#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

void translateRectangle(int P[][2],int T[]){
	int gd=DETECT,gm;
	initgraph(&gd,&gm,(char*)"");
	setcolor(2);
	rectangle (P[0][0], P[0][1], P[1][0], P[1][1]);
  
    // calculating translated coordinates
    P[0][0] = P[0][0] + T[0];
    P[0][1] = P[0][1] + T[1];
    P[1][0] = P[1][0] + T[0];
    P[1][1] = P[1][1] + T[1];
    rectangle (P[0][0], P[0][1], P[1][0], P[1][1]);
    setcolor(3);
	getch();
    closegraph();
}
int main(){
	int P[2][2] = {75, 120, 180, 270};
    int T[] = {2, 1}; // translation factor
    translateRectangle (P, T);
    return 0;
}
