//WAP to print prime numbers between 50 t0 100 and sum of digits of those prime numbers

#include<stdio.h>
void main()
{
int n1,n2,r,r1,i,c,sum,temp;
printf("enter the range \n");
scanf("%d%d",&n1,&n2);

for(n1;n1<=n2;n1++)
{

	for(i=1,c=0;i<=n1;i++)
	{
		r=n1%i;
		if(r==0)
			c++;
	}
	if(c==2)
	{
		for(temp=n1,sum=0;temp;temp=temp/10)
		{
			r1=temp%10;
			sum=sum+r1;
		}
		printf("prime=%d\nsum of digits=%d\n\n",n1,sum);
        }

	
}
}
