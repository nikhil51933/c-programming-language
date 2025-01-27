//wap to scan and print n no.of strings

#include<stdio.h>
void main()
{
char s[5][10];
int i;
printf("enter the strings\n");
for(i=0;i<5;i++)
scanf("%s",s[i]);

for(i=0;i<5;i++)
printf("%s\n",s[i]);

}
