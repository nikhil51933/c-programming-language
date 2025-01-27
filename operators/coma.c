#include<stdio.h>
void main()
{
//coma acts as seperator and operator. In varaible declaration and in function it acts as seperator.

int i=1,j=2,k=3,l=4,m;
printf("i=%d j=%d k=%d l=%d m=%d\n",i,j,k,l,m); // coma acts as seperator

//int n=1,2,3,4,5;   invalid declaration
//printf("n=%d\n",n);    

int n;
n=1,2,3,4;
printf("n=%d\n",n);   // coma acts as operator

int p=(1,2,3,4);
printf("p=%d\n",p);  //operator right most value printed

int q;
q=(1,2,3,4);
printf("q=%d\n",q);   //operator

printf("i=%d j=%d k=%d l=%d m=%d\n",i++,--j,k=i+j,l=k,m=l*j);    // coma acts as seperator


float a,b,c,d,e;
a=1.1,b=2.2,c=3.3,d=4.4;
printf("a=%.2f b=%.2f c=%.2f d=%.2f e=%.2f\n",a,b,c,d,e); //seperator

e=(++a,--b,c=i*j,d=a,e=b*c);  //operator
printf("a=%.2f b=%.2f c=%.2f d=%.2f e=%.2f\n",a,b,c,d,e); 

e= ++a,--b,c=i*j,d=a,e=b*c;  //operator
printf("a=%.2f b=%.2f c=%.2f d=%.2f e=%.2f\n",a,b,c,d,e); 






}
