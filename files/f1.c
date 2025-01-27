
///wap to open a file in read mode.

#include<stdio.h>
void main(int argc,char **argv)
{
FILE *fp;
///compile time
fp=fopen("f1.c","r");
if(fp==0)
printf("file is not present\n");
else
printf("file is present\n");
///run time
char f[50];
printf("enter file name orr path:\n");
scanf("%s",f);
fp=fopen(f,"r");
if(fp==0)
printf("file is not present\n");
else
printf("file is present\n");
///loadd time

fp=fopen(argv[1],"r");

if(fp==0)
printf("file is not present\n");
else
printf("file is present\n");

}
