//WAP to convert uppercase to lower case so that first leter always uppercase only.

#include<stdio.h>
void main()
{
char s[30],i;

printf("enter any string\n");
scanf("%s",s);

printf("s=%s\n",s);

if(s[0]>='a' && s[0]<='z')
s[0]=s[0]^1<<5;

for(i=1;s[i];i++)
{
if(s[i]>='A' && s[i]<='Z')
s[i]=s[i]+32;

}
printf("s=%s\n",s);

}
