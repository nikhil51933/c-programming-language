// WAP to print binary of a given integer number

#include<stdio.h>
#include<limits.h>
void main()
{
int num,temp,r,pos;
printf("enter any integer number\n");
scanf("%d",&num);
printf("the binay of %d is: \n",num);
	for(temp=num,pos=31 ; pos>=0; pos--)
	{
		r=temp>>pos&1;
		printf("%d",r);
		if(pos%8==0)
			printf(" ");
	}
	printf("\n");
}
