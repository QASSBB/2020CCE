#include <stdio.h>
struct DATA {    ///宣告
    float x,y,z; ///定義裡面有
}point1 ;
///point1 是變數的像DATA
///DATAA裡面有x,y,z;
int main ()
{
    point1.x=3;///使用()裡面的值
    point2.y=5;///使用()裡面的值
    point3.z=7;///使用()裡面的值
    printf("%f %f %f\n",point1.x,point2.y,point3.z);
}
