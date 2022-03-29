#include <stdio.h>
#include <string.h> // library for memcpy
#include <stdlib.h>
/* using memcpy to pass various data types and return value via pointer */

void swapGeneric(void *a, void *b, int size){ //assume int size > 0
//size specifies the number of bytes
    void* tempMemory = malloc(size);
    //memory copy void* memcpy= void*dest, const void *src, size_t num);
    memcpy(tempMemory,a,size); // assigns pointer a to tempMemory
    memcpy(a,b,size); //assigns b to a
    memcpy(b,tempMemory,size);
    
    free(tempMemory); //must reallocate memory from malloc to avoid leaks!!
}
int main() {
    int num1=5, num2=7;
    double average1=90.5, average2=89.7;
	
	/*scanf("%d %d", &num1, &num2); as an option for user input */
	
    printf("%d %d before swap\n", num1, num2);
    printf("%.1lf %.1lf before swap\n", average1, average2);
    swapGeneric(&average1,&average2,sizeof(double));
    swapGeneric(&num1,&num2, sizeof(int));
    

    return 0;
}