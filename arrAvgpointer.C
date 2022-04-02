#include <stdio.h>
#define SIZE 4

/* my solution for finding average of values within array using pointers */

double avg_arr(int* arr, int size){
    int i=0;
    double sum=0,average=0;
    for(i=0;i<SIZE;i++){
        sum = sum + arr[i]; //adds each element of array via iteration and keeps running total in sim
    }
    average = sum / SIZE;
    
    return average;
}
int main(void) {
    int grades[SIZE] = {80,85,72,90};
    double avg_result=0;
    avg_result = avg_arr(grades, SIZE);
    printf("Average = %.1lf\n", avg_result);
    
    return 0;
}