
#include<stdio.h>
void main()
{
int i=517,*ip;
char *cp;

ip=&i;
cp=(char *)&i;

printf("ip=%p cp=%p *ip=%d *cp=%d\n",ip,cp,*ip,*cp);

ip+=1;
cp+=1;
printf("ip=%p cp=%p *ip=%d *cp=%d\n",ip,cp,*ip,*cp);

++*ip;
++*cp;
printf("ip=%p cp=%p *ip=%d *cp=%d\n",ip,cp,*ip,*cp);

ip-=1;
cp-=1;
printf("ip=%p cp=%p *ip=%d *cp=%d\n",ip,cp,*ip,*cp);

--*ip;
--*cp;
printf("ip=%p cp=%p *ip=%d *cp=%d\n",ip,cp,*ip,*cp);
}
