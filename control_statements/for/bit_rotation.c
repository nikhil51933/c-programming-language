// WAP for rotation of bits of given integer number

#include<stdio.h>
void main()
{
int num,r,i;
printf("enter any number\n");
scanf("%d",&num);

printf("before rotating num=%d\n",num);
for(i=31;i>=0;i--)
printf("%d",num>>i&1);
//////////////////////////////////////////////////////////////////////////////////////////////////////

for(i=0;i<5;i++)
{
r=num&1;
num=num>>1;
if(r)
num=num|1<<31;

}

//////////////////////////////////////////////////////////////////////////////////////////////////////

printf("\nafter rotating num=%d\n",num);
for(i=31;i>=0;i--)
printf("%d",num>>i&1);
printf("\n");


}
