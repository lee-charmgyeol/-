#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	char c;
	int c_next;
	
	printf("enter a character: ");
	scanf("%c", &c);
	
	c_next = c + 1;
	printf("the next character of %c (%d) is %c (%d)", c, c, c_next, c_next);
	
	return 0;
}
