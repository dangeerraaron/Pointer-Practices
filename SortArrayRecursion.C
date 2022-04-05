#include <stdio.h>
#include <stdlib.h>

/*recursion for sorted status of array*/

int sort_recursion(int *arr, int size, int *ref){ //pass by reference arr and ref, by value for size

    int result=0;
	if(size==1)
	{
		*ref=1;
	    return 1;
	}	
    result = sort_recursion(arr, size -1 /*BASE CASE */, ref);
	
	if(result != 0 && arr[size-1] == arr[size-2])
	{
	    *ref=0;	
	}
	if(result !=0 && arr[size-1] < arr[size-2])
	{
		*ref=0;
		return 0;
	}	

    return result;
}
int main(void)
{
	int num_arr[5]={1,3,2,4,10}; //unsorted array
	int status = 0, reference=0;
	status= sort_recursion(num_arr, 5, &reference); //pass by address index of array, size of array, and address of reference
	
	if(status==1)
	{	
		printf("The array is sorted.\n");
	}else if(status == 0)
	{
		printf("The array is NOT sorted.\n");
	}
	if(reference == 1)
	{
		printf("The array is really sorted!\n");
	}else if(reference == 0)
	{
		printf("The array is NOT sorted.\n");
	}

   return 0;
}