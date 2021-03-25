# 第五周課堂作業

## 1. 老師以今天考試「除惡務盡」為例, 示範了2種寫法, 其中一種是用字串的for迴圈來印。這種字串的 for迴圈很重要 for(int i=0; line[i]!=0; i++){...} 請你把程式寫出來, 並且標示 line[i]!=0 的地方 (  0  其實就是 '\0' ) ![week05-0](https://github.com/QASSBB/2020CCE/blob/gh-pages/week05/week05-0.png?raw=true)
``` C
#include <stdio.h>
char line[20]="233233233233233233";
int main()
{
    char*p = line;
    for(int i=0;line[i]!=0;i++)
    {
        p=&line[i];
        char c=line[i];
        if(c!='2') printf("%c",c);
    }
    printf("\n");
}
```
## 2. 老師重新複習 字串的宣告: char line[10]="decline"; char line2[10]={ 'p', 'r', 'o', 'p', 'e', 'r', '\0' }; 讓大家多做練習。請練習吧! 重點是, 你有看到在字串 (字元陣列) 的後面有 '\0' 這個東西, 我們叫它「字串結尾」, 課本有畫出來過哦! ![week05-1](https://github.com/QASSBB/2020CCE/blob/gh-pages/week05/week05-1.png?raw=true)
``` C
#include <stdio.h>
int main()
{
    char line[10] = "decline";
    char line2[10]= {'p', 'r', 'o', 'p', 'e', 'r', '\0'};

    printf("%s\n", line);
    printf("%s\n", line2);

    char line3[]="majority這是好的,沒問題,要多長有多長";
    char line4[]={'m', 'a', 'j', 'o', 'r', 'i', 't' , 'y'};
    printf("%s\n",line3);

    printf("你相信嗎? 這是 line4:==%s==\n",line4);
}
```
## 3. 老師把上面的程式, 加2行新的: char line3[]="majority"; char line4[]={'m','a','j','o','r','i','t','y'} 然後就在 printf("你知道嗎, 竟然出事了===%s==\n", line4); ![week05-2](https://github.com/QASSBB/2020CCE/blob/gh-pages/week05/week05-2.png?raw=true)
``` C
#include <stdio.h>
char line[20]="233233233233233233";
int main()
{
    char*p = line;
    for(int i=0;line[i]!=0;i++)
    {
        p=&line[i];
        char c=line[i];
        if(c!='2') printf("%c",c);
    }
    printf("\n");
}
```
## 4. 老師示範 char line[5][10] = {"decline", "proper", "majority", "bullet", "shop"}; 並且教大家 「左邊」「右邊」的技巧。請在 CodeBlocks 畫出來 ![week05-3](https://github.com/QASSBB/2020CCE/blob/gh-pages/week05/week05-3.png?raw=true)
``` C
#include <stdio.h>
int main()
{
    char line[5][10]={"decline","proper","mojority","bullet","shop"};
    char *p;
    for(int i=0;i<5;i++)
    {
        p=line[i];
        printf("%s\n",line[i]);
    }
}
```
## 5. 老師教大家 int a[3][3]={ {1,2,3}, {4,5,6}, {7,8,9} }; 請試著畫出來 ![week05-4](https://github.com/QASSBB/2020CCE/blob/gh-pages/week05/week05-4.png?raw=true)
``` C
#include <stdio.h>
int a[3][3]={ {1,2,3} , {4,5,6} , {7,8,9} } ;
int main()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
```
## 6. 老師示範字串排序, 請用練習模式, 試寫出來。下週考這題 ![week05-5](https://github.com/QASSBB/2020CCE/blob/gh-pages/week05/week05-5.png?raw=true)

# 第五周實習課程式

#第一題

## 進階題：反序數字
``` C
#include <stdio.h>
int main ()
{
	int a,b=0,c;
	scanf("%d",&a);
	c=a;
	while (a!=0)
	{
			b=b*10+a%10;
			a=a/10;
	}
	printf("%d+%d=%d\n",c,b,c+b);
}
```
# 第二題

## 進階題：絕對值函數
``` C
#include <stdio.h>
int f(int n)
{
	scanf("%d",&n);
	if(n>0) n=n;
	else n=-n;
	return n;
}

int main(void)
{
	int n;
	scanf("%d",&n);
	printf("[%d]",f(n));
	return 0;
}
```
#第三題

## 基礎題：N數之和 
```C
#include <stdio.h>
int main ()
{
	int a,ans=0;
	scanf("%d",&a);
	for (int i=1 ; i<=a ; i++)
	{
		int b;
		scanf("%d",&b);
		ans+=b;
	}
	printf("%d\n",ans);
}
```
# 第四題 

## 基礎題：三數極大 
``` C
#include <stdio.h>
int main ()
{
	int a,b,c,t;
	scanf("%d%d%d",&a,&b,&c);
	if(b>a)
	{
		t=a;
		a=b;
		b=t;
	}
	if (c>a)
	{
		t=a;
		a=c;
		c=t;
	}
	if(c>b)
	{
		t=c;
		c=b;
		b=t;
	}
	printf("%d\n",a);
}
```
# 第五題

## 基礎題：計算商數 
``` C
#include <stdio.h>
int main ()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d\n",a/b);
}
```
