//WAP to store roll nos.of 3 batches students each batch is having 5 students.
 
#include<stdio.h>
void main()
{

 int n,n1,i,j;
printf("enter no.of batches\n");
scanf("%d",&n);
printf("enter no.of students in each batch\n");
scanf("%d",&n1);

/*int b1[n],b2[n],b3[n],i;

printf("enter batch1 students roll numbers\n");
for(i=0;i<n;i++)
scanf("%d",b1+i);

printf("enter batch2 students roll numbers\n");
for(i=0;i<n;i++)
scanf("%d",b2+i);

printf("enter batch3 students roll numbers\n");
for(i=0;i<n;i++)
scanf("%d",b3+i);


printf("batch1 students roll numbers = ");
for(i=0;i<n;i++)
printf("%d ",*(b1+i));
printf("\n");

printf("batch2 students roll numbers = ");
for(i=0;i<n;i++)
printf("%d ",*(b2+i));
printf("\n");

printf("batch3 students roll numbers = ");
for(i=0;i<n;i++)
printf("%d ",*(b3+i));
printf("\n");   insteadof doing all these  we use 2d array*/



int b[n][n1];


printf("enter students roll numbers of each batch\n");
for(i=0;i<n;i++)
{
for(j=0;j<n1;j++)
scanf("%d",&b[i][j]);
}


for(i=0;i<n;i++)
{
printf("batch%d students roll nos= ",*(b[0]+i));
for(j=0;j<n1;j++)
printf("%d ",b[i][j]);
printf("\n");
}









}
