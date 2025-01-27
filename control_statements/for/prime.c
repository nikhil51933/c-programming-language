// WAP to check given number is prime or not

#include<stdio.h>
void main()
{
int num,temp,i,r,c=0,sum=0;
printf("enter any number\n");
scanf("%d",&num);

//printf("factors of %d are: \n ",num);
for(temp=num,i=1 ; i<=temp  ;  i++)
{
	r=temp%i;
	if(r==0)
	{
		//printf("%d\n",i);
		//sum=sum+i;
		c++;
	}
}
//printf("count of factors is: %d\n",c);
//printf("sum of factors is: %d\n",sum);
if(c==2)
	printf("%d is a prime number\n",num);
	else
	printf("%d is not a prime number\n",num);

}
