#include <graphics.h>
#include <iostream>
#include <math.h>
#include <dos.h>
using namespace std;
int main()
{
    float x, y, x1, y1, x2, y2, dx, dy, n;
    int i, gd = DETECT, gm;

    initgraph(&gd, &gm, "C:\\TC\\BGI");

    outtextxy(20,20,"Himanshu Hemant");

    outtextxy(40,40,"1915034");

     

    int x_max=getmaxx();
    int y_max=getmaxy();

    cout<<x_max<< " "<<y_max;

    line(x_max/2,0,x_max/2,y_max);
    line(0,y_max/2,x_max,y_max/2);

    cout << "Enter the value of x1 and y1 : ";
    cin >> x1 >> y1;
    cout << "Enter the value of x2 and y2: ";
    cin >> x2 >> y2;
    
    
    dx = abs(x2 - x1);
    dy = abs(y2 - y1);

    if (dx >= dy)
        n = dx;
    else
        n = dy;

    dx = dx / n;
    dy = dy / n;

    

    // x1=x1+x_max/2;
    // x2=x2+x_max/2;

    x1=x_max/2-x1;
    x2=x_max/2-x2;

   
    outtextxy(x1,y1,"(x1,y1)");
    outtextxy(x2,y2,"(x2,y2)");



    x = x1;
    y = y1;

    i = 1;
    while (i <= n)
    {
        putpixel(x, y, WHITE);
        x = x + dx;
        y = y + dy;
        i = i + 1;
        delay(100);
    }


     
    getch();
    
}