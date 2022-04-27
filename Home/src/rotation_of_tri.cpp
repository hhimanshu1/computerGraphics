#include<iostream>
#include<graphics.h>
using namespace std;
#include<dos.h>

int main(){
    {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int tx,ty;
    cout<<"Enter Scaling factor: ";
    cin>>tx>>ty;
    line(10, 20, 30, 40);
    line(30, 40, 10, 60);
    line(10, 60, 10, 20);
    line(10 * tx, 20 * ty, 30 * tx, 40 * ty);
    line(30 * tx, 40 * ty, 10 * tx, 60 * ty);
    line(10 * tx, 60 * ty, 10 * tx, 20 * ty);

    delay(10000);
    closegraph();
    return 0;

}