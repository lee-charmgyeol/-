#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
int main(int argc, char *argv[]) {
	FILE *fp = NULL;
	char c;
	
	fp = fopen("sample.txt", "r");
	
	if (fp == NULL)
		printf("Unable to open the file\n");
	
	 while ((c = fgetc(fp)) != EOF) { 
        putchar(c);  
    }

	
	fclose(fp);
}
*/

int main(int argc, char *argv[]) {
		FILE *fp = NULL;
		fp = fopen("sample.txt", "r");
		char str[15];
		
		if (fp == NULL)
		printf("Unable to open the file\n");
		
		fgets(str, 15, fp);
		printf("%s",str);
		fgets(str, 15, fp);
		printf("%s",str);
		fgets(str, 15, fp);
		printf("%s",str);
		
		fclose(fp);
		
}

