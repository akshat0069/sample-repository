#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k,n;
    for(i=1;i<=4;i++)
    {
        k=1,n=i;
        for(j=1;j<=7;j++)
        {
            if(j>=5-i && j<=3+i && k)//k=0 false ,k=1 true,doggle(contineously change to 1and 0)
            {
            printf("%d",n);
            
            k=0;
            }
            else
            {
            printf(" ");
            k=1;
            }
        
        }
        printf("\n");
    }
    return 0;
}