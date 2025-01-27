//WAP to check differnce b/w integer pointer and character pointer

#include<stdio.h>
void main()
{
long int l=5199,*lp;
//int i=516,*ip;
char *cp;
short int *sp;
int *ip;

ip=(int *)&l;
cp=(char *)&l;
sp=(short int *)&l;
lp=&l;

printf("*ip=%d\n",*ip);
printf("*cp=%d\n",*cp);
printf("*sp=%d\n",*sp);
printf("*lp=%ld\n",*lp);

*cp=1;

printf("*ip=%d\n",*ip);
printf("*cp=%d\n",*cp);
printf("*sp=%d\n",*sp);
printf("*lp=%ld\n",*lp);

}
