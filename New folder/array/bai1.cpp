#include<iostream>


class Solution{   
public:
    int cmp(const void *a, const void *b)
    {
        return (*(int *)a - *(int *)b);
    }
    int getMinDiff(int arr[], int n, int k) {
        qsort(arr, n, sizeof(int),cmp);
        for(int i = 0; i < n; i++)P_tmpdir
    }
};