// arrayname represents adresses of array.

#include<stdio.h>
void main()
{
int a[5]={10,20,30,40};

printf("a=%p &a=%p\n",a,&a);
printf("*a=%d *&a=%p\n",*a,*(&a));
printf("a+1=%p &a+1=%p\n",a+1,&a+1);
printf("*a+1=%d *&a+1=%d\n",*(a+1),*(&a+1));

}
