//WAP to count no.of characters on prime indexes

#include<stdio.h>
void main()
{
char s[20],s1[20];
int i,j,k,c;

printf("enter any string\n");
scanf("%s",s);

printf("s=%s\n",s);

for(i=0,k=0,c=0;s[i];i++)
{
	for(j=2;j<i;j++)
	{
		if(i%j==0)
			break;
	}
	if(i==j)
	{
		c++;
		s1[k]=s[i];
		k++;
		s[i]='1';
	
	}
}
s1[k]=s[i];
printf("s=%s  s1=%s count=%d\n",s,s1,c);
}
