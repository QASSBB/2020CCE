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