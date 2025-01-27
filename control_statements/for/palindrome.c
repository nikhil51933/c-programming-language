// WAP to check the given number is a palindrome or not.

#include<stdio.h>
void main()
{
int num,r, temp,rev=0;
printf("enter any number\n");
scanf("%d",&num);

for(temp=num;temp ;temp=temp/10  )
{
	r=temp%10;
	rev=rev*10+r;
}
printf("rev=%d\n",rev);
if(num==rev)
	printf("num is a plaindrome\n");
	else
	printf("num is not a palindrome\n");
}













