//WAP to find the 2nd largest array element.

#include<stdio.h>
void main()
{
int n,i,j,ele,l,sl;
printf("enter no,of array elements\n");
scanf("%d",&n);

int a[n];

ele=sizeof(a)/sizeof(a[2]);
printf("no.of elements=%d\n",ele);

for(i=0;i<ele;i++)
scanf("%d",&a[i]);

for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");

if(a[0]>a[1])
{
l=a[0];
sl=a[1];

}
else if(a[1]>a[0])
{

l=a[1];
sl=a[0];

}
printf("l=%d sl=%d\n",l,sl);


for(i=2;i<ele;i++)
{
if(a[i]>l)
{
sl=l;
l=a[i];
}
else if(a[i]>sl && l!=a[i])
sl=a[i];

}
printf("l=%d sl=%d\n",l,sl);

}
