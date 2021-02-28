#include<stdio.h>
#include<conio.h>
int main()
{
   int i,f,N;
   printf("enter your number \n");
   scanf("%d",&N);
   for(i=1;i<=N;i++)
   if(i*i==N)
   {
       f=1;
       break;
   }
   
   if(f==1)
   printf("%d is perfect square \n",N);
   else 
   printf("%d is not a perfect square \n",N);
    
   return 0;

}