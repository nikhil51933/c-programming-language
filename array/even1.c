//WAP to scan 5 even array elements from the user and display it on the screen.

#include<stdio.h> 
void main()
{
int a[5],ele,i;

ele=sizeof(a)/sizeof(a[0]);

printf("no.of elements=%d\n",ele);

for(i=0;i<ele;i++)
{
scanf(" %d",&a[i]);
if(a[i]%2)
i--;
}
for(i=0;i<ele;i++)
printf("%d ",a[i]);

printf("\n");

} 
