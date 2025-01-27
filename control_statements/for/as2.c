//WAP if the number is prime count set bits of that number ifn it is not prime even digits multiplication of that number

#include<stdio.h>
void main()
{
int num,temp,i,r,c=0,pos,r1,setcount=0,r2,mul=1;
printf("enter any number\n");
scanf("%d",&num);

for(temp=num,i=1;i<=temp;i++)
{
	r=temp%i;
	if(r==0)
		c++;
}

if(c==2)
{
	printf("prime number\n");
	for(pos=31;pos>=0;pos--)
	{
		r1=num>>pos&1;
		if(r1==1)
			setcount++;
	}
	printf("count of set of given prime num is: %d\n",setcount);
}
else
{
	for( ; num; num/=10)
	{
		r2=num%10;
		if(r2%2==0)
			mul=mul*r2;
	}
	printf("even digits mul is: %d\n",mul);
}
}
