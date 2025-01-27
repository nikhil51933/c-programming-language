

#include<stdio.h>
void print(const char *);
void main()
{
	char s[100];
	printf("enter any string\n");
	scanf("%s",s);

	print(s);
	printf("\n");

}
void print(const char *s)
{
	
	if(*s)
	{
		printf("%c",*s);
		print(s+1);

	}
}
