//design a function to count the set bits of a given number.

#include<stdio.h>
int set_count(int);
void main()
{

int num,c;
printf("enter any number\n");
scanf("%d",&num);
c=set_count(num);
printf("count=%d\n",c);

}
int set_count(int num)
{
int pos,c;
for(pos=0,c=0;pos<=31;pos++)
{
if(num>>pos&1)
c++;
}

return c;
}

