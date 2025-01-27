//WAP to scan 5 array numbers from the user.and print it on the screen if the num is palindrome.

#include<stdio.h>
void main()
{
	int n,ele,rev,i,r,temp;
	printf("enter nio.of elements\n");
	scanf("%d",&n);

	int a[n];

	ele=sizeof(a)/sizeof(a[0]);

	printf("no.of elements=%d\n",ele);

	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	for(i=0;i<ele;i++)
	{
		for(rev=0,temp=a[i] ; temp ; temp/=10)
		{
			r=temp%10;
			rev=rev*10+r;
		}
		if(rev==a[i])
			printf("%d ",a[i]);
	}



}
