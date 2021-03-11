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
