#include<iostream>
#include<conio.h>
#include<graphics.h>
 

int main(){
    int gd=DETECT,gm;
    char data[] = "C:\\MinGW\\lib\\libbgi.a";
    initgraph(&gd,&gm,data);
    outtextxy(20,20,"Himanshu Hemant");
    putpixel(125,366,RED);
    getch();
    closegraph();
    return 0;
}