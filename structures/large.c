//wap to return largest and second largest elment in a given array.

#include<stdio.h>
struct lar
{
	int l,sl;
}v;
struct lar large_ele(int *,int);
void main()
{
	int n;
	printf("enter no.of elements in an array\n");
	scanf("%d",&n);
	int a[n],i;
	printf("enter array elements\n");
	for(i=0;i<n;i++)
		scanf("%d",a+i);

	for(i=0;i<n;i++)
		printf("%d ",*(a+i));
	printf("\n");

	v=large_ele(a,n);
	printf("largest element=%d\nsecond largest element=%d\n",v.l,v.sl);
}
struct lar large_ele(int *a,int n)
{
	int i,j;
	struct lar v;
	if(a[0]>a[1])
	{
		v.l=a[0];
		v.sl=a[1];
	}
	else if(a[1]>a[0])
	{
		v.l=a[1];
		v.sl=a[0];
	}
	else
	{
		v.l=a[0];
		v.sl=0;
	}
	for(i=2;i<n;i++)
	{
		if(a[i]>v.l)
		{
			v.sl=v.l;
			v.l=a[i];
		}
		else if(a[i]>v.sl && a[i]!=v.l)
			v.sl=a[i];
	}

	return v;
}

