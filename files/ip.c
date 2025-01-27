//to store inputs

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
fp=fopen(argv[1],"w");
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

scanf("%d",&p[i]->rollno);
scanf(" %s",p[i]->name);
scanf(" %f",&p[i]->marks);
fprintf(fp,"%d ",p[i]->rollno);
fprintf(fp,"%s ",p[i]->name);
fprintf(fp,"%f ",p[i]->marks);
fprintf(fp,"\n");

}

for(i=0;i<5;i++)
printf("%d %s %f\n",p[i]->rollno,p[i]->name,p[i]->marks);
}
