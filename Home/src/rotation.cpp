#include<stdio.h>
#include<graphics.h>
#include<math.h>

#define PI acos(-1)

int main()
{
    int gd=0,gm,x1,y1,x2,y2;
    double s,c, angle;
    initgraph(&gd, &gm, "");

    printf("Enter coordinates of line: ");
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    cleardevice();

    line(x1,y1,x2,y2);
    //getch();


    printf("Enter rotation angle: ");
    scanf("%lf", &angle);

    c = cos(angle * PI /180);
    s = sin(angle * PI /180);

    x1 = floor(x1 * c + y1 * s);
    y1 = floor(-x1 * s + y1 * c);

    x2 = floor(x2 * c + y2 * s);
    y2 = floor(-x2 * s + y2 * c);

    printf("%d %d %d %d", x1, y1, x2, y2);
    cleardevice();
    line(x1, y1,x2, y2);

    getch();
    closegraph();
    return 0;
}