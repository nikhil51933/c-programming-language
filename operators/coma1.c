#include<stdio.h>
void main()
{
	if(1)
		printf("one..\n");
	else
		printf("two..\n");
	if(0)
		printf("three\n");
	else if(1)
		printf("four..\n");
	else
		printf("five..\n");

	if(1,2,3,0)
		printf("six..\n");
	else
		printf("seven..\n");

	if(0,1,3,2,4)
	{
		if(023,0x12,0)
			printf("eight..\n");
		else
			printf("nine..\n");
	}
	else
		printf("ten..\n");

}
