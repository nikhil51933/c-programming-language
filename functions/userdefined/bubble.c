//design a function for bubble sorting.

#include<stdio.h>
void bubble_sort(int *,int);
void main()
{
int a[]={10,45,5,20,75,12};
int ele,i;
ele=sizeof(a)/sizeof(a[0]);
for(i=0;i<ele;i++)
printf("%d ",*(a+i));
printf("\n");
bubble_sort(a,ele);


}
void bubble_sort(int *p,int ele)
{
int i,j,t;
for(i=0;i<ele;i++)
{
for(j=i+1;j<ele;j++)
{
if(p[i]>p[j])
{
t=p[i];
p[i]=p[j];
p[j]=t;
}

}
}
for(i=0;i<ele;i++)
printf("%d ",*p++);
printf("\n");
}
