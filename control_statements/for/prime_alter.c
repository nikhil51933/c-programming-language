// WAP to print alternative numbers of first 10 prime numbers
#include<stdio.h>
void main()
{
	int num,temp,i,c=0,r,c1=1,c2=0;
	scanf("%d",&num);
	for(num,c1=0;c2<=11;num++)
	{
		for(i=1,temp=num,c=0;i<=temp;i++)
		{
			r=temp%i;
			if(r==0)
				c++;
		}
			if(c==2)
			{
				c1++;
				if(c1%2==0)
				{
					printf("%d\n",num);
					c2++;
				}
			}



		}
	
}

