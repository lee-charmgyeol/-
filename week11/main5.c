#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char word1[12];
	char word2[12];
	char word3[12];
	
	printf("input a word:");
	scanf("%s",&word1);
	printf("input a word:");
	scanf("%s",&word2);
	printf("input a word:");
	scanf("%s",&word3);
	
	FILE *fp;
	fp = fopen("sample.txt","w");
	fprintf(fp, "%s\n",word1);
	fprintf(fp, "%s\n",word2);
	fprintf(fp, "%s\n",word3);
	fclose(fp);
	
	return 0;
}
