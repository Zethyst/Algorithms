#include <stdio.h>
int main()
{
    int roll_646[8] = {2, 1, 0, 5, 2, 6, 4, 6};
    int max_646 = roll_646[0], min_646 = roll_646[1];
    printf("Elements in the array are as follows-\n");
    for (int i = 0; i < 8; i++)
    {
        printf("%d  ", roll_646[i]);
        if (max_646 < roll_646[i])
        {
            max_646 = roll_646[i];
        }
        if (min_646 > roll_646[i])
        {
            min_646 = roll_646[i];
        }
    }
    printf("\nAmong the random numbers-\n");
    printf("Minimum=%d\n",min_646);
    printf("Maximum=%d",max_646);
    return 0;
}