//WAP to delete repeated characters in a given string.

#include<stdio.h>
void main()
{
char s[20];
int i,j,k;

printf("enter any string\n");
scanf("%s",s);
printf("s=%s\n",s);

for(i=0;s[i];i++)
{
	for(j=i+1;s[j];j++)
	{
		if(s[i]==s[j])
		{
			for(k=j;s[k];k++)
				s[k]=s[k+1];
			i--;
		}
	}
}

printf("s=%s\n",s);
}
