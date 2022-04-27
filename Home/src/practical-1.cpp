#include<iostream>
#include<conio.h>
#include<graphics.h>
 

int main(){
    int gd=DETECT,gm;
    char data[] = "C:\\MinGW\\lib\\libbgi.a";
    initgraph(&gd,&gm,data);
    outtextxy(20,20,"Himanshu Hemant");
    outtextxy(40,40,"1915034");
    int x=getmaxx();
    int y=getmaxy();
    putpixel(x/2,y/2,WHITE);
    getch();
    closegraph();
    return 0;
}