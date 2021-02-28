#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            if(j<=i)
            printf("1");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}