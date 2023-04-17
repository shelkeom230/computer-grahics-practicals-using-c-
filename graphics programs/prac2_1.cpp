#include<bits/stdc++.h>
using namespace std;
//function for rounding ff the pixels 
	int round(float n){
		if(n-(int)n<0.5)
			return (int)n;
		return (int)(n+1);
	}

//	Function for line generation 
	void DDALine(int x0,int y0,int x1,int y1){
//		calculate dx and dy
		int dx=x1-x0;
		int dy=y1-y0;
		
		int step;
//		if dx>dy we will take step as dx
//		else we will take step as dy to draw the complete line 
		if(abs(dx)>abs(dy))
			step=abs(dx);
		else
			step=abs(dy);
//		calculate x_incr and y_incr for each step 
		float x_incr=(float)dx/step;
		float y_incr=(float)dy/step;
//		take the initial points x and y
		float x=x0;
		float y=y0;
		
		for(int i=0;i<step;i++){
//			putpixel(round(x),round(y),WHITE);
			cout<<round(x)<<" "<<round(y)<<"\n";
			x+=x_incr;
			y+=y_incr;
//			delay(100);
		}
	}
//		driver code 
		int main(){
			int x0=200,y0=180,x1=180,y1=160;
//			function call
			DDALine(x0,y0,x1,y1);
			return 0;
		}
	
