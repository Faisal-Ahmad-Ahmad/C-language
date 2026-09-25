#include <stdio.h>
int main(){
/*
Write a C program that takes three distinct integers, a, b, and c, as input and finds the largest
value using nested if/else statements only– do not use the ternary operator or any built-in
maximum function. Display which variable (a, b, or c) holds the largest value and what that
value is. Test your program with (12, 45, 7), (100, 20, 99), and (-5,-1,-8).
*/	
	
int a,b,c;

printf("Enter three numbers (a,b,c): \n");
scanf("%d", &a);
scanf("%d", &b);
scanf("%d", &c);

if(a>b){
if(a>c)
	printf("%d is the highest.", a);
}
if(b>a){
if(b>c)	
	printf("%d is the highest.", b);
}
if(c>a){
if(c>b)
	printf("%d is the gratest.", c);		
}
	
	
	return 0;
}
