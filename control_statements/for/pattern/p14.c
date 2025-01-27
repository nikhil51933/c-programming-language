/*          *
	   * *
	  * * *
	 * * * *
        * * * * *
 	 * * * *
	  * * *
           * *
            *           */

#include<stdio.h>
void main()
{
int i,j,k,row;
printf("enter no.of rows to print\n");
scanf("%d",&row);
//////////// for first half
for(i=0 ; i<(row/2)+1 ; i++)
{
	for(j=0 ; j<(row/2)-i ; j++)
		printf(" ");

	for(k=0 ; k<i+1 ; k++)
		printf("* ");

	printf("\n");
}
////// for second half
for(i=0 ; i<(row/2) ; i++)
{
	for(j=0 ; j<i+1 ; j++)
		printf(" ");

	for(k=0 ; k<(row/2)-i ; k++)
		printf("* ");

	printf("\n");
}

}
