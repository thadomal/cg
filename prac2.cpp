#include<iostream>
#include<graphics.h>
#include<conio.h>
using namespace std;
int main()
{
    int gd = DETECT,gm ,left=100,top=100,right=200,bottom=200;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    cout<<"hi there";
    rectangle(left, top, right, bottom);
    getch();
    closegraph();

    return 0;
}
