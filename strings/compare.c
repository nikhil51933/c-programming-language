//WAP to comparee two string are equal or not.

#include<stdio.h>
void main()
{
char s[10],s1[10],i;

printf("enter any two strings\n");
scanf("%s%s",s,s1);

printf("s=%s\ns1=%s\n",s,s1);

for(i=0;s[i];i++)
{
if(s[i]!=s1[i])
break;
}
if(s[i]==s1[i])
printf("equal\n");
else
printf("not equal\n");
}
