// Lab1.1 24/07/2023
#include <stdio.h>

void swap(int *x_646,int *y_646){
    int temp_646=*x_646;
    *x_646=*y_646;
    *y_646=temp_646;
}
int main()
{   
    int a_646=6,b_646=4,c_646=6;
    printf("Before swapping => %d  %d  %d",a_646,b_646,c_646);
    swap(&a_646,&b_646);
    swap(&a_646,&c_646);
    printf("\nAfter swapping => %d  %d  %d",a_646,b_646,c_646);
    
    return 0;
}
