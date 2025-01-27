//bit feild mechanism

#include<stdio.h>
struct st
{
	int i;
	unsigned char c:7;

}v;
void main()
{
	v.c=15;
	printf("%lu\n %d\n",v.c,v.c);
	//to find size of bit feild
	int i=0;
	v.c=1;
	while(v.c)
	{
		v.c=v.c<<1;
		i++;
	}
	printf("sizeof v.c=%d\n",i);
	//printf("%ld\n",sizeof(v.c));
}


