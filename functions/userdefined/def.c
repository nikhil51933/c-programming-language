//call by value and call by reference.

#include<stdio.h>
void abc(int);
void def(int *);
void main()
{
int i=10;
int *p;
p=&i;
printf("before call i=%d\n",i);
abc(i);
printf("after call i=%d\n",i);
printf("before call *p=%d\n",*p);
def(p);
printf("after call *p=%d\n",*p);
printf("after call *p=%d i=%d\n",*p,i);


}
void abc(int i)
{
i=200;
}
void def(int *p)
{
*p=20;

}

