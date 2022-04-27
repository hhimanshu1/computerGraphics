#include<iostream>
#include<graphics.h>
using namespace std;


int main(){
    int i, gd = DETECT, gm;

    initgraph(&gd, &gm, "C:\\TC\\BGI");
    int xc,yc,radius;
    cin>>xc>>yc>>radius;
    int x,y;
    x=0;y=radius;
    int p=1-radius;
    putpixel(xc,yc+radius,WHITE);
    putpixel(xc,yc-radius,WHITE);
    putpixel(xc+radius,yc,WHITE);
    putpixel(xc-radius,yc,WHITE);
    
    while(x<=y){
        if(p<0){
            p=p+2*x+3;
        }
        else{
            p=p+2*(x-y)+5;
            y--;
        }
        x++;
        putpixel(xc+x,yc+y,WHITE);
        putpixel(xc+x,yc-y,WHITE);
        putpixel(xc-x,yc+y,WHITE);
        putpixel(xc-x,yc-y,WHITE);
        putpixel(xc+y,yc+x,WHITE);
        putpixel(xc+y,yc-x,WHITE);
        putpixel(xc-y,yc+x,WHITE);
        putpixel(xc-y,yc-x,WHITE);
    }

   
    getch();

}