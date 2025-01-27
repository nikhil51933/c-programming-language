//WAP to delete character which is having even no.of set bits of a given string.

#include<stdio.h>
void main()
{
char s[20];
int i,j,c,pos;
printf("enter any string\n");
scanf("%s",s);

printf("s=%s\n",s);

for(i=0,c=0;s[i];i++)
{
	for(pos=7;pos>=0;pos--)
	{
		if(s[i]>>pos&1)
			c++;
	}
	if(c%2==0)
	{
		for(j=i;s[j];j++)
		{
			s[j]=s[j+1];
			i--;
		}
	}
}
printf("s=%s\n",s);
} 
