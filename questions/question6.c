#include<stdio.h>
#include<conio.h>
int main()
{
    int x,choice,rem,i=0,j;
    int a[10];

    printf("enter the number in decimal form : ");
    scanf("%d",&x);
    printf("1: decimal to binary\n");
    printf("2: decimal to octal \n");
    printf("3: decimal to hexadecimal \n");
    printf("\n enter your choice :");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        while(x)
        {
            rem=x%2;
            x=x/2;
            a[i]=rem;
            i++;
        }

        for (int j=i-1;j>=0;j--)
        {
            printf("%d",a[j]);
        }
        break;
        case 2:
        printf("\n octal of %d is %o",x,x);
        break;

        case 3:
        printf("\n hexadecimal of %d is %X",x,x);
        break;

        default:
        printf("invalid choice");

    }
    return 0;
}