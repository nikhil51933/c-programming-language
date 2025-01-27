// memory related program

#include<stdio.h>
void main()
{
char s[5],s1[5];

printf("s=%p s1=%p\n",&s,&s1);

scanf("%s",s1);
printf("s1=%s\n",s1);
scanf("%s",s);

printf("s1=%s\n",s1);
printf("s=%s\n",s);

}

