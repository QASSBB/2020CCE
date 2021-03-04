# 2020CCE

# 第一週的實習課程式

## 第一題 進階題：分式化簡
```C
#include <stdio.h>
int main ()
{
	int a,b;
	int ans=0;
	scanf("%d%d",&a,&b);
	for (int i=1 ; i<=b; i++)
	{
		if (a%i==0 && b%i==0) ans=i;
	}
	printf("%d %d\n",a/ans,b/ans);
}
```
## 第二題 進階題：讀入整數反序列印
```C
#include <stdio.h>
int main ()
{
	int a[11];
	int ans=0;
	for (int i=1 ; i<=10 ; i++)
	{
		 scanf("%d",&a[i]);
		 ans++;
		 if(a[i]==0) break;
	}
	for (int k=ans-1; k>=1 ; k--)
	{
		printf("%d ",a[k]);
	}
	printf("\n");
}
```
## 第三題 進階題：A的B次方函數
```C
#include <stdio.h>
int MYPOWER(int A,int B)
{
	int ans=1;
	for (int i=1 ; i<=B ; i++)
	{
		ans*=A;
	}
	return ans;
}
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}
```
## 第四題 進階題：漸增數列相加
```C
#include <stdio.h>
int main ()
{
	int a;
	int ans=0;
	scanf("%d",&a);
	for(int i=1 ; i<=a-1 ; i++)
	{
		ans=i*(i+1)+ans;
	}
	printf("%d\n",ans);
}
```
## 第五題 基礎題：找零錢 
```C
#include <stdio.h>
int main ()
{
	int a;
	scanf("%d",&a);
	printf("%d=50*%d+5*%d+1*%d\n",a,a/50,a%50/5,a%50%5/1);
}
```
## 第六題 基礎題：因數個數 
```C
#include <stdio.h>
int main ()
{
	int a;
	int b=0;
	scanf("%d",&a);
	for (int i=1 ; i<=a ; i++)
	{
		if (a%i==0) b++;
	}
	printf("%d\n",b);
}
```
## 第七題 基礎題：找倍數 
```C
#include <stdio.h>
int main ()
{
	int a[10];
	int b=0;
	for (int i=1 ; i<=10 ; i++)
	{
		scanf("%d",&a[i]);
	}
	for (int k=1 ; k<=10 ; k++)
	{
		if (a[k]%3==0) b++;
		
	}
	printf("%d\n",b);
}
```
## 第八題 基礎題：整數轉換為等級
```C
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a>=90) printf("A\n");
	else if(a>=80) printf("B\n");
	else if(a>=60) printf("C\n");
	else printf("F\n");
}
```
# 第二週課堂作業

## 1. 試著使用指標 *p , 把變數n1 的值改掉![week02-1](https://user-images.githubusercontent.com/79627981/109965838-792ca700-7d2a-11eb-8261-6f2ac124f3f7.png)
## 2. 試著使用指標 *p2 , 把變數n3 的值改掉![week02-2](https://user-images.githubusercontent.com/79627981/109965859-80ec4b80-7d2a-11eb-83f0-ef681869d366.png)
## 3. 試著先 p2=p1, 然後 *p2=400, 再印出來。請用小畫家, 畫一下它們的關係![week02-3](https://user-images.githubusercontent.com/79627981/109965663-3c60b000-7d2a-11eb-9d31-2f9f0cc8d768.png)
## 4. 現在改用陣列 int n[3]={10, 20, 30}, 再用指標,去改裡面的值![week02-4](https://user-images.githubusercontent.com/79627981/109965697-497d9f00-7d2a-11eb-9c21-e2358c28374d.png)
![week02-5](https://user-images.githubusercontent.com/79627981/109965712-4f738000-7d2a-11eb-94d4-144831cb57d1.png)




