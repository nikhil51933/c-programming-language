#include<stdio.h>
void main()
{
// printing the given numbers are equal or not
int num1,num2;
printf("enter any two numbers..\n");
scanf("%d%d",&num1,&num2);

num1==num2?printf("equal\n"):printf("not equal\n"); // using relational operator

num1^num2?printf("not equal\n"):printf("equal\n");// using bitwise operator

num1=-10,num2=10;
printf("num1=%d num2=%d\n",num1,num2);
num1==num2?printf("equal\n"):printf("not equal\n"); // using relational operator

num1^num2?printf("not equal\n"):printf("equal\n");// using bitwise operator

}
