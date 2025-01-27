#include<stdio.h>
char * my_strstr(char *,const char *);
void main()
{
char m[20],sub[20];
//printf("jsj\n");
scanf(" %s",m);
scanf(" %s",sub);
printf("%s %s\n",m,sub);
char *t;
t=my_strstr(m,sub);
printf(" %s %s\n",m,sub);
printf(" %s\n",t);



}
char * my_strstr(char *m,const char *sub)
{


	int i,j,k;
	for(i=0,j=0;m[i];i++)
	{
//printf("hjk\n");
		if(m[i]==sub[j])
		{
			j++;
			for(k=i+1;sub[j];j++,k++)
			{
				if(m[k]!=sub[j])
					break;
			}
		}

		if(m[k-1]==sub[j-1])
			return &m[i];

}	

return m;
}








