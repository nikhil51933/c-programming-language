#include<stdio.h>
void main()
{
// Behaviour of increment operator in printf() statement
int i=10;
printf("%d %d %d %d %d\n",i,i,i,i,i);

i=10;
printf("%d %d %d %d %d\n",i--,i--,i--,i--,i--);// in pf() function data passes from right to left

i=10;
printf("%d %d %d %d %d %d\n",--i,--i,--i,i,--i,--i);// here expected o/p not match with compiler o/p
 
i=10;
printf("%d %d %d %d %d %d\n\n",--i,i--,i,--i,i--,i);// here expected o/p not match with compiler o/p

//here by using "volatile" type qualifier keyword our expected o/p matches with compiler o/p with 100% accurate data.

volatile int j=10;
printf("%d %d %d %d %d\n",j,j,j,j,j);

j=10;
printf("%d %d %d %d %d\n",j--,j--,j--,j--,j--);

j=10;
printf("%d %d %d %d %d %d\n",--j,--j,j,--j,--j,--j);
 
j=10;
printf("%d %d %d %d %d %d\n\n",--j,j--,j,--j,j--,j);

}
