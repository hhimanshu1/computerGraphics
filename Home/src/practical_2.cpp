#include<iostream>
#include<conio.h>
#include<graphics.h>
int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
outtextxy(20,20,"Himanshu Hemant, CRN: 1915034 , CSE-A2");
rectangle(100,200,200,300);
rectangle(150,250,250,350);
line(100,200,150,250);
line(200,300,250,350);
line(100,300,150,350);
line(200,200,250,250);
getch();
closegraph();
return 0;
}
