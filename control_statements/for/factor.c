// WAP to print count of factors of a given number.and sum of that factors

#include<stdio.h>
void main()
{
int num,temp,i,c=0,r,sum=0;
printf("enter any number\n");
scanf("%d",&num);

printf("factors of %d are: \n",num);
for(temp=num,i=1 ; i<=temp ; i++)
{
	r=temp%i;
	if(r==0)
	{
		printf("%d\n",i);
		c++;
                sum=sum+i;
	}
}
printf("count of factors is: %d\n",c);
printf("sum of factors is: %d\n",sum);
}

