#include<stdio.h.>
#include<conio.h>
#include<math.h>
#include<graphics.h>
#define pi 3.14
void koch(int x1,int y1,int x2,int y2,int it);
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");

    int x1,y1,x2,y2,it;
    printf("enter first coordinates:\n");
    scanf("%d %d",&x1,&y1);
    printf("enter second coordinates:\n");
    scanf("%d %d",&x2,&y2);
    printf("enter no. of iterations");
    scanf("%d",&it);
    koch(x1,y1,x2,y2,it);

    getch();
    closegraph();
    return 0;
}
void koch(int x1,int y1,int x2,int y2,int it)
{
    float x3,y3,x4,y4;
    float angle=(60*pi)/180;
    //calculating coordinates of the middle section
    x3=(2*x1+x2)/3;
    y3=(2*y1+y2)/3;
    x4=(x1+2*x2)/3;
    y4=(y1+2*y2)/3;

    int x=x3 + (x4-x3)*cos(angle) + (y4-y3)*sin(angle);
    int y=y3 + (x4-x3)*sin(angle) + (y4-y3)*cos(angle);

    if(it>0)
    {
        koch(x1,y1,x3,y3,it-1);
        koch(x3,y3,x,y,it-1);
        koch(x,y,x4,y4,it-1);
        koch(x4,y4,x2,y2,it-1);
    }
    else
    {
        line(x1,y1,x3,y3);
        delay(500);
        line(x3,y3,x,y);
        delay(500);
        line(x,y,x4,y4);
        delay(500);
        line(x4,y4,x2,y2);
        delay(500);

    }
}
