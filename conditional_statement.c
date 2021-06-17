#include<stdio.h>
void main()
{
	int marks;
	printf("Enter marks of student out of 100:\n ");
	scanf("%d",&marks);
	printf("GRADE OF STUDENT IS :\n");
	if(marks<40)
	{
		printf("\aGrade F");
	}
	else if(marks>=40 && marks<=54)
	{
		printf("Grade D");
	}
	else if(marks>=55 && marks<=69)
	{
		printf("Grade C");
	}
	else if(marks>=70 && marks<=84)
	{
		printf("Grade B");
	}
	else if(marks>=85 && marks<=100)
	{
		printf("Grade A");
	}
	else
	{
		printf("Please Enter Marks Out Off 100");
	}
}
