#include <stdio.h>
struct DATA {    ///宣告
    float x,y,z; ///定義裡面有
}point1 ;
struct DATA points[5];
///point1 是變數的像DATA
///DATAA裡面有x,y,z;
int main ()
{
    ///int b;
    ///int a[5];
    for (int i=0 ; i<5 ; i++)
    {
        points[i].x=i*10;///使用()裡面的值
        points[i].y=20;///使用()裡面的值
        points[i].z=0;///使用()裡面的值
        printf("%f %f %f\n",points[i].x,points[i].y,points[i].z);
    }
}
