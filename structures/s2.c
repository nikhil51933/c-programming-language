
#include<stdio.h>
void main()
{
	static struct one
	{
		 int i;
		char ch;
		float f;

	}v;
	//struct one v;
	v.i=10;
	v.ch='g';
	v.f=23.5;
	printf("%d %c %f\n",v.i,v.ch,v.f);

}
