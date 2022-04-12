#include <stdio.h>
#include <stdlib.h>

void swapChar(char *p1, char *p2)
{
	char temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
}
void swapRecursion(char *arr, int size)
{
	if(size > 1)
	{
		swapArr(&arr[0],&arr[size-1]);
		swapRecursion(arr+1, size-2);
	}
}
void printArr(char *arr, int size)
{
	int i=0;
	for(i=0; i<size; i++)
	{
		printf("%c ", arr[i]);
	}
    printf("\n");	
}
int main (void)
{
	char arr[4]={'a','b','c','d'};
	printArr(arr,4);
	swapRecursion(arr,4);
	printArr(arr,4);
		
	return 0;
}