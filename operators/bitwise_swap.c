#include<stdio.h>
void main()
{
int n1,n2;
n1=10,n2=20;
printf("n1=%d n2=%d\n",n1,n2);

// swapping two numbers using bitwise xor

n2=n1^n2;
n1=n1^n2;
n2=n1^n2;

printf("after swapping n1=%d n2=%d\n",n1,n2);

/* swapping two numbers using bitwise and

n2=n1&n2;
n1=n1&n2;
n2=n1&n2;

printf("after swapping n1=%d n2=%d\n",n1,n2);  */


/* swapping two numbers using bitwise or

n2=n1|n2;
n1=n1|n2;
n2=n1|n2;

printf("after swapping n1=%d n2=%d\n",n1,n2); */
}


