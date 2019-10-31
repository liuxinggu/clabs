#include<stdio.h>
int main ()
{
    int a=0,b=0,c=0;
    scanf("%d",&c);
    while (c!=0)
    {
        b=c%2;
        c=c/2;
        if (b==1)
        a++;
    }
    printf ("%d\n",a);
    return 0;
}