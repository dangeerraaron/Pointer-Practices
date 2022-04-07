#include <stdio.h>
#include <stdlib.h>

void updateAvg(int num1, int num2, float *result){
	
	*result = (num1 + num2) / 2.0;
}

int main(void){
	
	int a=0, b=0;
	float average=0;
	
	printf("Please enter two numbers: ");
	scanf("%d %d", &a, &b);
	updateAvg(a,b,&average);
	
	printf("The average of both numbers = %.2f", average);
	
	return 0;
}