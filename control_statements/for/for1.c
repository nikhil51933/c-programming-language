#include<stdio.h>
void main()
{
// dummy for means forloop without body
int i;
for(i=1;i<=10;i++);
printf("Hello..\n\n");


for(i=1;i<=10;i++);
printf("i=%d\n\n",i);
printf("hello.. i=%d\n\n",i);


for(i=1;i>=10;i++); // cond is false but printing hello.. 
{
printf("Hello..\n");
}
}
