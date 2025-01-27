#include<stdio.h>
void main()
{
//checking and converting lo to upcase whether it is uppercase print its ascii value
char ch;
printf("enter any character..\n");
scanf("%c",&ch);

ch>>5&1?printf("lower case\nch=%c\n",ch^1<<5):printf("upper case\nASCII=%d\n",ch);
// below is the right expression. it gives accurate data remaning exprsns does not give accurate data.
(ch<97 && ch>64)?printf("upper case\nASCII=%d\n",ch):printf("lower case\nch=%c\n",ch^1<<5);

ch&32?printf("lower case\nch=%c\n",ch^1<<5):printf("upper case\nASCII=%d\n",ch);
}
