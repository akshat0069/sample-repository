#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[50],vo[11]="aeiouAEIOU";//as last charactor is null charactor
    int i,j,v=0,c=0,l;
    printf("enter a string  : ");
    gets(str);
    l=strlen(str);
    printf("length of string is %d \n",l);
    for(i=0;str[i];i++)//i.e. when till the ASCII code does not becomes 0 it is true and when we reach null charactor i.e. 0 it becomes false therefore loop stops
    {
       for(j=0;vo[j];j++)//.e. when till the ASCII code does not becomes 0 it is true and when we reach null charactor i.e. 0 it becomes false therefore loop stops
     {
       if(str[i]==vo[j])
     {
       v=v+1;
     
     }
     }
    }
    
       printf("total vowels in %s is %d \n",str,v);
       printf("total consonents in %s is %d \n",str,l-v);
       return 0;

}