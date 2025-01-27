#include<stdio.h>
int main()
{
int i=123;
printf("before print the last digit i=%d\n",i);
i=i%10;

printf("after print the last digit i=%d\n",i);

int f=11234;

printf("before print the last two digits i=%d\n",f);
f=f%100;

printf("after print the last two digits i=%d\n",f);

return 0;
}
