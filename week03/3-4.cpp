#include <stdio.h>
int main ()
{
	int a;
	scanf("%d",&a);
	printf("%d\n",a/1000*8+a%1000/100*4+a%1000%100/10*2+a%1000%100%10*1);
}
