#include <stdio.h>

int main(){
	int c;
	printf("Enter number between 1 and 5:\n");
	scanf("%i", &c);
	switch (c){
		case 1: printf("Choco\n"); break;
		case 2: printf("Milk\n"); break;
		case 3: printf("Jam\n"); break;
		case 4: printf("C\n"); break;
		case 5: printf("D\n"); break;
		default: printf("%d not between 1 and 5\n", c); break;
	}
}
