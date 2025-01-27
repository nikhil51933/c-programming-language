

#include<stdio.h>
void main()
{
FILE *fp;
fp=fopen("data","w");
int i;
i=fputc(99,fp);
printf("%c\n",i);

}
