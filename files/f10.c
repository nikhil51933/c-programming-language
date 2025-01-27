//ftell()

#include<stdio.h>
void main(int argc,char **argv)
{
FILE *fp;
fp=fopen(argv[1],"a");
long int l;
l=ftell(fp);
printf("size of file=%ld\n",l);
int i=fclose(fp);
printf("%d\n",i);

}
