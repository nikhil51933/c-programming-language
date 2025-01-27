//on adresses

#include<stdio.h>
void main()
{
int i=10,j=20;
int *p,*q;
char *t,*r;

p=&i;
q=&j;

t=(char *)&i;
r=(char *)&j;

printf("p=%p q=%p\n",p,q);
printf("%ld\n",q-p);
//printf("%ld\n",q+p);  error

printf("t=%p r=%p\n",t,r);
printf("%ld\n",r-t);
//printf("%ld\n",t*r);

char *c=(char *)1016;
char *g=(char *)1000;

printf("%ld\n",c-g);

int *k=(int *)1016;
int *l=(int *)1000;

printf("%ld\n",k-l);
/*printf("%ld\n",k+l);
printf("%ld\n",k*l);
printf("%ld\n",k/l);      errors  only subtraction of adress is possible */
}

