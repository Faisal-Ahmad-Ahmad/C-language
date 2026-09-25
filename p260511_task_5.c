#include <stdio.h>

int main(){

	float radius = 7.5;
	float pi = 3.14159;
	float diameter = 2 * radius;
	float circumference = 2 * pi * radius;
	float area = pi * radius * radius;
	
	printf("================ CIRCLE GEOMETRY REPORT ================  \n");
	printf("Given Radius: \t\t\t %.3f cm  \n", radius);
	printf("Calculated Diameter: \t\t %.3f cm  \n", diameter);
	printf("Calculated Circumference: \t %.3f cm \n", circumference);
	printf("Calculated Area: \t\t %.3f sq.cm  \n", area);
	printf("========================================================  \n\n\n");
	
	return 0 ;
}
