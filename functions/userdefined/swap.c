//design a function for swapping of numbers using call by refernce value.

#include<stdio.h>
void swap(int *,int *);
void main()
{
int n,n1;
printf("enter any two numbers\n");
scanf("%d%d",&n,&n1);
printf("before swapping n=%d n1=%d\n",n,n1);
swap(&n,&n1);
printf("after swapping n=%d n1=%d\n",n,n1);


}
void swap(int *p,int *q)
{
int t;
t=*p;
*p=*q;
*q=t;

}
