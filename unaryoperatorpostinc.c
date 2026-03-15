#include<stdio.h>
int main()
{
    int a=5,b;
    printf("\npost increment:");
    b=a++ + a++ + a++;
    printf("\na=%d,b=%d",a,b);
    return 0;

}