#include <stdio.h>
#include <math.h>
int main(void)
{
    int size,  odd_2, k = 0;
     printf("Input size = ");
     scanf("%i", &size);
     printf("\n");
     int A[size];
     double  C[size];
     for (int i = 0; i < size; i++)
    {
        printf("A[%i] = ", i);
        scanf("%i", &A[i]);
    }
    for (int i = 0; i < size; i++)
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
    if (k == 1)
    {
        printf("There's only one odd number in array\n");
    }
    
    printf("-----Newly formed array-----\n");
    for (int i = 0; i < size; i++)
    {
        printf("C[%d] = %2.2lf\n", i, C[i]);
    }

    return 0;
}

