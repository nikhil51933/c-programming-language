//WAP to delete specific character from given string.

#include<stdio.h>
void main()
{
char s[20],i,j;
printf("enter any string\n");
scanf("%s",s);
printf("s=%s\n",s);

char ch;
printf("enter the character to delete\n");
scanf(" %c",&ch);
for(i=0;s[i];i++)
{
if(s[i]==ch)
{
for(j=i;s[j];j++)
s[j]=s[j+1];
--i;

}
}
printf("s=%s\n",s);
}
