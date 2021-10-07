#include<stdio.h>

void main()
{
	//Declare and Assign Variables
	int num1;
	int num2, num3;
	int daysOfWeek = 7;
	int monthsYear = 12, num6;

	float ex1;
	float ex2, ex3;
	float interestRate = 0.7 ;
	float principal = 125.5;

	char letter;
	char letter2 = 'F';

	//Calculations and Print to screen

	//Will throw Error as num2 and num1 are not intalized
	//num3 = num2 * num1;
	//printf("The value of num3 is %d\n", num3);

	num3 = 9 / 5;
	printf("The values of num3 is %d\n",num3);

	num3 = 9.0 / 5.0;
	printf("The values of num3 is %d\n", num3);

	ex1 = 9 / 5;
	printf("The values of ex1 is %f\n", ex1);

	ex1 = 9.0 / 5.0;
	printf("The values of ex1 is %f\n\n", ex1);

	printf("Days of Week %d, InterestRate %f, Letter %c\n\n", daysOfWeek, interestRate, letter2);

	//ScanF
	printf("Please enter integer    "); 
	scanf("%d", &num1);

	printf("\nThe value of Num1 is %d\n\n", num1);


	printf("Please enter a floating number and a letter   ");
	scanf("%f %c", &ex1, &letter);

	printf("\nThe value of ex1 is %f and letter is %c \n\n", ex1, letter);
}