#include <stdio.h>

 /* multiple arithmetic program using pointer function calls */

void arithmetic_func(double num1, double num2, double *pSum, double *pDiff, double *pQuotient, double *pDividend){ // function pointer, does not return result
    double result_add=0, result_sub=0, result_mult=0, result_div=0;

    result_add = num1 + num2;
    *pSum = result_add; // result stored at location pAdd

    result_sub = num1 - num2;
    *pDiff = result_sub; //result stored at location pSub
    
	result_mult= num1 * num2;
    *pQuotient = result_mult ; //result stored at location pMult

    result_div = num1 / num2;
    *pDividend = result_div; //result stored at location pDvid
}
int main(void){
    
	double a=0, b=0; //declare and intialize a and b to double '0
    double sum=0,diff=0, quotient=0, dividend = 0; //initialize and declare variable to store result in memory
    
	printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b); //reads two number input from the user
    arithmetic_func(a,b, &sum, &diff, &quotient, & dividend); // passes a and b to num1 num2 in Artihmetic_func, passes the addresses of sum, diff, quotient, divident to *pAdd *pSub, *pMult, *pDiv

    printf("\nThe sum = %.2lf\nThe difference = %.2lf\nThe quotient = %.2lf\nThe dividend = %.2lf", sum, diff, quotient, dividend); //return results from function

    return 0;
}