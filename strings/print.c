//WAP to print string character by character

#include<stdio.h>
void main()
{

char s[20],i;
printf("enter any string\n");
scanf("%[^\n]",s);

//for(i=0;s[i]!='\0';i++)
for(i=0;s[i];i++)
printf("%c",s[i]);

}
