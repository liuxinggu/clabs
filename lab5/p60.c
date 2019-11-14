#include <stdio.h>
#include <string.h>
int stringdex(char s[],char t[])
{
    int a,b,c,d;
    for(a=0;s[a]!='\0';a++)
    {
        for(b=a,c=0;t[c]!='\0'&&s[c]==t[c];b++,c++);
        if(t[c]=='\0')
        {
            d=a+1;
        }
    }
    if(d>0)
    return d-1;
    return -1;
}
main(){
    char x[100];
    char y[100];
    scanf("%s %s",x,y);
    printf("%d\n",stringdex(y,x));
}