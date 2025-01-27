#include<stdio.h>
void main()
{
// conditional operator within in a condional operator

int i=20,j=10,k=30,l;
printf("i=%d j=%d k=%d\n",i,j,k);

l=i>j?(i>k?20:30):(j>k?20:30);
printf("l=%d\n\n",l);

l=i>j?(i>k?2000:3000):(j>k?2000:3000);
printf("l=%d\n\n",l);

i<j?(i>k?l=20:(l=30)):(j>k?l=20:(l=30));
printf("l=%d\n\n",l);

i<j?(i>k?printf("i is greater\n"):printf("j is greater\n")):(j>k?printf("j is greater\n"):printf("k is greater\n"));

i>j?(i>k?printf("i is greater\n"):printf("j is greater\n")):(j>k?printf("j is greater\n"):printf("k is greater\n"));

l=i<j?(i>k?printf("i is greater\n"):printf("j is greater\n")):(j>k?printf("j is greater\n"):printf("k is gjhreater\n"));
printf("l=%d\n\n",l); // no.of lettrs/chars in the printf statement it is printing 

//l=i<j?(i>k?i is greater:j is greater):(j>k?j is greater:k is greater);
//printf("l=%d\n\n",l);
}

