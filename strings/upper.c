//WAP to convert upper case string into lower case.

#include<stdio.h>
void main()
{
char s[20],i;

printf("enter any string\n");
scanf("%s",s);

printf("s=%s\n",s);

for(i=0;s[i];i++)
{
//if(s[i]>='A' && s[i]<='Z')
//s[0]=s[0]+32;
if(s[i]>='a' && s[i]<='z')
s[i]=s[i]-32;


}
printf("s=%s\n",s);
}
