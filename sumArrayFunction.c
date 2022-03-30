#<stdio.h>

/* Sum of array elements function */

int sumArray(int *ptr, int size){//ptr points to address of first element of array
    int i=0, sum=0;
    for(i=0; i<size; i++){
        sum = sum + ptr[i];
    }
     return sum;
}
int main(void) {
    int grades[3]={3,5,7};
    int result=0;
    result = sumArray(grades,3); // key point grades first address index is passed to int arr[], size of array is passed to int size, 12 bytes total
    printf("%d\n", result);
    printf("%d is number of bytes for result.\n", sizeof(result));
    
    return 0;
}