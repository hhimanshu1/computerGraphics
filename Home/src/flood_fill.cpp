#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
using namespace std;

void floodFill(int x, int y,int newColor,int oldColor){
    if(getpixel(x,y)==oldColor){
        delay(1);
        putpixel(x,y,newColor);
        floodFill(x+1,y,newColor,oldColor);
        floodFill(x-1,y,newColor,oldColor);
        floodFill(x,y+1,newColor,oldColor);
        floodFill(x,y-1,newColor,oldColor);
        

    }
}

int main(){
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:/TURBOC3/bgi");
    rectangle(50,50,250,250);  
    floodFill(55,55,10,0);  

    getch();
    closegraph();
}