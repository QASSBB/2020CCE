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