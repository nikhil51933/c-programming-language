//increement and decreement on pointer variable

#include<stdio.h>
void main()
{
int *ip;
char *cp;

printf("adress of\n*ip=%p\n*cp=%p\n",ip,cp);
++ip;
++cp;

printf("adress of\n*ip=%p\n*cp=%p\n",ip,cp);

ip-=1;
cp-=1;

printf("adress of\n*ip=%p\n*cp=%p\n",ip,cp);
}
