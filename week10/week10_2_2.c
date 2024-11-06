#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, average;
	int sum;
	int grade[SIZE];
	
	sum = 0;
	for(i=0;i<SIZE;i++)
	{
		printf("enter grades of 5 students: ");
		scanf("%d", &grade[i]);
		sum += grade[i];
	}
	
	average = sum / SIZE;
	printf("average of grades : %d\n",average);
	return 0;
}
