#include<stdio.h>
int main(){
    unsigned int a=0;
    unsigned int b=0;
    int c;
    char x;
    while((x=getchar())!=' '){
        a=a*10+(x-'0');
    }
    while((x=getchar())!=' '){
        b=b*10+(x-'0');
    }
    x=getchar();
    if(x=='+'){
        c=a+b;
        printf("the result is %d\n",c);
    }else if(x=='-'){
        c=a-b;
         printf("the result is %d\n",c);
    }else if(x=='*'){
        c=a*b;
        printf("the result is %d\n",c);
    }
    }
    

