#include <stdio.h>

int main(){
	
	int tea_quantity = 3;
	float tea_price = 60.00;
	float tea_total = tea_quantity * tea_price;
	
	int samosa_quantity = 4;
	float samosa_price = 40.50;
	float samosa_total = samosa_quantity * samosa_price;
	
	int chicken_quantity = 2;
	float chicken_price = 120.00;
	float chicken_total = chicken_quantity * chicken_price;
	
	float subtotal = (tea_quantity * tea_price) + (samosa_quantity * samosa_price) + (chicken_quantity * chicken_price);
	float tax = subtotal * .16;
	float grand_total = subtotal + tax;
	
	printf("\n===================== FAST CAFETERIA RECEIPT =====================  \n\n");
	printf("Item \t\t Qty \t Unit Price (PKR) \t Subtotal (PKR)  \n");
	printf("------------------------------------------------------------------  \n");
	printf("Tea \t\t %d \t %.2f \t\t\t %.2f  \n", tea_quantity, tea_price, tea_total);
	printf("Samosa \t\t %d \t %.2f \t\t\t %.2f  \n", samosa_quantity, samosa_price, samosa_total);
	printf("Chicken Roll \t %d \t %.2f \t\t %.2f  \n", chicken_quantity, chicken_price, chicken_total);
	printf("------------------------------------------------------------------  \n");
	printf("Subtotal: PKR \t\t\t\t\t %.2f  \n", subtotal);
	printf("GST (16%): PKR \t\t\t\t\t %.2f  \n", tax);
	printf("------------------------------------------------------------------  \n");
	printf("Grand Total: PKR \t\t\t\t %.2f  \n\n", grand_total);
	printf("================= THANK YOU FOR YOUR VISIT =======================  \n\n\n\n\n");
	
		
	return 0;
}
