//nested structre for dob doj

#include<stdio.h>
struct st
{
	int rollno;
	char name[20];
	float f;
	struct date 
	{
		int day,month,year;
	};
};
void main()
{
	struct date dob,doj;
	struct st v;
	dob.day=10;
	dob.month=11;
	dob.year=1947;
	doj.day=10;
	doj.month=11;
	doj.year=1948;
	printf("DOB=%d %d %d\n",dob.day,dob.month,dob.year);
	printf("DOJ=%d %d %d\n",doj.day,doj.month,doj.year);
v.rollno=1;
v.name[20]="virat";
v.marks=23.5;
printf("%d %s %f %d %d\n",v.rollno,v.name,v.marks,v.dob,v.doj); 
}
