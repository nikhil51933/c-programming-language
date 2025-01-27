#include<stdio.h>
void main()
{
// to check given number is +ve or -ve using conditional operator
int num,pos=31,r;
num=20;
printf("num=%d pos=%d\n",num,pos);

num>0?printf("num is positive\n"):printf("num is negative\n"); //using relational operator

num>>31&1?printf("num is negative\n"):printf("num is positive\n"); // using bitwise operator 

num=-20;
printf("num=%d pos=%d\n",num,pos);

num>0?printf("num is positive\n"):printf("num is negative\n"); //using relational operator

num>>31&1?printf("num is negative\n"):printf("num is positive\n"); // using bitwise operator 

}
