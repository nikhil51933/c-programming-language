//WAP for printing 1d array elements using array of pointer.
#include<stdio.h>
void main()
{
	int n;
	printf("enter no.of array elements\n");
	scanf("%d",&n);
	int a[n],i;
	printf("enter array elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	int *b[n];
//	b=a;
	for(i=0;i<n;i++)
		b[i]=a+i;

	for(i=0;i<n;i++)
		printf("%d ",*(*b+i));
		//printf("%d ",*b[i]);
	printf("\n");

printf("b=%u b[0]=%u b[0][0]=%u\n",b,b[0],b[0][0]);
printf("b+1=%u ++b[0]=%u ++b[0][0]=%u\n",b+1,++b[0],++b[0][0]);


}
