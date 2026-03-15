#include<stdio.h>
int main()
{
    int x=45,y=5;
    x=y;
    printf("\nx=%d",x);
    x+=y;
    printf("\nx+=%d",x);
    x-=y;
    printf("\nx-=%d",x);
    x*=y;
    printf("\nx*=%d",x);
    x/=y;
    printf("\nx/=%d",x);
    x%=y;
    printf("\nx%=%d",x);
    return 0;

}