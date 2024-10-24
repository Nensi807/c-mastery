#include<stdio.h>

void swap(int *a, int *b);

int main() 

{
	
    int no1, no2;

    printf("Enter numbers 1 : ");
    scanf("%d", &no1 );
    
    printf("Enter numbers 2 : ");
    scanf("%d", &no2);

    printf("Before swapping: no1 = %d, no2 = %d\n", no1,no2);

    swap(&no1 , &no2);

    printf("After swapping: no1 = %d, no2 = %d\n", no1 , no2);

   

}
