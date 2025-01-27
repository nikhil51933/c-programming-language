
#include<stdio.h>
void main()
{
int b[2][4]={{10,20,30,40},{60,70,80,90}};

int i,j,ele,ele1;

ele=sizeof(b)/sizeof(b[0]);
ele1=sizeof(b[1])/sizeof(b[1][0]);

printf("%d\n",ele);
printf("%d\n",ele1);



for(i=0;i<ele;i++)
{
for(j=0;j<ele1;j++)
printf("%d ",b[i][j]);
printf("\n");

}

/*for(i=0;i<1;i++)
{
for(j=0;j<=ele+ele1+1;j++)
printf("%d ",b[i][j]);
}*/


printf("%u\n",b);
printf("%u\n",b[0]);
printf("%u\n",b[0][0]);
printf("%u\n",&b[0][0]);
printf("%u\n\n",&b);

printf("%u\n",b+1);
printf("%u\n",b[0]+1);
printf("%u\n",&b[0][0]+1);
printf("%u\n",b[0][0]+1);
printf("%u\n\n",&b+1);

printf("%u\n",b[1]);
printf("%u\n",b[1]+1);
printf("%u\n",&b[1][0]+1);
printf("%u\n\n\n",b[1][0]+1);
//////////////////////////////////////////////////////////////////////////////////////;///////////////////////////

printf("%u\n",*b);
printf("%u\n",*b[0]);
printf("%u\n",&b[0][0]);
//printf("%u\n",*b[0][0]);
printf("%u\n\n",*b);

printf("%u\n",*b+1);
printf("%u\n",*b[0]+1);
//printf("%u\n",*b[0][0]+1);
printf("%u\n",&b[0][0]+1);
printf("%u\n\n",&b+1);

printf("%u\n",*b[1]);
printf("%u\n",*b[1]+1);
printf("%u\n",&b[1][0]+1);
//printf("%u\n\n",*b[1][0]+1);



}
