#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
struct point{
	int x;
	int y;
};

int getArea(struct point p1, struct point p2){
	int a, b, c;
	a = p2.x - p1.x;
	b = p2.y - p1.y;
	c = a*b;
	return c;
}
int main(int argc, char *argv[]) {
	struct point p1, p2;
	int area;
	
	printf("Input the coordinate p1 (x y): ");
	scanf("%d %d", &p1.x, &p1.y);
	printf("Input the coordinate p2 (x y): ");
	scanf("%d %d", &p2.x, &p2.y);
	
	area = getArea(p1,p2);
	printf("Area: %d", area);
	
	return 0;
}
*/

struct point{
	int x;
	int y;
};

int getArea(struct point *pPtr1, struct point *pPtr2){
	int a, b, c;
	a = pPtr2->x - pPtr1->x;
	b = pPtr2->y - pPtr1->y;
	c = a*b;
	return c;
};
	
int main(int argc, char *argv[]) {
	struct point p1, p2;
	struct point *pPtr1, *pPtr2;
	int area;
	
	pPtr1 = &p1;
	pPtr2 = &p2;
	
	printf("Input the coordinate p1 (x y): ");
	scanf("%d %d", &p1.x, &p1.y);
	printf("Input the coordinate p2 (x y): ");
	scanf("%d %d", &p2.x, &p2.y);
	
	area = getArea(pPtr1,pPtr2);
	printf("Area: %d", area);
	
	return 0;
}
