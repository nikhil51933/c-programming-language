
#include<stdio.h>
void main()
{
char s[10];
printf("enter the string\n");
scanf("%s",s);

printf("s=%s\n",s);

printf("%ld\n",sizeof(s));

printf("s[1]=%c\n",s[1]);

printf("s+1=%s\n",s+1);
}
