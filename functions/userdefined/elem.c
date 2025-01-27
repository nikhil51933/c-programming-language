//design a function for printing the integer array elements

#include<stdio.h> 
void array_ele(const int *,int);
void main()
{
int a[]={10,20,30,40,50};
int ele;
ele=sizeof(a)/sizeof(a[0]);
array_ele(a,ele);


}
void array_ele(const int *p,int ele)
{
int i;
for(i=0;i<ele;i++)
printf("%d ",*p++);
printf("\n");
}
