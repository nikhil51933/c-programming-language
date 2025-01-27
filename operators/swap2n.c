#include<stdio.h>
void main()
{
//swapping the two numbers without using third variable in arithemetic operators
int n1,n2;
n1=10,n2=20;
printf("before swapping the numbers n1=%d n2=%d\n",n1,n2);

//usig + and -

n1=n1+n2;    // 10+20= n1=30
n2=n1-n2;    // 30-20= n2=10
n1=n1-n2;    // 30-10= n1=20

printf("after swapping the numbers n1=%d n2=%d\n\n",n1,n2);


//using * and /

n1=n1*n2;    // 20*10= n1=200
n2=n1/n2;    // 200/10= n2=20
n1=n1/n2;    // 200/20= n1=10

printf("after swapping the numbers n1=%d n2=%d\n\n",n1,n2);

// using one line expression + -

n1=n1+n2-(n2=n1);
printf("after swapping the numbers n1=%d n2=%d\n\n",n1,n2);

// using one line expression * /

n1=n1*n2/(n2=n1);
printf("after swapping the numbers n1=%d n2=%d\n\n",n1,n2);

// using one line expression error

//n1=n1+n2-n2=n1;   //
printf("after swapping the numbers n1=%d n2=%d\n",n1,n2);
}
