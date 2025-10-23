#include <stdio.h>
int main()
{
    int arr[3][3] = {0};
    int arr2[3][3] = {0};
    int arr3[3][3] = {0};
    int size = 3;
    int maxval;

    // Input array 1
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("what to input for arr: ");
            scanf("%d", &arr[i][j]);
        }
    }

    // Input array 2
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("what to input for arr2: ");
            scanf("%d", &arr2[i][j]);
        }
    }

    // Sum arrays
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            arr3[i][j] = arr[i][j] + arr2[i][j];
        }
    }

    // Print sum matrix
    printf("\nSum matrix:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%3d ", arr3[i][j]);
        }
        printf("\n");
    }

    // Find max value
    maxval = arr3[0][0];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr3[i][j] > maxval)
            {
                maxval = arr3[i][j];
            }
        }
    }

    printf("\nMax value in sum matrix: %d\n", maxval);

    return 0;
}
