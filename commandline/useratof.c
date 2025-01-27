//user defined atof.

#include<stdio.h>
#include<stdlib.h>
double my_atof(const char *);
void main(int argc,char **argv)
{
	double num;
	int i;
 
	for(i=1;i<argc;i++)
	{
	num=my_atof(argv[i]);
	printf("%f\n",num);
	}
}
double my_atof(const char *f)
{
	int i,num=0,j,c=1;
	double num1=0;
	
	if(f[0]=='-' ||f[0]=='+')
		i=1;
	else i=0;
	num=atoi(f);
	for( ;f[i] ;i++)
	{
		if(f[i]=='.')
		{
			for(j=i+1,c=1,num1=0;f[j];j++)
			{
				if(f[j]>='0'&&f[j]<='9')
				{
					num1=num1*10+f[j]-48;
					c*=10;
				}
				else
				{ 
				if(f[0]=='-')
				num1=-num1;
				num1=num+(num1/c);
				return num1;
				}
			}
		}
		
		
	}
	if(f[0]=='-')
	num1=-num1;
	num1=num+(num1/c);
	return num1;

}



