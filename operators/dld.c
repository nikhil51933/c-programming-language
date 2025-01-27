#include<stdio.h>
int main()
{
int i=123;
printf("before deleteing the last digit i=%d\n",i);
i=i/10;

printf("after deleting the last digit i=%d\n",i);

float f=1134.234;

printf("before deleting the last two digits f=%f\n",f);
f=f/100;

printf("after deleting the last two digits f=%f\n",f);

return 0;
}
