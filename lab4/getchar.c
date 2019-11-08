#include <stdio.h>
int main()
{
    int count=0;
    char a;
    int b=1;
    int c;
    while((a=getchar())!='\n'){
        c=c*10+(a-'0');}
    while(b!=0){
       b=b<<1;
        if((b&c)!=0){count++;}
    }
printf("%d\n",count);
}