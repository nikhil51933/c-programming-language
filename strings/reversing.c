//WAP to revrse the conent of a string.

#include<stdio.h>
void main()
{
char s[20],i,j,len,t;

printf("enter any string\n");
scanf("%s",s);

printf("s=%s\n",s);

for(len=0;s[len];len++);

for(i=0,j=len-1;i<j;i++,j--)
{
t=s[i];
s[i]=s[j];
s[j]=t;
}

printf("s=%s\n",s);
printf("s[0]=%c\n",s[0]);
}
