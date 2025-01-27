//WAP to scan 5  palindrome array numbers from the user.and print it on the screen.

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
	{

		scanf("%d",&a[i]);
		for(rev=0,temp=a[i];temp;temp/=10)
		{
			r=temp%10;
			rev=rev*10+r;

		}
		if(a[i]!=rev)
			i--;

	}

	for(i=0;i<ele;i++)
		printf("%d ",a[i]);




}
