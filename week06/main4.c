#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a;
	int i;
	int sum=0;
	
	printf("Enter a number: ");
	scanf("%i", &a);
	
	for (i=0; i<(a+1) ; i++)
	{
		sum = sum + i;
	}
	
	printf("The result is %i", sum);
	
	return 0;
}
