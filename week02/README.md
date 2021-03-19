# 第二週課堂作業

## 1. 試著使用指標 *p , 把變數n1 的值改掉   ![week02-1](https://user-images.githubusercontent.com/79627981/109965859-80ec4b80-7d2a-11eb-83f0-ef681869d366.png)
## 2. 試著使用指標 *p2 , 把變數n3 的值改掉![week02-2](https://user-images.githubusercontent.com/79627981/109965838-792ca700-7d2a-11eb-8261-6f2ac124f3f7.png)
## 3. 試著先 p2=p1, 然後 *p2=400, 再印出來。請用小畫家, 畫一下它們的關係![week02-3](https://user-images.githubusercontent.com/79627981/109965663-3c60b000-7d2a-11eb-9d31-2f9f0cc8d768.png)
## 4. 現在改用陣列 int n[3]={10, 20, 30}, 再用指標,去改裡面的值![week02-4](https://user-images.githubusercontent.com/79627981/109965697-497d9f00-7d2a-11eb-9c21-e2358c28374d.png)
![week02-5](https://user-images.githubusercontent.com/79627981/109965712-4f738000-7d2a-11eb-94d4-144831cb57d1.png)

# 第三週的實習課程式

## 第一題 進階題：大小寫轉換
```C
#include <stdio.h>
int main ()
{
	char a[10];
	scanf("%s",a);
	for (int i=0 ; a[i]!=0 ; i++)
	{
		if (a[i]>='0' && a[i]<='9') printf("%c",a[i]);
		if(a[i]>='A' && a[i]<='Z')
		{
			a[i]=a[i]+32;
			printf("%c",a[i]);
		}
		else if(a[i]>='a' && a[i]<='z')
		{
			a[i]=a[i]-32;
			printf("%c",a[i]);
		}
	}
	printf ("\n");
}

```
## 第二題 進階題：漸增數列相加 
```C
#include <stdio.h>
int main ()
{
	int a,ans=0;
	scanf("%d",&a);
	for (int i=1 ; i<=a-1 ; i++)
	{
		ans+=i*(i+1);
	}
	printf("%d\n",ans);
}
```
## 第三題 進階題：計算陣列的平方值
```C
#include <stdio.h>
int main ()
{
	int a[11],t;
	int b;
	scanf("%d",&b);
	for(int i=1 ; i<=b ; i++)
	{
		scanf("%d",&a[i]);
	}
	for (int i=1 ; i<=b ; i++)
	{
		printf("%d,",a[i]*a[i]);
	}
	printf("\n");
}
```
## 第四題 進階題：2進位轉10進位
```C
#include <stdio.h>
int main ()
{
	int a;
	scanf("%d",&a);
	printf("%d\n",a/1000*8+a%1000/100*4+a%1000%100/10*2+a%1000%100%10*1);
}

```
## 第五題 基礎題：計算幾週與幾天
```C
#include <stdio.h>
int main ()
{
	int a;
	scanf("%d",&a);
	printf("%d %d\n",a/7,a%7);
}
```
## 第六題 基礎題：計程車資計算
```C
#include <stdio.h>
int main ()
{
	int a;
	scanf("%d",&a);
	if(a<=2000) printf("100\n");
	else printf("%d\n",100+(a-2000)/500*5+5);
}
```
## 第七題 基礎題：兩數間可被5整除的整數
```C
#include <stdio.h>
int main ()
{
	int a,b,t;
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		t=b;
		b=a;
		a=t;
	}
	for(int i=a;i<=b ;i++)
	{
		if(i%5==0) printf("%d\n",i);
	}
	
}
```
## 第八題 基礎題：整數間最大距離
```C
#include <stdio.h>
int main ()
{
	int a,b,c;
	int t;
	scanf("%d%d%d",&a,&b,&c);
	if(b>a)
	{
		t=b;
		b=a;
		a=t;
	}
	if(c>a)
	{
		t=a;
		a=c;
		c=t;
	}
	if(c>b)
	{
		t=b;
		b=c;
		c=t;
	}
	printf("%d\n",a-c);
	
}
```

