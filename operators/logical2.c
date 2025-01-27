#include<stdio.h>
void main()
{
// if we give a bigger expression
int i,j,k,l,m,r;
i=10,j=20,k=30,l=40,m=10;
printf("i=%d j=%d k=%d l=%d m=%d\n",i,j,k,l,m);

r=i&&(j=300)||(k=123)&&(l=400)||(m=2134);
printf("r=%d\n\n",r);

// if i=0;
i=0,j=20,k=30,l=40,m=10;
printf("i=%d j=%d k=%d l=%d m=%d\n",i,j,k,l,m);

r=i&&(j=300)||(k=123)&&(l=400)||(m=2134);
printf("r=%d\n\n",r);
// replace logical AND(&&) with OR(||)  and OR with AND
i=10,j=20,k=30,l=40,m=10;
printf("i=%d j=%d k=%d l=%d m=%d\n",i,j,k,l,m);

r=i||(j=300)&&(k=123)||(l=400)&&(m=2134);
printf("r=%d\n\n",r);

// if i=0;
i=0,j=20,k=30,l=40,m=10;
printf("i=%d j=%d k=%d l=%d m=%d\n",i,j,k,l,m);

r=i||(j=300)&&(k=123)||(l=400)&&(m=2134);
printf("r=%d\n\n",r);

// if all operands are zeroes
i=0,j=0,k=0,l=0,m=0;
printf("i=%d j=%d k=%d l=%d m=%d\n",i,j,k,l,m);

r=i||(j=300)&&(k=123)||(l=400)&&(m=2134);
printf("r=%d\n\n",r);

// if all operands are zeroes and replace AND(&&) with OR(||)
i=0,j=0,k=0,l=0,m=0;
printf("i=%d j=%d k=%d l=%d m=%d\n",i,j,k,l,m);

r=i&&(j=300)||(k=123)&&(l=400)||(m=2134);
printf("r=%d\n\n",r);

// if all operands are zeroes
i=0,j=0,k=0,l=0,m=0;
printf("i=%d j=%d k=%d l=%d m=%d\n",i,j,k,l,m);

r=i||(j=00)&&(k=0)||(l=00)&&(m=0);
printf("r=%d\n\n",r);
}
