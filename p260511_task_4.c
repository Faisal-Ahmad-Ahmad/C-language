#include <stdio.h>

int main(){	
	
	float celsius = 37.5;
	float fahrenheit = (celsius* 9.0/5.0)+32.0;
	float kelvin = celsius + 273.15;

	printf("================ TEMPERATURE CONVERSION =================  \n");
	printf("Temperature in Celsius: \t %.2f °C  \n",celsius);
	printf("Temperature in Fahrenheit: \t %.2f °F  \n",fahrenheit);
	printf("Temperature in Kelvin: \t\t %.2f K  \n" ,kelvin);
	printf("=========================================================  \n\n");
	
	return 0;
}
