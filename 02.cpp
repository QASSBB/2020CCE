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