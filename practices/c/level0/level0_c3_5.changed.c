#include <stdio.h>
void main()
{
    //输入两个矩形的左上角和右下角的点的坐标（x1,y1)(x2,y2)(x3,y3)(x4,y4)
    float x1,y1,x2,y2;
    float x3,y3,x4,y4;
    scanf("%f%f%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
    if((x1<x3&& x3<x2&& x4>x2)||(x1>x3&& x1<x4&& x2>x4)){
        if((y1>y3&& y1<y4&& y2>y4)||(y3>y1&& y3<y2&& y4>y2)){
            printf("这两个矩形重叠");
        }
        else{
            printf("这两个矩形不重叠");
        }
    }
    else{
        printf("这两个矩形不重叠");
    }
}

