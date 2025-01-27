//WAP to print binary of float numbers using char pointer

#include<stdio.h>
void main()
{
float f;
printf("enter any float number\n");
scanf("%f",&f);
char *c=(char *)&f;
int pos;


for(c=c+3;c>=(char *)&f;c--)
{ 
for(pos=7;pos>=0;pos--)
printf("%d",*c>>pos&1);

}
printf("\n");


}
