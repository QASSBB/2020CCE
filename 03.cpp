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