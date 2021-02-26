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