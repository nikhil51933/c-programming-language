//to write array in a file

#include<stdio.h>
void main(int argc,char **argv)
{
FILE *fp;
fp=fopen(argv[1],"r+");
int a[5]={1,2,3,4,5},i;
//for(i=0;i<5;i++)
//fprintf(fp,"%d ",a[i]);
fwrite(a,4,5,fp);

}
