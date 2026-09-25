#include <stdio.h>

int main(){

	double salary = 85000.00;
	double rent_allowance = (0.20 * salary);
	double medical_allowance = (0.10 * salary);
	double gross_salary = salary + rent_allowance + medical_allowance;
	double tax_deduction = (0.05 *gross_salary);
	double net_salary = gross_salary - tax_deduction;
	
	printf("================= MONTHLY SALARY SLIP ==================  \n");
	printf("Basic Salary: \t\t\t PKR %.2f  \n", salary);
	printf("House Rent Allowance (20%%): \t PKR %.2f  \n",rent_allowance);
	printf("Medical Allowance (10%%): \t PKR %.2f  \n",medical_allowance);
	printf("--------------------------------------------------------\n");
	printf("Gross Salary: \t\t\t PKR %.2f  \n", gross_salary);
	printf("Tax Deduction (5%%): \t\t PKR %.2f  \n" , tax_deduction);
	printf("--------------------------------------------------------  \n");
	printf("Net Payable Salary: \t\t PKR %.2f  \n", net_salary);
	printf("========================================================  \n\n\n");






	return 0;
}
