//WAP if the number is perfect, find the factorial of first and last digit of that number. if it is not perfect print clear bit count

#include<stdio.h>
void main()
{
int num,temp,r,first,f=1,last,l=1,i,sum=0,clearcount=0,rev=0,temp1,pos,setcount=0;
printf("enter any number\n");
scanf("%d",&num);

for(temp=num,i=1;i<temp;i++)
{
	r=temp%i;
	if(r==0)
		sum=sum+i;

}
if(sum==num)
{
	printf("perfect number\n");
	first=num%10;
	for(i=1;i<=first;i++)
		f=f*i;
	printf("factorial of last digit is: %d\n",f);
	for( temp1=num;temp1;temp1/=10)
	{
		r=temp1%10;
		rev=rev*10+r;
	}
	last=rev%10;
	for(i=1;i<=last;i++)
		l=l*i;
	printf("factorial of first digit is: %d\n",l);
}
else
{
	printf("not perfect\n");
	for(pos=31;pos>=0;--pos)
	{
		if((num>>pos&1 )==0)
                        clearcount++;
	}
	printf("clear bit count is: %d\n",clearcount);
}

}
