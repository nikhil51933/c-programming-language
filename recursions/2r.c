

#include<stdio.h>
void main()
{
unsigned long int c=0;
printf("%lu\n",c++);
c++;
if(c<3)
main();
printf("hello\n");

}
