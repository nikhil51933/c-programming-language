
#include<stdio.h>
int print(char *);
void main()
{
char s[30];
printf("enter any string\n");
scanf("%s",s);
int l;
l=print(s);
printf("length=%d\n",l);


}
int print(char *s)
{
/*static int len=0;
if(*s)
{
len++;
print(s+1);

}
else
return len;*/
if(*s)
return 1+print(s+1);
else
return 0;


}
