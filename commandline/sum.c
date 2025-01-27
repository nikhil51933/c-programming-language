//wap to implemnt sum function such that if we give two inputs or more it has to add. using variable argument list function.


#include<stdio.h>
#include<stdarg.h>
int sum(int,...);
void main()
{
	int i,j,k,r;
	printf("enter any two numbers\n");
	scanf("%d%d%d",&i,&j,&k);
	r=sum(3,i,j,k);
	printf("sum=%d\n",r);
}
int sum(int n,...)
{
	va_list v;
	va_start(v,n);
	int sum,num,i;
	for(i=0,sum=0;i<n;i++)
	{
		num=va_arg(v,int);
		sum=sum+num;

	}
	return sum;
}
