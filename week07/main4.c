#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int get_integer()
{
	int a;
	printf("Enter the value: ");
	scanf("%i", &a);
	return a;
}

int factorial(int a)
{
	int res = 1;
	int i;
	
	for(i=1; i<=a ; i++)
		res = res*i;
	return res;
}

int combination(int n, int c)
{
	int a, b, d, res;
	a = factorial(n);
	b = factorial(n-c);
	d = factorial(c);
	res = a / ( b * d );
	return res;
	
}

int main(int argc, char *argv[]) {
	int a, b, c;
	
	a = get_integer();
	b = get_integer();
	c = combination(a, b);
	printf("The result of C(%i, %i) is %i", a, b, c);

	return 0;
}
