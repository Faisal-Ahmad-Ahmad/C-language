#include <stdio.h>
int main(){
/*	
Write a C program that takes the coordinates x and y of a point as input. Using an if/else
if/else ladder, determine and display exactly one of the following: Quadrant I, Quadrant
II, Quadrant III, Quadrant IV, Origin (if x = 0 and y = 0), On the X-axis (if y = 0 and
x ? = 0), or On the Y-axis (if x = 0 and y ? = 0). Test your program with 
(3, 5), (-2, 4), (-1,-6), (7,-3), (0, 0), (5, 0), and (0,-5).	
*/	
	int x, y;
	
	printf("Enter the cordinates (x,y): \n");
	scanf("%d", &x);
	scanf("%d", &y);
	
	
	if(x==0)
	if(y==0)
		printf("Point is at origin.");

	if(x==0)
	if(y>0)
		printf("Point is at y-axis at positve side.");	

	if(x==0)
	if(y<0)
		printf("Point is at y-axis at negative side.");	

	if(y==0)
	if(x>0)
		printf("Point is at x-axis at positve side.");	

	if(y==0)
	if(x<0)
		printf("Point is at x-axis at negaive side.");	

		
	if(x>0)
	if (y>0)
		printf("Point is at First quadrant.");
	
	if(x<0)
	if (y<0)
		printf("Point is at Third quadrant.");

	if(x>0)
	if (y<0)
		printf("Point is at Fourth quadrant.");

	if(x<0)
	if (y>0)
		printf("Point is at Second quadrant.");
	 
	
	
	
	

	return 0;
}
