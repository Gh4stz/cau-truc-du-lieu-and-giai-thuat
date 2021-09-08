#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
// thuat toan sap xep quicksort

int cmp(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

bool containsDuplicate(int *nums, int numsSize)
{

    if (numsSize == 1)
        return false;

    qsort(nums, numsSize, sizeof(int), cmp);

    int count = 1;
    int i;
    for (i = 1; i < numsSize; i++)
    {
        if (nums[i - 1] == nums[i])
            count++;
        else
            count = 1;
        if (count > 1)
            return true;
    }

    return false;
}

int main()
{
    int a[100] = {3, 3};

    printf("%d", containsDuplicate(a, 100));
    return 0;
}