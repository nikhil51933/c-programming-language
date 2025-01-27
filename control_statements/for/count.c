//WAP to to store count and sum of digits given number

#include<stdio.h>
void main()
{
int num,temp,c=0,sum=0;
printf("enter any number\n");
scanf("%d",&num);
for( ;num;num/=10)
{
temp=num%10;
sum=sum+temp;
c++;
}

printf(" sum=%d count=%d\n",sum,c);
/*temp=num;
for( ;temp;c++,sum=sum+temp%10,temp/=10);

printf("temp=%d count=%d sum=%d\n",temp,c,sum);
*/
}
