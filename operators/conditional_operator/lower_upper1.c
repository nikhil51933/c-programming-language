#include<stdio.h>
void main()
{
//checking given alpabet is upcase or locase if it is upcase convert it into lower case and viceversa

char ch='A';
printf("before converting ch=%c\n",ch);

// checking uppercase or lowercase
ch>>5&1?printf("lower case\n"):printf("upper case\n");

// converting upercase to lower case and lower to uppercase.
ch=ch^1<<5;
printf("after converting ch=%c\n",ch);

ch='d';
printf("before converting ch=%c\n",ch);

// checking uppercase or lowercase
ch>>5&1?printf("lower case\n"):printf("upper case\n");

// converting upercase to lower case and lower to uppercase.
ch=ch^1<<5;
printf("after converting ch=%c\n",ch);
}
