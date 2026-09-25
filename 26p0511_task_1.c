#include <stdio.h>

int main(){
	
	int year = 2026;
	char section = 'A';
	float score = 68.98;
	double fee = 232500.50;
	
	printf("======================================================\n");
	printf("\tFAST-NUCES STUDENT PROFILE CARD\n");
	printf("======================================================\n\n");
	
	printf("Batch Year:\t%d\n",year);
	printf("Section:\t%c\n",section);
	printf("Test Score:\t%.2f\n",score);
	printf("Semester Fee:\tPKR %.2lf\n",fee);
	printf("Motto:\t\t\"Small daily steps lead to big success\"\n\n");
	printf("======================================================");
	
	return 0;
	
}
