
#include<stdio.h>
#include<stdarg.h>
int sum(char *,...);
void main()
{
	int l;
	l=sum("hello",10,23.5,445,0);
	printf("sum=%d\n",l);

}
int sum(char *n,...)
{
	va_list v;
	va_start(v,n);
	int sum,i;
double num;
	for(i=0,sum=0; ; )
	{
		num=va_arg(v,double);
		if(num==0)
			break;
		sum=sum+num;
	}
	return sum;
}
