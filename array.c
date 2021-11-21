#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int amount, odd_2, k = 0;

    printf("How many numbers are there in array?\n");
    scanf("%d", &amount);

    int A[amount];
    double C[amount];

    for (int i = 0; i < amount; i++)
    {
        A[i] = rand();
    }

    printf("-----Array-----\n");

    for (int i = 0; i < amount; i++)
    {
        printf("A[%d] = %d\n", i, A[i]);
    }

    for (int i = 0; i < amount; i++)
    {
        if (A[i] % 2 != 0)
        {
            k++;
            if (k == 2)
            {
                odd_2 = A[i];
            }
        }

        if (k > 1)
        {
            C[i] = ((double)A[i]) / odd_2;
        }
        else
        {
            C[i] = A[i];
        }
    }

    if (k == 0)
    {
        printf("There's no odd numbers in array\n");
    }
    else if (k == 1)
    {
        printf("There's only one odd number in array\n");
    }
    else
    {
        printf("-----Newly formed array-----\n");

        for (int i = 0; i < amount; i++)
        {
            printf("C[%d] = %2.2lf\n", i, C[i]);
        }
    }

    return 0;
}
