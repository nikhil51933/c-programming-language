//WAP to print uppercase alphabets patern

#include<stdio.h>
void main()
{
int i,j;
char ch,ch1;
scanf("%c%c",&ch,&ch1);


for(i=ch;ch<=ch1;ch++)
{
for(j=i;j<=ch;j++)
printf("%c ",j);
printf("\n");

}


}
