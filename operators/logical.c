#include<stdio.h>
void main()
{
// logical operators give o/p as 0 and 1 but it is not on based true or false, it is based on truth tables
int i,j,k;
i=10,j=20;
printf("i=%d j=%d\n",i,j);

k=i&&j;    // logical AND --> k= 10 && 20 --> k= 1 && 1 ---> k= 1 , since given inputs are non zeroes.
printf("k=%d\n",k);

printf("%d\n",i||j); // 10 || 20 ---> 1 || 1 ---> =1

k=!j;
printf("k=%d\n\n",k);  // logical not k= !20 ---> k= !1 ---> k= 0

// if i=0,j=20;

i=0,j=20;
printf("i=%d j=%d\n",i,j);

k=i&&j;    // logical AND --> k= 0 && 20 --> k= 0 && 1 ---> k= 0 , since given inputs are non zero and zero.
printf("k=%d\n",k);

printf("%d\n",i||j); // 0 || 20 ---> 0 || 1 ---> =1

k=!i;
printf("k=%d\n\n",k);  // logical not k= !0 ---> k= !0 ---> k= 1

// if i=10,j=0;

i=10,j=0;
printf("i=%d j=%d\n",i,j);

k=i&&j;    // logical AND --> k= 10 && 0 --> k= 1 && 0 ---> k= 0 , since given inputs are non zero and zero.
printf("k=%d\n",k);

printf("%d\n",i||j); // 10 || 0 ---> 1 || 0 ---> =1

k=!i;
printf("k=%d\n\n",k);  // logical not k= !10 ---> k= !1 ---> k= 0

// if i=0,j=0;

i=0,j=0;
printf("i=%d j=%d\n",i,j);

k=i&&j;    // logical AND --> k= 0 && 0 --> k= 0 && 0 ---> k= 0 , since given inputs are non zero and zero.
printf("k=%d\n",k);

printf("%d\n",i||j); // 0 || 0 ---> 0 || 0 ---> =0

k=!i;
printf("k=%d\n\n",k);  // logical not k= !0 ---> k= !0 ---> k= 1
}
