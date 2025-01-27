
#include<stdio.h>
void print(int,int,char (*)[]);
void print1(int,char **);
void main()
{
	char s[3][10];
	printf("enter strings\n");
	int i;
	for(i=0;i<3;i++)
		scanf("%s",s[i]);

	char *s1[]={"abcd","wxyz","mnop"};

	print(3,10,s);
	print1(3,s1);


}
void print(int r,int c,char (*s)[10])
{
	int i;
	for(i=0;i<r;i++)
		printf("%s\n",s[i]);

}

void print1(int r,char **s1)
{
	int i;
	for(i=0;i<r;i++)
		printf("%s\n",s1[i]);

}
