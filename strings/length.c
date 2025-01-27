
#include<stdio.h>
void main()
{
char n,i,len;
printf("enter sizeof string\n");
scanf("%d",&n);

char s[n];

printf("enter any string\n");
scanf(" %s",s);
printf("s=%s\n",s);

//for(i=0,len=0;s[i];len++,i++);
for(len=0;s[len];len++);

printf("len=%d\n",len);


}
