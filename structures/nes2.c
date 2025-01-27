

#include<stdio.h>
struct date 
{
	int day,month,year;
}dob,doj;
struct st
{
	int rollno;
	char name[20];
	float marks;
	struct date dob,doj;
}v;
void main()
{
	v.dob.day=20;
	v.dob.month=02;
	v.dob.year=1996;
	v.doj.day=30;
	v.doj.month=02;
	v.doj.year=1999;
	printf("%d:%d:%d\n",v.dob.day,v.dob.month,v.dob.year);
	printf("%d:%d:%d\n",v.doj.day,v.doj.month,v.doj.year);

	v.rollno=1;
	v.name[20]="virat";
	v.marks=23.5;
	printf("%d %s %f %d %d\n",v.rollno,v.name,v.marks,v.dob.day.month.year,v.doj.day.month.year); 
}
