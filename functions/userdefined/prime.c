//design a function to check given num is prime or not. if prime return 1, else return 0.

#include<stdio.h>
 
int prime_check(int);
void main()
{
int num,r;
printf("enter any number\n");
scanf("%d",&num);
r =prime_check(num);
if(r==1)
printf("prime");
else
printf("not prime\n");

}

int prime_check(int n)
{
int i;
for(i=2;i<n;i++)
{
if(n%i==0)
break;
}
if(n==i)
return 1;
else
return 0;
}
