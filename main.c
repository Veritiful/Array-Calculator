#include <stdio.h>
#include <math.h>
int main(void)
{
    int size, A[size], odd_2, k = 0;
    double C[12];
     printf("Input size = ");
     scanf("%i", &size);
     printf("\n");
     
    for (int i = 0; i < 12; i++)
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
    printf("-----Array-----\n");
    for (int i = 0; i < size; i++)
    {
        printf("A[%i] = ", i);
        scanf("%i", &A[size]);
    }
    printf("-----Newly formed array-----\n");
    for (int i = 0; i < size; i++)
    {
        printf("C[%d] = %2.2lf\n", i, C[i]);
    }

    return 0;
}
