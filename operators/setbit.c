#include<stdio.h>
void main()
{
// how to set a bit positon of a given number
 
int num,pos;
num=10,pos=0;
printf("num=%d pos=%d\n",num,pos);
num=num|1<<pos;
printf("num=%d\n\n",num);
//
num=10,pos=1;
printf("num=%d pos=%d\n",num,pos);
num=num|1<<pos;
printf("num=%d\n\n",num);
//
num=10,pos=2;
printf("num=%d pos=%d\n",num,pos);
num=num|1<<pos;
printf("num=%d\n\n",num);
//
num=10,pos=3;
printf("num=%d pos=%d\n",num,pos);
num=num|1<<pos;
printf("num=%d\n\n",num);
//
num=10,pos=4;
printf("num=%d pos=%d\n",num,pos);
num=num|1<<pos;
printf("num=%d\n\n",num);
//
num=10,pos=5;
printf("num=%d pos=%d\n",num,pos);
num=num|1<<pos;
printf("num=%d\n\n",num);
//
num=10,pos=6;
printf("num=%d pos=%d\n",num,pos);
num=num|1<<pos;
printf("num=%d\n",num);
//
num=-10,pos=3;
printf("num=%d pos=%d\n",num,pos);
num=num|1<<pos;
printf("num=%d\n",num);
}
