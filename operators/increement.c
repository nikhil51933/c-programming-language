#include<stdio.h>
void main()
{
int i,j;
// pre-increement
i=10;
printf("i=%d\n",i);
++i;
printf("i=%d\n\n",i);
// post-increement
i=10;
printf("i=%d\n",i);
i++;
printf("i=%d\n\n",i);
// pre-increement : first value gets increemented and assigned to variable
i=10;
printf("i=%d\n",i);
j=++i;
printf("i=%d j=%d\n\n",i,j);
//post-increement : first value is assigned to variable and after increements
i=10;
printf("i=%d\n",i);
j=i++;
printf("i=%d j=%d\n\n",i,j);
// pre-increement
i=10;
printf("i=%d\n",i);
j=++i;
printf("j=%d i=%d\n\n",j,i);
//post-increement
i=10;
printf("i=%d\n",i);
j=i++;
printf("j=%d i=%d\n",j,i);
}
