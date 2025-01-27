//WAP for behaviour of null pointer

#include<stdio.h>
void main()
{
int *ip;
*ip=0;
printf("ip=%p *ip=%d\n",ip,*ip);

int i=258;
ip=&i;
printf("ip=%p *ip=%d\n",ip,*ip);

ip=0;
printf("ip=%p *ip=%d\n",ip,*ip);



}
