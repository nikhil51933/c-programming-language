#include<stdio.h>
void main()
{
char ch=97;
printf("decimal/integer value of ch=%d\ncharacter/ASCII value of ch=%c\noctal value of ch=%o\nhexadecimal value of ch=%x\n\n",ch,ch,ch,ch);
ch=ch+3;
printf("decimal/integer value of ch+3=%d\ncharacter/ASCII value of ch+3=%c\noctal value of ch+3=%o\nhexadecimal value of ch+3=%x\n\n",ch,ch,ch,ch);
ch=ch*2;
printf("decimal/integer value of ch*2=%d\ncharacter/ASCII value of ch*2=%c\noctal value of ch*2=%o\nhexadecimal value of ch*2=%x\n\n",ch,ch,ch,ch);
ch=ch+60;
printf("decimal/integer value of ch+60=%d\ncharacter/ASCII value of ch+60=%c\noctal value of ch+60=%o\nhexadecimal value of ch+60=%x\n",ch,ch,ch,ch);
}

