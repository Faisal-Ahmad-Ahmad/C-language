#include <stdio.h>

int main(){
	
	float pf_marks = 88.0;
	int pf_credit = 3;
	float ca_marks = 76.5;
	int ca_credit = 3;
	float ap_marks = 82.0;
	int ap_credit = 2;

	float total_weight = (88.0 * 3) + (76.5 * 3) + (82.0 * 2);
	int total_credit = 8;
	float weight_ave = total_weight / total_credit;
	
	
	printf("\n================ SEMESTER ACADEMIC REPORT =================  \n");
	printf("Course \t\t\t Credit Hours \t Obtained Marks  \n");
	printf("-----------------------------------------------------------  \n");
	printf("Programming Fund.  \t %d \t\t %.2f \n", pf_credit , pf_marks);
	printf("Calculus \t\t %d  \t\t %.2f  \n", ca_credit, ca_marks);
	printf("Applied Physics \t %d \t\t %.2f  \n", ap_credit, ap_marks);
	printf("-----------------------------------------------------------  \n");
	printf("Total Credits: \t\t %d \t Weighted Average: %.2f%%  \n", total_credit, weight_ave);
	printf("===========================================================  \n\n\n\n\n");
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
