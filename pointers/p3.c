//WAP for swapping of two numbers and process the data through pointers

#include<stdio.h>
void main()
{
int n1,n2,temp;
int *n3,*n4,*temp1;

n3=&n1;
n4=&n2;
temp1=&temp;

printf("enter any ntwo numbers to swap\n");
scanf("%d%d",n3,n4);

printf("before swapping n1=%d n2=%d\n",n1,n2);


*temp1=*n3;
*n3=*n4;
*n4=*temp1;

printf("after swapping n1=%d n2=%d\n\n",n1,n2);

printf("before swapping n1=%d n2=%d\n",n1,n2);

*n3=*n3+*n4;
*n4=*n3-*n4;
*n3=*n3-*n4;


printf("after swapping n1=%d n2=%d\n",n1,n2);



}
