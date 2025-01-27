
#include<stdio.h>
void main(int argc,char **argv)
{
FILE *fp;
fp=fopen(argv[1],"r+");

int i=fprintf(fp,"1fdjk22");
printf("%d\n",i);
rewind(fp);
int j=0;
fscanf(fp,"%d",&j);
printf("%d\n",j);
}
