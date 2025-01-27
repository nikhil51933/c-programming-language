// WAP to check whether the given number is perfect or not

#include<stdio.h>
void main()
{
int num,temp,i,r,sum=0;
printf("enter any number\n");
scanf("%d",&num);

printf("factors of %d excluding itself factor are: \n",num);
for(temp=num,i=1 ; i<=num-1 ; i++)
{
r=temp%i;
if(r==0)
{
printf("%d\n",i);
sum=sum+i;
}
}
printf("sum of factors of %d excluding itself factor is: %d\n",num,sum);
if(sum==num)
printf("%d is a perfect number\n",num);
else
printf("%d is not a perfect number\n",num);


}
