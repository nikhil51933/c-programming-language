#include<stdio.h>
void main()
{
// printing given alphabet is uppercase or lowercase
char ch,pos=5;
printf("enter any alphabet..\n");
scanf("%c",&ch);

ch<97?printf("upper case\n"):printf("lower case\n");// using relational operator
//64>ch<97?printf("upper case\n"):printf("lower case\n");// using relational operator
ch>>5&1?printf("lower case\n"):printf("upper case\n");

ch='-a';
printf("ch=%c\n",ch);
ch<97?printf("upper case\n"):printf("lower case\n");// using relational operator
//64>ch<97?printf("upper case\n"):printf("lower case\n");// using relational operator
ch>>5&1?printf("lower case\n"):printf("upper case\n"); // warning

ch='Z';
printf("ch=%c\n",ch);
ch<97?printf("upper case\n"):printf("lower case\n");// using relational operator
//64>ch<97?printf("upper case\n"):printf("lower case\n");// using relational operator
ch>>5&1?printf("lower case\n"):printf("upper case\n");

}
