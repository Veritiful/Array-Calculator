#include <stdio.h>
#include <math.h>
int main(void)
{
    int A[12] = {5, 9, 15, 21, 2, 6, -12, 26, -8, 1, -5, -19}, odd_2, k = 0;
    double C[12];


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
    for (int i = 0; i < 12; i++)
    {
        printf("A[%d] = %d\t", i, A[i]);
    }


    printf("\n-----Newly formed array-----\n");
    for (int i = 0; i < 12; i++)
    {
        printf("C[%d] = %2.2lf\t", i, C[i]);
    }

    return 0;
}
