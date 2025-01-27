//design a function to print the binary of given number.

#include<stdio.h>
void binary();
/*void binary()
{
int pos,n;
printf("enter any number\n");
scanf("%d",&n);
for(pos=31;pos>=0;pos--)
printf("%d",n>>pos&1);
printf("\n");

}*/
void main()
{
binary();
binary();
binary();

}
/*void binary()
{
int pos,n;
printf("enter any number\n");
scanf("%d",&n);
for(pos=31;pos>=0;pos--)
printf("%d",n>>pos&1);
printf("\n");

}*/


void binary()
{
int n,pos;
printf("enter any number\n");
scanf("%d",&n);
int *p;
p=&n;
for(pos=31;pos>=0;pos--)
printf("%d",*p>>pos&1);
printf("\n");

}
