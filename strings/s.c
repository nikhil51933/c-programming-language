
#include<stdio.h>
void main()
{
char a[]={'a','s','f','k'};
char b[]={'a','b','c','d','\0'};
char c[]={"string"};
char d[]={"string\0"};
char e[]="string\0";
char f[]="string";
char g[7]="string";
char h[9]="str\0ing";
char ch,i,j,ele;


ele=sizeof(h)/sizeof(h[0]);
for(j=0;j<ele;j++)
printf("%c ",*(h+j));
printf("\n");
printf("%ld ",sizeof(h));

}
