#include<stdio.h>
#define SIZE 4

int findIfKeyInArray(int* arr, int size, int key){
    
    int i=0;
    for(i=0; i<SIZE; i++){
        if(arr[i] == key){
            return 1;
        }else{
            return 0;
        }
    }
}
int main(void) {
    int grades[SIZE] = {80,85,72,90};
    int result=0;
    int key=0;
    printf("Enter key value to find in array: ");
    scanf("%d", &key);
    
    result = findIfKeyInArray(grades,SIZE,key);
    if(result == 1){
        printf("%d is a key in the array.\n", key);
    }else{
        printf("%d is not contained in array.\n", key);
    }

    
    return 0;
    
}