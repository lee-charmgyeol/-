#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int answer = 50;
	int num;
	int trials = 1;
	
	do
	{
		
	printf("Guess a number: ");
	scanf("%i", &num);
	
	if (num > answer)
		printf("High!\n");
	else if ( num < answer)
		printf("Low!\n");
	else
		printf("Congratulation! Trials: %i", trials);
	
	trials = trials + 1;
	}
	while (num != answer); 
	
	return 0;
}
