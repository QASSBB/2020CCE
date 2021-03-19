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

# 第四周實習課程式

# 第一題

## 進階題：除惡務盡 
``` C
#include <stdio.h>
int main ()
{
	char a[100];
	for (int i=0 ; i<=100 ; i++)
	{	
		while (scanf("%c",a)!=EOF)
		{
			if(a[i]!='2') printf("%c",a[i]);
		}			 
	}
} 
```
# 第二題

## 進階題：擲骰統計

``` C
#include <stdio.h>
int main ()
{
	char a[1000];
	int b=0,c=0,d=0,e=0,f=0,g=0;
	for (int i=0 ; i<=100 ;i++)
	{
		while (scanf("%c",&a)!=EOF)	
		if(a[i]=='1') b++;
		else if(a[i]=='2') c++;
		else if(a[i]=='3') d++;
		else if(a[i]=='4') e++;
		else if(a[i]=='5') f++;
		else if(a[i]=='6') g++;	
	}
	printf("1:%d\n",b);
	printf("2:%d\n",c);
	printf("3:%d\n",d);
	printf("4:%d\n",e);
	printf("5:%d\n",f);
	printf("6:%d\n",g);
}
```
# 第三題

## 進階題：函數找整數的最大數字

```C
#include <stdio.h>
int max_digit(int a)
{
	int ans=0;
	while (a!=0)
	{	
		if(a%10>=ans) ans=a%10;
		a/=10;
	}
	return ans;
} 
int main(void){
  int n;
  scanf("%d", &n);
  printf("[%d]", max_digit(n));
  return 0;
}
```
# 第四題

## 進階題：星星等腰三角 

```C
#include <stdio.h>
int main ()
{
	int a;
	scanf("%d",&a);
	for (int i=1 ; i<=a ; i++)
	{
		for (int k=a-i ; k>=1 ;k--)
		{
			printf(" ");
		}
		for(int k=2*i-1 ; k>=1 ; k--)
		{
			printf("*");
		}
		printf("\n");
	}
}
```
# 第五題

## 基礎題：分開整數的每個數字

``` C
#include <stdio.h>
int main ()
{
	int a;
	scanf("%d",&a);
	printf("%d   ",a/10000);
	printf("%d   ",a%10000/1000);
	printf("%d   ",a%10000%1000/100);
	printf("%d   ",a%10000%1000%100/10);
	printf("%d",a%10000%1000%100%10);
}
```
# 第六題

## 基礎題：字元判別

``` C
#include <stdio.h>
int main ()
{
	char a;
	scanf("%c",&a);
	if(a>=48 && a<=57) printf("D");
	else if(a>=65 && a<=90) printf("U");
	else if(a>=97 && a<=122) printf("L");
	else printf("O");
}
```
# 第七題

## 基礎題：數字之首 

``` C
#include <stdio.h>
int main ()
{
	int a;
	scanf("%d",&a);
	if (a>=1000) printf("%d",a/1000);
	else if(a>=100) printf("%d",a/100);
	else if(a>=10) printf("%d",a/10);
	else if (a>=0) printf("%d",a);
} 
```
# 第八題

## 基礎題：輸出從0到N的偶數

``` C
#include <stdio.h>
int main ()
{
	int n;
	scanf("%d",&n);
	for (int i=1 ; i<=n ; i++)
	{
		if (i%2==0)printf("%d ",i);
	}
}
```
