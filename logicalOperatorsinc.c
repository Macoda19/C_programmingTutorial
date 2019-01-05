/*
	GRADING SYSTEM-using LOGICAL Operators
		90<marks<100 -- A
		75<marks<90  -- B
		50<marks<75  -- C
		25<marks<50  -- D
		marks<25	 -- F(fail)
*/		
#include <stdio.h>

void main() 
{
	int marks;
	printf("enter the marks obtained in percentage  :  ");
	scanf("%d",&marks);
	char grade;
	
	if((marks<=100)&&(marks>90))//and
		{
			grade = 'A' ;
		}
	else if((marks<=90)&&(marks>75))//and
		{
			grade = 'B' ;
		}
	else if((marks<=75)&&(marks>50))//and
		{
			grade='C';
		}
	else if((marks<=50)&&(marks>25))//and
		{
			grade='D' ;	
		}	
	else if((marks<=25)&&(marks>=0))//and
		{
			grade='F';
		}
	else
		{
			printf("Please enter your percentage marks in Range between 0 and 100\n");
			grade='n';
		}	
	if(grade!='n')
		{
			printf("Your grade is %c\n",grade);
			if(!(grade=='F'))//not
			{
				printf("You have qualified the exam\n");
			}
			if((grade=='A')||(grade=='B')) //or
				{
					printf("Congratulations!!!");
				}
			if((grade=='C')||(grade=='D'))	//or
				{
					printf("Work hard.Good luck.");
				}
			if(grade=='F')
				{
					printf("Sorry you have failed.Work hard to pass next time");
				}
		}
}
