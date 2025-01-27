//WAP to check given character is present or not. if present how many times and its index values.

#include<stdio.h>
void main()
{
char s[10],ch,i,c;

printf("enter any string\n");
scanf("%s",s);

printf("s=%s\n",s);

printf("enter any character to search\n");
scanf(" %c",&ch);

for(i=0,c=0;s[i];i++)
{
if(s[i]==ch)
{
//c++;
printf("char is present at %d\n",i);
return;
}

}
printf("not present\n");
}
