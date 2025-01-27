//WAP to scan 5 array numbers from the user and print it on the screen if the number is prime.

#include<stdio.h>
void main()
{
	int a[5],ele,i,j;

	ele=sizeof(a)/sizeof(a[1]);

	printf("no.of elements=%d\n",ele);

	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	for(i=0;i<ele;i++)
	{
		for(j=2;j<a[i];j++)
		{
			if(a[i]%j==0)
				break;

		}
		if(a[i]==j)
			printf("%d ",a[i]);
	}
	printf("\n");

}
