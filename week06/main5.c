#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num1, num2, result;
	char op;
	
	printf("Enter the calculation: ");
	scanf("%i %c %i",&num1, &op, &num2);
	
	if (op == 42)
		result = num1 * num2;
	else if (op == 43)
		result = num1 + num2;
	else if (op == 45)
		result = num1 - num2;
	else if (op == 47)
		result = num1 / num2;
		
	printf("= %i", result);
		
	return 0;
}
