#include<stdio.h>
void main()
{
// checking the given number is power of 2 or not
int num;
printf("enter any number..\n");
scanf("%d",&num);

num&(num-1)?printf("not power of 2\n"):printf("power of 2\n");

num=10;
printf("num=%d\n",num);
num&(num-1)?printf("not power of 2\n"):printf("power of 2\n");

num=-4;
printf("num=%d\n",num);
num&(num-1)?printf("not power of 2\n"):printf("power of 2\n");

}
