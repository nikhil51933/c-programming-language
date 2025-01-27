// WAP if the number is prime as well as palindrome then only print binary of that number otherwise not.
#include<stdio.h>
void main()
{
int num,temp,r,i,c=0,rev=0,pos=31,r1,flag=0;
printf("enter any number\n");
scanf("%d",&num);

for(temp=num,i=1;i<=temp;i++  )
{
	r=temp%i;
	if(r==0)
		c++;
}
if(c==2)
{
	printf("prime number\n");



	for( ; temp;temp/=10)
	{
		r1=temp%10;
		rev=rev*10+r1;
	}
	if(num==rev)
	{
		printf("palindrome\n");
               flag=1;
      }
}else{
        printf("not prime\n");
}
if(flag==1){
		for(pos=31;pos>=0;--pos)
		{
			r=num>>pos&1;
			printf("%d",r);
			if(pos%8==0)
				printf(" ");
		}
		printf("\n");
}else
		printf("not palindrome\n");
}

