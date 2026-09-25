#include <stdio.h>
#include <math.h>
int main(){
/*
Write a C program that takes a person’s weight in kilograms and height in metres as input and
computes the Body Mass Index using
BMI = weight/(height × height).
Using an if/else if/else ladder, classify and display the result as:
? Underweight– BMI below 18.5,
? Normal– BMI from 18.5 up to (but not including) 25,
? Overweight– BMI from 25 up to (but not including) 30,
? Obese– BMI of 30 or above.
Display the computed BMI value along with its category. Test your program with weight 70 kg/ height 1.75 m, and with weight 95 kg / height 1.70 m.
*/
	
float weight, height, bmi;

printf("Enter your weight(kg) and height(meters): \n");
scanf("%f", &weight);
scanf("%f", &height);

bmi=(weight/(height*height));

printf("Your BMI is: %f \nYou are ", bmi);


if(bmi<18.5)
	printf("Underweight.");

if(bmi>=18.5){
if(bmi<25)
	printf("Normal.");
}
if(bmi>=25){
if(bmi<30)
	printf("Overweight.");	
}
else if(bmi>=30)
	printf("Obese.");
	
	
	
	
	
	
	return 0;
}
