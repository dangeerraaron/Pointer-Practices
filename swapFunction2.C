#include <stdio.h>
#include <stdlib.h>

void swap(int *pnum1, int *pnum2){ //swap function does not return value
	int temp=0;
	temp=*pnum1;
	*pnum1=*pnum2;
	*pnum2=temp;

}

int main(void){

    int num1=0, num2=0;
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);
	
	printf("num1= %d and num2= %d BEFORE swap.\n", num1, num2);
	
	swap(&num1, &num2); //pass value by reference to swap function

	printf("num1= %d and num2= %d AFTER swap.\n", num1, num2);
	

    return 0;
}