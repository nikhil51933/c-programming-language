
#include<stdio.h>
void main()
{
int i=258;
int *ip=&i;
char *cp=(char *)&i;

printf("ip=%p cp=%p *ip=%d *cp=%d\n",ip,cp,*ip,*cp);

*ip+=1;
*cp+=1;
ip+=1;
cp+=1;
printf("ip=%p cp=%p *ip=%d *cp=%d\n",ip,cp,*ip,*cp);



}
