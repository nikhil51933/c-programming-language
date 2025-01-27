//WAP to copy one string into another string.

#include<stdio.h>
void main()
{
char s[10],d[10],i;

printf("enter any string\n");
scanf("%s",s);

printf("s=%s\n",s);

for(i=0;s[i];i++)
{
d[i]=s[i];
}
d[i]='\0';

printf("d=%s %c\n",d,d[i+2]);

}
