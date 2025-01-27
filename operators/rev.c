#include<stdio.h>
void main()
{
int i=91,r;
printf("before revaersing i=%d\n",i);
r=i%10;    // here r=1 , i=91
i=i/10;    // here i=9,  r=1
i=r*10+i;    // here i=1*10+9 = 19
printf("after reversig i=%d\n",i);
}
