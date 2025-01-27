//WAP to print sizeof pointers variables

#include<stdio.h>
void main()
{
char ch='a',*cp;
short int s=3,*sp;
int i=10,*ip;
float f=23.5,*fp;
double d=23.5,*dp;
long int l=19,*lp;

printf("%ld %ld %ld\n",sizeof(ch),sizeof('a'),sizeof(cp));
printf("%ld %ld %ld\n",sizeof(s),sizeof(3),sizeof(sp));
printf("%ld %ld %ld\n",sizeof(i),sizeof(10),sizeof(ip));
printf("%ld %ld %ld\n",sizeof(f),sizeof(23.5),sizeof(fp));
printf("%ld %ld %ld\n",sizeof(d),sizeof(23.5),sizeof(dp));
printf("%ld %ld %ld\n",sizeof(l),sizeof(19),sizeof(lp));

}
