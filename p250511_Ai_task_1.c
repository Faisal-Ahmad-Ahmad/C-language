/*
Write a C program that takes three side lengths, a, b, and c, as input. First check whether
they can form a valid triangle: each side must be less than the sum of the other two. If not,
display "Not a valid triangle". If they do form a triangle, use nested if / else statements
to classify it as:
▶ Equilateral – all three sides equal,
▶ Isosceles – exactly two sides equal,
▶ Scalene – no sides equal.
Test your program with (2, 2, 2), (3, 3, 5), (4, 5, 6), and (1, 2, 10).
*/

#include<stdio.h>
int main(){


float a, b, c;

printf("Enter three sides of a triangle: \n");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);

if(a+b>c)
{
if(a==b){
if(b==c)
if(a==c)
printf("Equilaterial");
}

if(a==b){
if(a!=c)
printf("Isosceles");
}
else if(a==c){
if(a!=b)
printf("Isosceles");
}
else if(b==c){
if(a!=c)
printf("Isosceles");
}
if(a!=b)
if(a!=c)
if(b!=c)
printf("Scalene");
}

else if(b+c>a){
if(a==b)
if(b==c)
if(a==c)
printf("Equilaterial");

if(a==b)
printf("Isosceles");
else if(a==c)
printf("Isosceles");
else if(b==c)
printf("Isosceles");

if(a!=b)
printf("Scalene");
else if(a!=c)
printf("Scalene");
else if(b!=c)
printf("Scalene");
}

else
printf("Not a Valid Triangle");

return 0;
}
