// Lab1.1 24/07/2023
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void counter(int *arr_646, int num_646)
{
    int totalDuplicates_646 = 0, currentRepeats_646 = 0, maxRepeats_646 = 0, mostRepeatingElement_646;
    for (int i = 0; i < num_646; i++)
    {
        int currentElement = arr_646[i];
        int currentRepeats_646 = 0;
        for (int j = i + 1; j < num_646; j++)
        {
            if (currentElement == arr_646[j] && arr_646[j]!=0)
            {
                totalDuplicates_646++;
                currentRepeats_646++;
                arr_646[j]=0;

                // Update mostRepeatingElement if needed
                if (currentRepeats_646 > maxRepeats_646)
                {
                    maxRepeats_646 = currentRepeats_646;
                    mostRepeatingElement_646 = arr_646[i];
                }
            }
        }
    }
    printf("\nTotal number of duplicate elements: %d\n", totalDuplicates_646);
    printf("Most repeating element: %d (Repeated %d times)\n", mostRepeatingElement_646, maxRepeats_646);
}
int main()
{
    int num_646=8;
    // do
    // {
    //     printf("Enter the value greater than 10 for the array must have duplicates-");
    //     scanf("%d", &num_646);
    // } while (num_646 < 10);


    // srand(time(NULL));
    int arr_646[8] = {2,1,0,5,2,6,4,6};
    // for (int i = 0; i < num_646; i++)
    // {
    //     arr_646[i] = rand() % 8;
    // }

    printf("Elements in the array are as follows-\n");
    for (int i = 0; i < num_646; i++)
    {
        printf("%d  ", arr_646[i]);
    }

    counter(arr_646, num_646);
    return 0;
}