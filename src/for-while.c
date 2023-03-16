#include <stdio.h>

int main(){
	int i, counter=0;
	for ( i = 1; i <= 10; i ++ ){
		printf("Hello for!\n");
	}
	i = 0;
	while (i<10){
		printf("Hello while!\n");
		i++;
	}
	do {
		printf("Enter 1:\n");
		scanf("%d",&i);
		counter++;
		if (counter>3){
			printf("Too much errors :'(\n");
			break;
		}
		else{
			continue;
		}
	} while(i!=1);
	if (i==1){
		printf("Yay ^_^\n");
	}
	return 0;
}
