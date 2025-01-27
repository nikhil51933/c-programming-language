#include<stdio.h>
void main()
{
int i,j;
for( ;i<3;i++)
printf("i=%d\n",i);

j=8;
for(;j>1;j--)
printf("j=%d\n",j);

//for(i=1; ;i++)
printf("i=%d\n",i);


//for(i=1;i<=10; )
printf("i=%d\n",i);


//for(; ;)          //i value is printed as intial value and cond is always true. infinite loop
printf("i=%d\n",i);      


i=2;
//for(;;)
printf("i=%d\n",i);

//for(i=6;;)
printf("i=%d\n",i);

//for(;i<=22;)
printf("i=%d\n",i);


//for(;;i+1)  // no use of i+1 infinite loop
printf("i=%d\n",i);

//for(;;i+=1)
printf("i=%d\n",i);


}
