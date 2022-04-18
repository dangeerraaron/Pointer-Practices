#include <stdio.h>
#define SIZE 5
int secondVal(int *arr, int size)
{
    int i=0;
    int min1=arr[0]; //set min1,min2 to index 0
    int min2=arr[0]; 
    
    for(i=1; i<size; i++)
    {
        if(arr[i] < min1)
        {
            min2=min1; //shift min1 into min2
            min1=arr[i]; //assign current array to min 1
            
        }else if(arr[i] < min2)
           {
                min2=arr[i]; 
           }
    }
    return min2;
}
int main(void) 
{
    int arr[SIZE]={13,5,7,4,9};
    printf("The second largest value is %d.\n", secondVal(arr,SIZE));
    
    return 0;
}