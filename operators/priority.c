#include<stdio.h>
void main()
{
int r;
r=10+20*2/30-50;


/*1st prority nfrom above expression is multiplication and division so operation starts from left to right
 multiplication  r=10+20*2/30-50  --->  r=10+40/30-50
 division    r=10+1.3-50

2nd prority from above expression addtion and subtraction so operation starts from left to right
 addition r=11.3-50
 subtraction  r=-38.7  */


printf("r=%d\n",r);

}
