//Breshanham line drawing algorithm 
/*
1. line is drawn from left to right
2. x1<x2 and y1<y2
3. slope of the line is between 0 and 1.
we draw a line from lower left to upper right
*/
//This program only works if the slope is less than 1
#include<bits/stdc++.h>
using namespace std;
//	function fr line generation 
	void bresenham(int x1,int y1,int x2,int y2){
		int m_new=2*(y2-y1);
		int slope_error_new=m_new-(x2-x1);
		for(int x=x1,y=y1;x<=x2;x++){
			cout<<"("<<x<<","<<y<<")\n";
			
//			Add slope to increment angle formed 
		slope_error_new+=m_new;
		
//		slope error reached limit, time t increment y and update slope error.
		if(slope_error_new>=0){
			y++;
			slope_error_new-=2*(x2-x1);
			
		}
		}
	}
	int main(){
		int x1=3,y1=2,x2=15,y2=5;
//		functin call 
		bresenham(x1,y1,x2,y2);
		return 0;
	}

