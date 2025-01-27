

#include<stdio.h>
#include<string.h>
void main(int argc,char **argv)
{
int l;
if(argc!=2)
{
printf("usage:./a.out string\n");
return;

}
l=strlen(argv);
printf("length=%d\n",l);

}
