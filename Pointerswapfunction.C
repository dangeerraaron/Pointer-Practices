#include <stdio.h>
int swap(int*p, int*k){
    int temp=0;
    temp=*p;
    *p=*k;
    *k=temp;
    
    return swap;
}
int main(){
    int a=0, b=0;
    int *p,*k;
    p=&a, k=&b;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("first number= %d second number= %d before swap.\n", a,b);
    
    swap(&a,&b); //must include memory address operator
    
    printf("first number = %d second number= %d after swap.\n", a,b);
    
    return 0;