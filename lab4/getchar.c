#include <stdio.h>
int main()
{
    int count=0;
    char a;
    int c;
    while((a=getchar())!='\n'){
        c=c*10+(a-'0');}
    while(c!=0){
        c=c&(c-1);
        count++;
    }
printf("%d\n",count);
}