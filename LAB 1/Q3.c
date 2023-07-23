// Lab1.1 24/07/2023
#include <stdio.h>

int main(void)
{
    int n=8, left_646, right_646;
    // printf("Enter the size of the array: ");
    // scanf("%d", &n);
    // printf("Enter the elements in the array one by one: \n");
    // for (int i = 0; i < n; i++)
    // {
    //     printf("\narr[%d] => ", i);
    //     scanf("%d", &arr[i]);
    // }
    int arr_646[8] = {2,1,0,5,2,6,4,6};
    printf("Elements in the array are: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr_646[i]);
    }
    left_646 = 0, right_646 = n - 1;
    int temp;
    while (left_646 <= right_646)
    {
        if (arr_646[left_646] % 2 != 0)
        {
            if (arr_646[right_646] % 2 == 0)
            {
                temp = arr_646[left_646];
                arr_646[left_646] = arr_646[right_646];
                arr_646[right_646] = temp;
                left_646++;
                right_646--;
            }
            else
                right_646--;
        }
        else
            left_646++;
    }
    printf("\nElements after operation: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr_646[i]);
    }

    return 0;
}