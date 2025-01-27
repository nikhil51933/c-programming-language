//WAP to print binary of float numbers

#include<stdio.h>
void main()
{
float f;
int *ip=(int *)&f,pos;
printf("enter any float number\n");
scanf("%f",&f);

printf("float num is: %f\n and its binary is: ",f);
for(pos=31;pos>=0;pos--)
printf("%d",*ip>>pos&1);
printf("\n");




}
