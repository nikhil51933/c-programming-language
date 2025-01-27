#include<stdio.h>
void main()
{
// to set and clear the bit position of a given number

int num,pos,r;
num=15,pos=0;
printf("num=%d pos=%d\n",num,pos);
r=num>>pos&1;
printf("r=%d\n\n",r);

num=15,pos=1;
printf("num=%d pos=%d\n",num,pos);
r=num>>pos&1;
printf("r=%d\n\n",r);

num=15,pos=2;
printf("num=%d pos=%d\n",num,pos);
r=num>>pos&1;
printf("r=%d\n\n",r);

num=15,pos=3;
printf("num=%d pos=%d\n",num,pos);
r=num>>pos&1;
printf("r=%d\n\n",r);

num=15,pos=4;
printf("num=%d pos=%d\n",num,pos);
r=num>>pos&1;
printf("r=%d\n\n",r);


num=15,pos=5;
printf("num=%d pos=%d\n",num,pos);
r=num>>pos&1;
printf("r=%d\n\n",r);

num=15,pos=6;
printf("num=%d pos=%d\n",num,pos);
r=num>>pos&1;
printf("r=%d\n\n",r);

num=-15,pos=0;
printf("num=%d pos=%d\n",num,pos);
r=num>>pos&1;
printf("r=%d\n",r);

num=15,pos=-1;
printf("num=%d pos=%d\n",num,pos);
r=num>>pos&1;
printf("r=%d\n",r);

}
