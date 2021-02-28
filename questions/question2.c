#include<stdio.h>
#include<conio.h>
int main()
{
    int i,x;
    printf("enter a natural number \n");
    scanf("%d",&x);
    for(i=2;i<=x-1;i++)
    {
        if(x%i==0)
        break;
    }
    if(i==x)
    printf("%d is prime number",x);
    else
    printf("%d is not a prime number",x);
    return 0;
}