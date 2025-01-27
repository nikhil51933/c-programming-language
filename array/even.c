//WAP to scan 5 array elements from the user and display it on the screen if the elment is even.

#include<stdio.h> 
void main()
{
int n,a[5],ele,i;

ele=sizeof(a)/sizeof(a[0]);

printf("no.of elements=%d\n",ele);

for(i=0;i<ele;i++)
scanf(" %d",&a[i]);

for(i=0;i<ele;i++)
{
if(a[i]%2==0)
printf("%d ",a[i]);
}
printf("\n");

} 
