//WAP to insert or replace a character in agiven string.

#include<stdio.h>
void main()
{
char s[20],ch;
int index;

printf("enter any string\n");
scanf("%s",s);
printf("s=%s\n",s);

printf("enter char to insert/replace\n");
scanf(" %c",&ch);

printf("enter index value\n");
scanf(" %d",&index);
s[index]=ch;

printf("s=%s\n",s);



}
