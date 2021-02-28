
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
   char str[100];
   int i,l;
   printf("enter a string  :");
   gets(str);
   for(i=0;i<=l;i++)
   {
       if(str[i]>='a' && str[i]<='z')
        str[i]=str[i]-32;//ASCII code of small leters start from 97and 97-32=65("ASCII code of capital letters")
        else
       {
           if(str[i]>='A' && str[i]<='Z')
            str[i]=str[i]+32;//ASCII code of capital letters start from 65 and 65+32=97("ASCII code of small letters")
       }
   }
   printf("string is %s \n",str);
   return 0;
}

