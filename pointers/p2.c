
#include<stdio.h>
void main()
{
int i,j,*p;

printf("intially i=%d j=%d *p=%d p=%d\n",i,j,*p,p);
printf("intially adress of &i=%p &j=%p &*p=%p  &p=%p\n\n",&i,&j,&*p,&p);

i=10,j=20;
p=&i;
printf("&i=%u  &p=%u  *p=%d\n",&i,&p,*p);
printf("i=%d p=%d  *p=%d\n\n",i,p,*p);

*p=100;
printf("&i=%u  &p=%u  *p=%d\n",&i,&p,*p);
printf("i=%d p=%d  *p=%d\n\n",i,p,*p);

//p=100;
//printf("i=%p  p=%p  *p=%p\n",i,p,*p);
//printf("i=%d p=%d  *p=%d\n\n",i,p,*p);

p=&j;
printf("&j=%p  &p=%p  *p=%p\n",&j,&p,*p);
printf("j=%d p=%d  *p=%d\n\n",j,p,*p);

*p=200;
printf("&j=%p  &p=%p  *p=%p\n",&j,&p,*p);
printf("j=%d p=%d  *p=%d\n\n",j,p,*p);
j=30;
printf("finally i=%d j=%d *p=%d p=%d\n",i,j,*p,p);
*p=3000;
printf("finally i=%d j=%d *p=%d p=%d\n",i,j,*p,p);
printf("finally adress of &i=%p &j=%p *p=%p  &p=%p\n\n",&i,&j,*p,&p);
}
