#include <stdio.h>
struct DATA {    ///�ŧi
    float x,y,z; ///�w�q�̭���
}point1 ;
struct DATA points[5];
///point1 �O�ܼƪ���DATA
///DATAA�̭���x,y,z;
int main ()
{
    ///int b;
    ///int a[5];
    for (int i=0 ; i<5 ; i++)
    {
        points[i].x=i*10;///�ϥ�()�̭�����
        points[i].y=20;///�ϥ�()�̭�����
        points[i].z=0;///�ϥ�()�̭�����
        printf("%f %f %f\n",points[i].x,points[i].y,points[i].z);
    }
}
