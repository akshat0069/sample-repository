#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c=1,sum=0,sub=0,choice;
    float div=1;
    while(1)
    {
    printf("1:addition \n");
    printf("2:subtraction \n");
    printf("3:multiplication \n");
    printf("4:division \n");
    printf("enter your choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1 :
        printf("enter two numbers \n");
        scanf("%d %d",&a,&b);
        sum=a+b;
        printf("sum=%d \n",sum);
        break;


        case 2 :
         printf("enter two numbers \n");
        scanf("%d %d",&a,&b);
        sub=(a>b?a-b:b-a);
        printf("result=%d \n",sub);
        break;


        case 3 :
        printf("enter two numbers \n");
        scanf("%d %d",&a,&b);
        c=a*b;
        printf("product=%d \n",c);
        break;

        case 4 :
        printf("enter two numbers \n");
        scanf("%d %d",&a,&b);
        div=(a>b?a/b:b/a);
        printf("result=%f \n",div);
        break;

        default :
        printf("invalid choice \n ");
      }
    }
    return 0;
    

}