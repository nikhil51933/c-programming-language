//WAp to print first 25 prime numbers

#include<stdio.h>
void main()
{
int num,num1,r,i,c,c1;
printf("enter range\n");
scanf("%d",&num);

for(num,c1=0;c1<=24;num++)
{

	for(i=1,c=0;i<=num;i++)
	{
		r=num%i;
		if(r==0)
			c++;
	}
	if(c==2)
	{
		c1++;	
		printf("count = %d\tprime = %d\n",c1,num);
	}
		
} 
}
