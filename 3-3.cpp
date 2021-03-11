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

