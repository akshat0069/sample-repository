#include<stdio.h>
#include<conio.h>
 int main()
{
    int x,m,r=0;
    printf("enter your number");
    scanf("%d",&x);
    while(x!=0)
    {
        m=x%10;
        r=r*10+m;
        x=x/10;
    }
    printf("revers is %d",r);
    return 0;
}