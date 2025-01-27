//user defined atoi.

#include<stdio.h>
int my_atoi(const char *);
void main(int argc,char **argv)
{
	int num,i;
	for(i=1;i<argc;i++)
	{
		num=my_atoi(argv[i]);                              
		printf("%d ",num);
	}

}
int my_atoi(const char *s)
{
	int i,num;
	if(s[0]=='-'||s[0]=='+')
		i=1;
	else
		i=0;
	for(num=0 ;s[i];i++)
	{
		if(s[i]>='0'&&s[i]<='9')
			num=num*10+s[i]-48;
	}
	if(s[0]=='-')
		num=-num;
	return num;
}
