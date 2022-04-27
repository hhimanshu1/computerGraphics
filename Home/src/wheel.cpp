#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
using namespace std;
int u=1;
void dda(int x1, int y1, int x2, int y2) {
  int s, dx, dy, m;
  float xi, yi, x, y;
  dx = x2 - x1;
  dy = y2 - y1;
  if (abs(dx) > abs(dy))
    s = abs(dx); else
    s = abs(dy);
  xi = dx / (float) s;
  yi = dy / (float) s;
  x = x1;
  y = y1;
  putpixel(x1 + 0.5, y1 + 0.5, 15);
  for (m = 0; m < s; m++) {
    x += xi;
    y += yi;
    putpixel(x + 0.5, y + 0.5, 15);
  }
}
int main(){

    int g=DETECT,gmode;
    initgraph(&g,&gmode,"C://TURBOC3//BGI");
	outtextxy(20,20,"Himanshu Hemant");
    outtextxy(40,40,"1915034");

    int r;
    cout<<"Enter Radius \n";
    cin>>r;

    int x=0,y=r;
    int p=1-r;
    int xc=50,yc=200;
    while(xc<750)
    {  cleardevice();
       x=0;y=r;p=1-r;
      while(x<y){

      if(p<=0){
 p=p+2*x+3;
      }else{
 p=p+2*(x-y)+5;
 y--;
      }
      x++;
      putpixel(xc+x,yc+y,10);
      putpixel(xc+y,yc+x,10);
      putpixel(xc+x,yc-y,10);
      putpixel(xc-y,yc+x,10);
      putpixel(xc-x,yc-y,10);
      putpixel(xc+y,yc-x,10);
      putpixel(xc-x,yc+y,10);
      putpixel(xc-y,yc-x,10);
	  outtextxy(20,20,"Himanshu Hemant");
      outtextxy(40,40,"1915034");


      if(u%20==0){
      dda(xc-x,yc+y,xc+x,yc-y);
      dda(xc+x,yc+y,xc-x,yc-y);
      dda(xc+y,yc+x,xc-y,yc-x);
      dda(xc-y,yc+x,xc+y,yc-x);
    }u++;
  }
  xc=xc+5;
  delay(90);
  }
getch();
}