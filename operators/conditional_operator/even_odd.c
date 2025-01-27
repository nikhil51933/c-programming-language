#include<stdio.h>
void main()
{
// printing the given number is even or odd

int num;
printf("Enter the number..\n");
scanf("%d",&num);

num%2?printf("odd number\n"):printf("even number\n"); // using arithemetic operator

num%2==0?printf("even number\n"):printf("odd number\n"); // using arithemetic operator

num>>0&1?printf("odd number\n"):printf("even number\n"); // using bitwise operator

num&1?printf("odd number\n"):printf("even number\n"); // without 0 also same rsult is printed

num=-4;
printf("num=%d\n",num);

num%2?printf("odd number\n"):printf("even number\n"); // using arithemetic operator

num&1?printf("odd number\n"):printf("even number\n"); // without 0 also same rsult is printed

}
