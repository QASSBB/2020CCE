# 第四周課堂作業

## 1. 請跟著老師練習: struct DATA { float x, y, z; }; 結構的宣告、定義 ![week04-1](https://github.com/QASSBB/2020CCE/blob/gh-pages/week04/week04-1.png?raw=true)
``` C
  
#include <stdio.h>
struct DATA {
    float x,y,z;
};
int main ()
{

}
```
## 2. 請跟著老師練習: 結構的使用, 把變數的 x, y, z 用小數點拿出來用 ![week04-2](https://github.com/QASSBB/2020CCE/blob/gh-pages/week04/week04-2.png?raw=true)
``` C
  
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
```
## 3. 請跟著老師練習: 很多結構的陣列, 看如何使用 ![week04-3](https://github.com/QASSBB/2020CCE/blob/gh-pages/week04/week04-3.png?raw=true)
``` C
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
```
## 4. 請跟著老師練習: 觀察(結構的) global 變數 vs. local 變數 ![week04-4](https://github.com/QASSBB/2020CCE/blob/gh-pages/week04/week04-4.png?raw=true)
``` C
#include <stdio.h>
struct DATA {
    float x,y,z;
}a,b,c;
struct DATA points[5];

int main ()
{
    struct DATA d,e,f;
    for (int i=0 ; i<5 ; i++)
    {
        points[i].x=i*10;
        points[i].y=20;
        points[i].z=0;
        printf("%f %f %f\n",points[i].x,points[i].y,points[i].z);
    }
}
```
## 5. 請跟著老師練習: (結構的)宣告與初始值 (initial value) ![week04-5](https://github.com/QASSBB/2020CCE/blob/gh-pages/week04/week04-5.png?raw=true)
``` C
  
#include <stdio.h>
struct DATA{
    float x,y,z;
}a,b;
struct DATA c,d;
int main ()
{
    struct DATA e;
    struct DATA f={1,2,3};

    printf("%f %f %f\n",a.x,a.y,a.z);
    printf("%f %f %f\n",b.x,b.y,b.z);
    printf("%f %f %f\n",c.x,c.y,c.z);
    printf("%f %f %f\n",d.x,d.y,d.z);
    printf("%f %f %f\n",e.x,e.y,e.z);
    printf("%f %f %f\n",f.x,f.y,f.z);
}
```
