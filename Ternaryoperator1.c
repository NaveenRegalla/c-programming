#include<stdio.h>
int main()
{
    int a,b,c,res;
    printf("enter any a,b,c values:");
    scanf("%d,%d,%d",&a,&b,&c);
    res=a>b?(a>c?a:c):(b>c?b:c);
    printf("greater values is:%d",res);
    return 0;
}