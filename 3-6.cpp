#include <stdio.h>
int main ()
{
	int a;
	scanf("%d",&a);
	if(a<=2000) printf("100\n");
	else printf("%d\n",100+(a-2000)/500*5+5);
}