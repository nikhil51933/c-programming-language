#include<stdio.h>
void main()
{
// basic conditional operator program for printing greatest of numbers

int i=20,j=10,l;
printf("i=%d j=%d\n",i,j);

l=i>j?20:10;
printf("l=%d\n\n",l);

l=i<j?200:100;
printf("l=%d\n\n",l);

l=i>j?i:j;
printf("l=%d\n\n",l);

//i<j?l=200:l=100;
//printf("l=%d\n\n",l);

i<j?l=200:(l=100);
printf("l=%d\n\n",l);

l=i<j?l=200:(l=100);
printf("l=%d\n\n",l);

i>j?printf("i is greater\n"):printf("j is greater\n");

i<j?printf("i is greater\n"):printf("j is greater\n");

}
