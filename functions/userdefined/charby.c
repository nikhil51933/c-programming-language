//design a function to print char by char of a given string.

#include<stdio.h>
void my_print(const char *);
int my_strlen(const char *);
char * my_strcpy(char *,const char *);
int my_strcmp(const char *,const char *);
char * my_strcat(char *,const char *);
char * my_strchr(char *,const char);
char * my_strrev(char *);
char * my_strrev1(char *,const char);
char * my_strrev2(char *,const int);
char * my_strrev3(char *,char *);
char * my_strstr(char *,const char *);
void set_clear_count(const int);
char * lower_upper(char *);
int print_factorial(int);

void main()
{
	/*	char s[10];
		printf("enter any string\n");
		scanf("%s",s);
		my_print(s); 

		int len; 
		len=my_strlen(s);
		printf("len=%d\n",len); 

		char d[10];
		char *t;
		t=my_strcpy(d,s);
		printf("d=%s\n",d);
		
		int u;
		u=my_strcmp(s,d);
		if(u==0)
		printf("equal u=%d\n",u);
		else
		printf("not equal u=%d\n",u);

		char *x;
		x=my_strcat(d,s);
		printf("%s\n",d);

		char ch='r';
		char *v;
		v=my_strchr(s,ch);
		if(v==0)
		printf("null\n");
		else
		printf("%s\n",v);

		char m[20],sub[20];
		printf("enter main and sub strings\n");
		scanf(" %s%s",m,sub);
		char *y;
		y=my_strstr(m,sub);
		printf("%s\n",y);

		int num;
		printf("enter any number\n");
		scanf("%d",&num);
		set_clear_count(num);


	char g[20];
	printf("enter any string\n");
	scanf("%s",g);
	char *t;
	t=lower_upper(g);
	printf("%s\n",g);

	char k[50];
	printf("enter any string\n");
	scanf("%s",k);
	char *t;
	t=my_strrev(k);
	printf("%s\n",k);
	
	char s[50],ch;
	printf("enter any string and character to search\n");
	scanf("%s",s);
	scanf(" %c",&ch);
	char *t;
	t=my_strrev1(s,ch);
	printf("%s\n",s);

	char s[50];
	int num;
	printf("enter any string and number\n");
	scanf("%s",s);
	scanf(" %d",&num);
	char *t;
	t=my_strrev2(s,num);
	printf("%s\n",s);
	
	char s[50],ch;	
	printf("enter any character to delete and string\n");
	scanf("%s",s);
	scanf(" %c",&ch);
	char *p,*q;
	p=my_strchr(s,ch);
	q=my_strcpy(p,p+1);
	printf("%s\n",s);

	char s[50];
	printf("enter any string\n");
	scanf("%s",s);
	int d,d1;
	printf("enter index positions to delete\n");
	scanf(" %d %d",&d,&d1);
	char *t;
	t=my_strcpy(s+d,s+d1+1);
	printf("%s\n",s);
	
	char m[50],s[30];
	printf("enter main and substrings\n");
	scanf("%[^\n]",m);
	scanf("%s",s);
	int len;
	char *p,*q;
	len=my_strlen(s);
	p=my_strstr(m,s);
	q=my_strcpy(p,p+len);
	printf("%s\n",m);

	char s[50];
	int d;
	printf("enter the string and char to reverse\n");
	scanf("%s",s);
	scanf(" %d",&d);
	char *q;
	q=my_strrev3(s,s+d);
	printf("%s\n",s);

	char s[50],ch;
	char *r;
	printf("enter any string and character to search\n");
	scanf("%s",s);
	scanf(" %c",&ch);
	char *p,*q;
	printf("%s\n",s);
	p=my_strchr(s,ch);
	if(p)	
	{
	if(q=my_strchr(p+1,ch))
	r=my_strrev3(p,q);

	}
	printf("%s\n",s);
	

	char s[50];
	printf("ENTER any string\n");
	scanf("%[^\n]",s);
	char *q,*p;
	p=s;	
	while(q=my_strchr(p,32))
	{
		my_strrev3(p,(q-1));
		p=q+1;

	}
	my_strrev(p);
	printf("%s\n",s); 
	
	char s[50];
	printf("ENTER any string\n");
	scanf("%[^\n]",s);
	char *q,*p;
	p=s;
	my_strrev(p);	
	while(q=my_strchr(p,32))
	{
		my_strrev3(p,(q-1));
		p=q+1;

	}
	my_strrev(p);
	printf("%s\n",s); */
int n;
printf("enter any number\n");
scanf("%d",&n);
int n1;
n1=print_factorial(n);
printf("%d\n",n1);

}
int print_factorial(int n)
{
int i,r;
for(i=2,r=1;i<=n;i++)
r=r*i;
return r;

}
char *my_strrev3(char *s,char *p )
{
char temp;
while(s<p){
temp=*s;
*s=*p;
*p=temp;
s++;
p--;
}
return p;

}
char * my_strrev2(char *s,const int num)
{
int i,j;
int t;
for(i=0,j=num;i<j;i++,j--)
{
t=s[i];
s[i]=s[j];
s[j]=t;
}
return s;

}
char * my_strrev(char *g)
{
	int i,len,j,t;
	len=my_strlen(g);
	for(i=0,j=len-1;i<j;i++,j--)
	{
		t=g[i];
		g[i]=g[j];
		g[j]=t;

	}
	return g;
}
char * my_strrev1(char *g,const char ch)
{
	char *t;
	if(t=my_strchr(g,ch))
		my_strrev(t);

	return g;
}
char * lower_upper(char *g)
{
	int i;
	for(i=0;g[i];i++)
	{
		if(g[i]>='a' && g[i]<='z')
			g[i]=g[i]-32;
	}
	return g;
}
void set_clear_count(const int n)
{
	int pos,c,c1;
	for(pos=0,c=0,c1=0;pos<=31;pos++)
	{
		if(n>>pos&1)
			c++;
		else
			c1++;
	}
	printf("set bit count=%d clear bit count=%d\n",c,c1);
}
void my_print(const char *s)
{
	int i;
	for(i=0;*s;i++)
		printf("%c",*s++);
	printf("\n");
}
int my_strlen(const char *p)
{
	unsigned long int len;
	for(len=0;p[len];len++);
	return len;

}
char * my_strcpy(char *k,const char *l)
{
	int i;
	for(i=0;l[i];i++)
		k[i]=l[i];
	k[i]='\0';
	return k;

}
int my_strcmp(const char *s,const char *d)
{

	int i,k;
	for(i=0;s[i];i++)
	{
		k=s[i]-d[i];
		if(k!=0)
			return k;
	}

	return k;
}

char * my_strcat(char *d,const char *s)
{
	int len,i,j;
	len=my_strlen(d);
	for(i=0,j=len;s[i];i++,j++)
		d[j]=s[i];
	d[j]=s[i];
	return d;


}

char * my_strchr(char *s,const char ch)
{
	int i;
	for(i=0;s[i];i++)
	{
		if(s[i]==ch)
			return &s[i];
	}
	return 0;

}

char * my_strstr(char *m,const char *sub)
{
	int i,j,k;
	for(i=0,j=0;m[i];i++)
	{
		if(m[i]==sub[j])
		{
			j++;
			for(k=i+1;sub[j];j++,k++)
			{
				if(m[k]!=sub[j])
					break;
			}
		}

		if(sub[j]=='\0')
			return &m[i];
	}	

	return &m[i];
}





