#include <stdio.h>
#include <stdlib.h>
#define STUDENTNUM 4

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student{
	int ID;
	int score;
};

int main(int argc, char *argv[]) {
	struct student s[STUDENTNUM];
	double avg;
	int i;
	int highID = 0;
	int highScore = 0;
	
	for(i=0; i<STUDENTNUM; i++){
		printf("Input the ID: ");
		scanf("%d", &s[i].ID);
		printf("Input the score: ");
		scanf("%d", &s[i].score);
	}
	
	avg = (double)(s[0].score + s[1].score + s[2].score + s[3].score) / 4;
	printf("The averge of the score: %f\n", avg);
	
	for(i=0; i<STUDENTNUM; i++){
		if (s[i].score > highScore)
			highScore = s[i].score;
	};
		
	for(i=0; i<STUDENTNUM; i++){
		if (s[i].score == highScore)
			highID = s[i].ID;
	};
	
	printf("The highest score - ID: %d, score: %d", highID, highScore);
	return 0;
}
