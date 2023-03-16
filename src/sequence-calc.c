#include <stdio.h>

/*
Sequence:

S = 1/2-2/4+3/8-4/16.....

*/

int main(){
	float S = 0, a = 1, b = 2, z = 1; 
	int i, n;
	printf("Enter n:\n");
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		S = S + z*a/b;
		z = -z;
		a++;
		b += b;
	}
	printf("Summ of seq is %f\n",S);
	return 0;
}
