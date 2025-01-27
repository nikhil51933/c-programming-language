#include<stdio.h>
void main()
{
	int n;
	printf("enter no.of array elements\n");
	scanf("%d",&n);
	int a[n],i,*ip,(*p)[n];
	printf("enter array elements\n");
	for(i=0;i<n;i++)
		scanf("%d",a+i);

	for(i=0;i<n;i++)
		printf("%d ",*(a+i));
	printf("\n");

	ip=a;
	//p=a;
	p=&a;
	printf("ip=%u,*ip=%u\n",ip,*ip);
	printf("p=%u,*p=%u,**p=%u\n",p,*p,**p);
	printf("p=%u,p[0]=%u,p[0][0]=%u\n",p,p[0],p[0][0]);

	printf("p+1=%u,*p+1=%u,**p+1=%u\n",p+1,*p+1,**p+1);

	for(i=0;i<n;i++)
		printf("after===%d ",*(a+i));
	printf("\n");

	for(i=0;i<5;i++)
		printf("%d ",(*p)[i]);
	printf("\n");

}
