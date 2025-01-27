//WAP to swap adjacent bytes using pointer

#include<stdio.h>
void main()
{
	unsigned int num,i,t;
	int pos;
	printf("enter any number\n");
	scanf("%d",&num);
	int *ip=&num;
	char *c,*q;
	printf("before swapping bytes num=%d\n",num);
	for(pos=31;pos>=0;pos--)
	{
		printf("%d",*ip>>pos&1);
		if(pos%8==0)
			printf(" ");
	}
	///////////////////////////////////////////////////////////////////////////////////////////////////////


	for(c=(char *)&num,q=c+1 ; c<=(char *)&num ; c=c+2,q=c+2)
	{
		t=*c;
		*c=*q;
		*q=t;
	}

	//////////////////////////////////////////////////////////////////////////////////////////////////////

	printf("\nafter swapping bytes num=%d\n",num);
	for(pos=31;pos>=0;pos--)
	{
		printf("%d",*ip>>pos&1);
		if(pos%8==0)
			printf(" ");
	}
	printf("\n");



}
