//WAP to print palindrome numbers 50 t0 100

#include<stdio.h>
void main()
{
int n1,n2,rev,r,temp;
printf("enter the range\n");
scanf("%d%d",&n1,&n2);


for(n1;n1<=n2;n1++)
{
for(temp=n1,rev=0;temp;temp=temp/10)
{
r=temp%10;
rev=rev*10+r;
}
if(n1==rev)
printf("n1=%d\n",n1);
}

}
