#include <stdio.h> 
#include <stdlib.h>
#include <time.h>


int main(){
	int i;
	srand(time(0));
	for (i=0;i<20;i++){
		printf("random %d\n",rand());	
	}
	return 0;
}


