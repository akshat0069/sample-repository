#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[100];
    int v=0,c=0,l,i;
    printf("enter a string \n");
    gets(str);
    l=strlen(str);
    printf("length of string is %d \n",l);
    for(i=0;i<=l;i++)
    {
        if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')//checking it is alphabet or not
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
  v++;
  else
    c++;
    }
  printf("\n number of vowels is %d",v);
  printf("\n number of consonents is %d",c);
  return 0;
}
