
#include<stdio.h>
void main()
{
char s[]={"hello"};
printf("%ld\n",sizeof(s));

char t[10];
printf("enter any string\n");
scanf("%[^\n]",t);

printf("t=%s\n",t);

t[3]='\0';
printf("t=%s\n",t);

}
