#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student{
	int	ID;
	char name[10];
	double grade;	
};

int main(int argc, char *argv[]) {
	struct student s1 = {0, "name", 0};
	
	scanf("%d %s %lf",&s1.ID, &s1.name, &s1.grade);

	printf("ID: %d\n", s1.ID);
	printf("name: %s\n", s1.name);
	printf("grade: %f", s1.grade);
	 
	return 0;
}
