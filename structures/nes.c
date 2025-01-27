//nested structre for dob doj

#include<stdio.h>
struct date
{
int day,month,year;

}dob,doj;
void main()
{
//struct date dob,doj;
dob.day=10;
dob.month=11;
dob.year=1947;
doj.day=10;
doj.month=11;
doj.year=1948;
printf("DOB=%d %d %d\n",dob.day,dob.month,dob.year);
printf("DOJ=%d %d %d\n",doj.day,doj.month,doj.year);

}
