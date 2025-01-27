//to read o/p from file

#include<stdio.h>
#include<stdlib.h>
void main(int argc,char **argv)
{
if(argc!=2)
{
printf("usage:a.out filename\n");
return;
}
FILE *fp;
fp=fopen(argv[1],"r");
struct st
{
int rollno;
char name[20];
float marks;

}**p;
p=calloc(5,sizeof(struct st));
int i;
for(i=0;i<5;i++)
p[i]=malloc(sizeof(struct st));

for(i=0;i<5;i++)
{

fscanf(fp,"%d ",&p[i]->rollno);
fscanf(fp,"%s ",p[i]->name);
fscanf(fp,"%f ",&p[i]->marks);
//fscanf(fp,"\n");

}

for(i=0;i<5;i++)
printf("%d %s %f\n",p[i]->rollno,p[i]->name,p[i]->marks);
}
