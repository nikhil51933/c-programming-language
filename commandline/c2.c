

#include<stdio.h>
void main(int argc, char **argv,char **envy)
{
printf("argc=%d\n",argc);
printf("&argc=%lu\n",&argc);
printf("&argv=%lu\n",&argv);
printf("argv=%lu\n",argv);
printf("argv[0]=%s\n",argv[0]);
printf("argv[0][0]=%c\n",argv[0][0]);


}
