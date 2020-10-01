#include <stdio.h>
#include <stdlib.h>

int ArraySum(int MyArray[], int size)
{
    int sum = 0;
    for (int i = 0; i < 6; i++)
    {
        sum = sum + MyArray[i];
    }
    return sum;
}
int main()
{
    int ArrayNumbers[6] = {10, 20, 40, 60, 80, 100}; ///sum = 310
    int sum_of_array = ArraySum(ArrayNumbers, 6);
    printf("Sum = %d", sum_of_array);
}
