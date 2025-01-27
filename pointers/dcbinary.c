//WAP for printing binary of double-num using char pointer.

#include<stdio.h>
void main()
{
double d;
int pos;
char *cp=(char *)&d;
printf("enter any double num\n");
scanf("%lf",cp);

for(cp+=7 ; cp>=(char *)&d ;  cp--)
{
for(pos=7;pos>=0;pos--)
printf("%d",*cp>>pos&1);
printf(" ");
}
printf("\n");

}
