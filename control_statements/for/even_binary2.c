// WAP to print even/odd/alternate binary values between 50 to 100 integer numbers

#include<stdio.h>
void main()
{
int n1,n2,pos;
printf("enter the range\n");
scanf("%d%d",&n1,&n2);

for(n1;n1<=n2;n1++)
{
if((n1&1)==0)
{
for(pos=31;pos>=0;pos--)
printf("%d",n1>>pos&1);
printf(" : %d\n",n1);
}
}
}

