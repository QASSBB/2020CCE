#include <stdio.h>
int main()
{
    char line[5][10]={"decline","proper","mojority","bullet","shop"};
    char *p;
    for(int i=0;i<5;i++)
    {
        p=line[i];
        printf("%s\n",line[i]);
    }
}
