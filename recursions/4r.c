

#include<stdio.h>
void binary(int);
void main()
{
	int n;
	printf("enter any number\n");
	scanf("%d",&n);

	binary(n);

//	printf("\n");
//	binary(n);
//	printf("\n");
}

void binary(int n)
{
	static int pos=31;

	if(pos>=0)
	{
		printf("%d",n>>pos&1);
		pos--;
		binary(n);
	}
//	pos=31;
	printf("\n");
}


