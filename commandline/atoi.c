//design a simple clculator using load time input.

#include<stdio.h>
#include<stdlib.h>
void main(int argc,char **argv)
{
	if(argc!=4)
	{
		printf("usage:./a.out num1,num2...\n");
		return;
	}
//int num1=argv[1][0]-48,num2=argv[3][0]-48;
int num1=atoi(argv[1]),num2=atoi(argv[3]);
/*	switch(argv[2][0])
	{
		case '+': printf("%d\n",(argv[1][0]-48)+(argv[3][0]-48)); break;

		case '-': printf("%d\n",(argv[1][0]-48)-(argv[3][0]-48)); break;
		case '*': printf("%d\n",(argv[1][0]-48)*(argv[3][0]-48)); break;
		case '/': printf("%d\n",(argv[1][0]-48)/(argv[3][0]-48)); break;
		case '%': printf("%d\n",(argv[1][0]-48)%(argv[3][0]-48)); break;
	} */
	
	switch(argv[2][0])
	{
		case '+': printf("%d\n",num1+num2); break;

		case '-': printf("%d\n",num1-num2); break;
		case '*': printf("%d\n",num1*num2); break;
		case '/': printf("%d\n",num1/num2); break;
		case '%': printf("%d\n",num1%num2); break;
	}
}

