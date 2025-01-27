//WAP to concatenate two strings.

#include<stdio.h>
void main()
{
char s[20],d[20];
int i,j,len;

printf("enter any two strings\n");
scanf("%s%s",s,d);

printf("s=%s\nd=%s\n",s,d);

for(len=0;s[len];len++);

for(i=len,j=0;d[i];i++,j++)
s[i]=d[j];

s[i]='\0';

printf("s=%s\n",s);


}
