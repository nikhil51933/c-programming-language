
#include<stdio.h>
void main()
{
char len,n,i;
printf("enter the sizeof string\n");
scanf("%d",&n);

char s[n];

printf("enter any string\n");
scanf(" %s",s);

printf("s=%s\n",s);

for(len=0;s[len];len++);

//for(len;len>=0;len--)
for(i=len-1;i>=0;i--)
printf("%c",s[i]);
printf("\n");

printf("s[0]=%c\n",s[0]);



}
