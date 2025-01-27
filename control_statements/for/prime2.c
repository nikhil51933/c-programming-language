//WAP to print alternate prime numbers between 0 and 100

#include<stdio.h>
void main()
{
int n1,n2,r,c,i;
printf("enter the range\n");
scanf("%d%d",&n1,&n2);


for(n1;n1<=n2;n1++)
{
for(i=1,c=0;i<=n1;i++)
{
r=n1%i;
if(r==0)
c++;
if(c==2)
{
printf("%d\n",n1);
n1+=n1;
}
}
}

}
