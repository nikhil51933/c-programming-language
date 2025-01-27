
//realloc
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *p;
	//p=calloc(1,sizeof(int)*5);
	p=calloc(1,20);
	//p=malloc(20);
	printf("%lu\n",p);
	p=realloc(p,4);
	printf("%lu\n",p);
	p=realloc(p,81);
	printf("%lu\n",p);
	free(p);
	p=0;
	printf("%lu\n",p);
	p=realloc(0,36);
	printf("%lu\n",p);
	free(p);
	free(p);
	printf("%lu\n",p);

}
