

#include<stdio.h>
int fact(int);
void main()
{
int n,f;
printf("enter any number\n");
scanf("%d",&n);

f=fact(n);
printf("factorial of %d = %d\n",n,f);


}
int fact(int n)
{
if(n)
return n*fact(n-1);
else
return 1;
}
