#include <stdio.h>	

int main(){	
	float principal = 250000.00;	
	float rate = 8.5; 
	int time = 3; 
	float interest = (principal * rate * time)/(100.0);
	float payable = principal + interest ;
	float installment = payable/(time * 12.0);
	
	printf("================ BANK LOAN INTEREST SUMMARY ================  \n");
	printf("Principal Amount: PKR %.2f  \n", principal);
	printf("Annual Interest Rate: %.2f%%  \n", rate);
	printf("Loan Duration: %d Years (36 Months)  \n", time);
	printf("------------------------------------------------------------  \n");
	printf("Total Accrued Interest: PKR %.2f  \n", interest);
	printf("Total Payable Amount: PKR %.2f \n", payable);
	printf("Monthly Installment: PKR %.2f  \n", installment);
	printf("============================================================  \n\n\n");
	
	
	
	return 0;	
}
