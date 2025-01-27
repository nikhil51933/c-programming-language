//WAP to show the behaviour of increment operator in pointers

#include<stdio.h>
void main()
{
int i=257,pos;
char *cp;
cp=(char *)&i;

printf("binary of num is:\n");
for(pos=31;pos>=0;pos--)
{
printf("%d",i>>pos&1);
if(pos%8==0)
printf(" ");
}

printf("\ncp=%p  *cp=%d\n",cp,*cp); 
for(pos=7;pos>=0;pos--)
printf("%d",*cp>>pos&1);

++*cp;
printf("\ncp=%p  *cp=%d\n",cp,*cp); 
for(pos=7;pos>=0;pos--)
printf("%d",*cp>>pos&1);

*cp++;
printf("\ncp=%p  *cp=%d\n",cp,*cp); 
for(pos=7;pos>=0;pos--)
printf("%d",*cp>>pos&1);

*++cp;
printf("\ncp=%p  *cp=%d\n",cp,*cp); 
for(pos=7;pos>=0;pos--)
printf("%d",*cp>>pos&1);

//cp++*;   //error
++(*cp);
printf("\ncp=%p  *cp=%d\n",cp,*cp); 
for(pos=7;pos>=0;pos--)
printf("%d",*cp>>pos&1);

(*cp)++;
printf("\ncp=%p  *cp=%d\n",cp,*cp); 
for(pos=7;pos>=0;pos--)
printf("%d",*cp>>pos&1);

printf("\nbinary of num is:%d\n",i);
for(pos=31;pos>=0;pos--)
{
printf("%d",i>>pos&1);
if(pos%8==0)
printf(" ");
}
printf("\n");
}



