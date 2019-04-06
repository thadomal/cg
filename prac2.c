#include<iostream>
#include<graphics.h>
#include<conio.h>
int main()
{
    int gd = DETECT,gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    rectangle(left, top, right, bottom);
    getch();
    closegraph();

    return 0;
}
