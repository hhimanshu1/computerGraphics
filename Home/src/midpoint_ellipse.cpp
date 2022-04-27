#include<iostream>
#include<graphics.h>
#include<dos.h>
using namespace std;

int main(){
    int rx,ry,xc,yc;
    cout<<"Enter the x radius: ";
    cin>>rx;

    cout<<"Enter the y radius: ";
    cin>>ry;

    cout<<"Enter the center: ";
    cin>>xc>>yc;

    int gd=DETECT, gm;
    initgraph(&gd, &gm," ");
    int x=0,y=ry;

    float pk1, pk2;
    // line(320,0,320,500);
    // line(0,250,700,250);
    // line(0,250,700,250);

    pk1=(rx*ry)+((rx*rx)/4)-(ry*rx*rx);
    putpixel(xc+rx,yc,10);
    putpixel(xc-rx,yc,10);
    putpixel(xc,yc+ry,10);
    putpixel(xc,yc-ry,10);
    while(2*ry*ry*x<=2*rx*rx*y){
        if(pk1<0){
            pk1=pk1+2*ry*ry*x+3*ry*ry;
            x++;
        }else{
            pk1=pk1+(2*ry*ry*x)-(2*rx*rx*y+3*ry*ry)+(2*rx*rx);
            y--;
        }
        x++;
        delay(10);
         putpixel(xc+x,yc+y,10);
    putpixel(xc+x,yc-y,10);
    putpixel(xc-x,yc+y,10);
    putpixel(xc-x,yc-y,10);

    }
    pk1= (ry*ry)*(x+0.5)*(x+0.5)+(rx*rx)*(y-1)*(y-1)-(rx*rx)*(ry*ry);
    pk2=pk1;
    while(y>0){
        
        if(pk2<0){
            pk2=pk2+(2*(ry*ry)*x)-(2*rx*rx*y)+(2*ry*ry)+(3*rx*rx);
            x++;
        }else{
            pk2=pk2-(2*rx*rx*y)+3*(rx*rx);
        }
        y--;
        delay(10);
         putpixel(xc+x,yc+y,10);
    putpixel(xc+x,yc-y,10);
    putpixel(xc-x,yc+y,10);
    putpixel(xc-x,yc-y,10);
        
    }
    getch();
    closegraph();
    return 0;
}