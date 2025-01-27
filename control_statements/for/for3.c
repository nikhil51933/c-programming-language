#include<stdio.h>
void main()
{
// bhevaiour of forloop by using of signed and unsigned
signed int i;
for(i=0;i<=5;++i)
printf("i=%d\n",i);

for(i=0;i>=-5;--i)
printf("i=%d\n",i); 

/*for(i=0;i<=3;--i)   //infinite loop
printf("i=%d\n",i);

for(i=-3;i<=-1;i--)   // infinite loop
printf("i=%d\n",i); */

unsigned int j;
for(j=0;j<=5;++j)
printf("j=%u\n",j);

for(j=0;j>=-5;--j)  //here in unsigned int -5 os not present.so -5 is rolled over +ve number.cond false
printf("j=%u\n",j);


for(j=0;j<=3;--j)   // here -1 is treated as +ve 4g value
printf("j=%u\n",j);

/*for(j=-3;j<=-1;j--)   // infinite loop -3 and -1  is treated as +ve 4g value
{
printf("j=%u\n",j); 
sleep(0.5);
} */
}
