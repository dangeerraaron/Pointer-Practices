#include<stdio.h>
#define SIZE 4
// Advanced pointer exercise, find max value in array
int max_value_arr(int* arr, int size){ //pointer to address of the array
    int i=0, max=0;
    for(i=1;i<SIZE;i++){
        if(arr[0] < arr[i]){ //if array index 0 is less than current array, assign current array to max value
            max = arr[i];
        }
    }
    return max;
}
int main(void) {
    int grades[SIZE] = {80,85,72,90};
    int result=0;
    result=max_value_arr(grades, SIZE);
    printf("Maximum Value of Array is %d\n", result);
    return 0;
    
}