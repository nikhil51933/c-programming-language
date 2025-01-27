//design a function for finding the largest and second largest elements in a array

#include<stdio.h>
void print_largest(int *,int);
void main()
{
	int n,ele,i;
	printf("enter no.of elements\n");
	scanf("%d",&n);
	int a[n];
	ele=sizeof(a)/sizeof(a[0]);
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
	print_largest(a,ele);

	//printf("l=%d sl=%d\n",l,sl);

}
void print_largest(int *p,int ele)
{
	int i,j,l,sl;
	if(p[0]>p[1])
	{
		l=p[0];
		sl=p[1];

	}
	if(p[1]>p[0])
	{
		l=p[1];
		sl=p[0];
	}
	for(i=2;i<ele;i++)
	{
		if(p[i]>l)
		{
			sl=l;
			l=p[i];
		}
		else if(p[i]>sl && p[i]!=l)
		{
			sl=p[i];
		}

	}
	printf("l=%d sl=%d\n",l,sl);
}
