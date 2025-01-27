#include<stdio.h>
void main(int argc,char **argv)
{
if(argc<4)
{
printf("usage:./a.out argv[]...\n");
return;
}
switch(*argv[2])
{
case '+' :printf("%d\n",*argv[1]+*argv[3]); break; 
case '-' :printf("%d\n",*argv[1]-*argv[3]); break; 
case '*' :printf("%d\n",*argv[1]*(*argv[3])); break; 
case '/' :printf("%d\n",*argv[1]/(*argv[3])); break; 
case '%' :printf("%d\n",*argv[1]%*argv[3]); break; 
}



}
