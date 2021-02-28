#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int i,N;
    float a[50],sum=0,mean,sum1=0,var,sd;
    printf("enter size of array :");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        printf("enter element :");
        scanf("%f",&a[i]);
    }
    for(i=0;i<N;i++)
    {
    sum=sum+a[i];
    }
    mean=sum/N;
    for(i=0;i,N;i++)
    {
        sum1=sum1+(mean-a[i])*(mean-a[i]);
    }
    var=sum1/N;
    sd=sqrt(var);
    printf("\n mean=%d \n",mean);
    printf("variance=%d \n",var);
    printf("standard deviation=%d \n",sd);
    return 0;

    

}