#include <stdio.h>
int main(){
/*
Ali and Mo have a watermelon that weighs w kilograms, where w is a positive integer entered at
runtime. They want to split it between themselves into exactly two pieces such that:
? each piece weighs a positive whole number of kilograms, and
? each piece’s weight is even.
The two piece weights do not need to be equal to each other– they only need to each be even,
positive, and add up to w. Write a C program that reads w and prints "YES" if such a split
exists, or "NO" if it does not.
Requirement: Use only if/else (nested or combined with &&/||); no loops, arrays, or the
ternary operator. Test your program with w = 1, 2, 3, 4, 7, 8, and 100, and confirm each answer
by hand before you trust your program.
*/
	
int w;

printf("Enter the weight of watermelon: \n");
scanf("%d", &w);

if(w%2==0)
if(w>2)
	printf("Yes\n");
if(w==2)	
	printf("No\n");
if(w%2!=0)
	printf("No\n");	

	
	return 0;
}
