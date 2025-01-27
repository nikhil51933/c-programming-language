//design a user defined function for strrev2

#include<stdio.h>
char * my_strchr(char *,const char);
void my_strrev2(char *,char);

void main()
{
char s[50],ch;
printf("enter any string\n");
scanf("%s",s);
printf("enter any character tgo search\n");
scanf(" %c",&ch);
/*char *t;
t=my_strchr(s,ch);
printf(" %s\n",s);*/
char *u;
my_strrev2(s,ch);
printf("%s\n",s);

}
void my_strrev2(char *s,char ch)
{
	char *p,*q;
	char t;
	p=my_strchr(s,ch);
	if(p)
	{
		q=my_strchr(p+1,ch);
		if(q)
		{
		while(p<q)
		{
		t=*p;
		*p=*q;	
		*q=t;
		p++;
		q--;
		}

 		}
	//return s;


}


}
char * my_strchr(char *s,const char ch)
{
int i;
for(i=0;s[i];i++)
{
if(ch==s[i])
return &s[i];
}
}
