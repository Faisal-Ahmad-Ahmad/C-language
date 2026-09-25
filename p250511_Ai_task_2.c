#include<stdio.h>
int main(){
/*
Write a C program that takes a year as input and determines whether it is a leap year. A year
is a leap year if it is divisible by 4, unless it is also divisible by 100 – in which case it must
also be divisible by 400 to still be a leap year. Display "Leap Year" or "Not a Leap Year".
Requirement: Do not combine the conditions with && or || into a single if; test them one
at a time using nested if / else statements. Test your program with 2024, 1900, and 2000.
*/

int year;

printf("Enter year: ");
scanf("%d", &year);

if(year%4==0){
	if(year%100!=0)
		printf("leap year");
	else{
		if(year%400 == 0)
		printf("leaf year");
		else
		printf("not leaf year");}}
else
	printf("Not leaf year");
	
getch();

	return 0;
}
