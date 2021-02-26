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
