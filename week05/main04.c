#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int year, a;
	
	printf("Input the year: ");
	scanf("%d",&year);
	a = (year%4==0 && year%100!=0) || (year%400==0);
	printf("Is the year %d the leaf year? %d", year, a);
	
	return 0;
}
