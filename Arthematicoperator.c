#include<stdio.h>
int main()
{
    int a,b,add,sub,mul,div,mod;
    printf("\nEnter any two numbers:");
    scanf("%d%d",&a,&b);
    add=a+b;
    printf("\nsum values is:%d",add);
    sub=a-b;
    printf("\nsubtraction values is:%d",sub);
    mul=a*b;
    printf("\nmultiplication values is:%d",mul);
    div=a/b;
    printf("\ndivision values is:%d",div);
    mod=a%b;
    printf("\nmodulation values is:%d",mod);
    return 0;

}