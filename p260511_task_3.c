#include <stdio.h>

int main(){
	
	char _char = 'M';
	int _int = 42;
	float _float = 3.141590;
	double _double = 98.765432;

	int size_char, size_int, size_float, size_double; 
	
	size_char = sizeof(char);
	size_int = sizeof(int);
	size_float = sizeof(float);
	size_double = sizeof(double);

	printf("Type Name \t Variable \t Size in Memory \n");
	printf("------------------------------------------------------ \n");
	printf("char \t\t '%c' \t\t %d byte(s) \n",_char, size_char);
	printf("int \t\t %d \t\t %d byte(s) \n",_int, size_int);
	printf("float \t\t %f \t %d byte(s) \n", _float, size_float);
	printf("double \t\t %f \t %d byte(s) \n", _double, size_double);
	printf("------------------------------------------------------ \n");

	return 0;	
	
}
