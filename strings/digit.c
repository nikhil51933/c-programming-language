//WAP in given string how many digits are present and give count of digits? and copy that digits into another string.

#include<stdio.h>
void main()
{
char s[20],d[20],i,c,j;

printf("enter any string\n");
scanf("%s",s);
printf("s=%s\n",s);

for(i=0,j=0,c=0;s[i];i++)
{
if(s[i]>='0' && s[i]<='9')
{
c++;
d[j]=s[i];
j++;
}
}
d[j]=s[i];
printf("d=%s count=%d\n",d,c);
}
