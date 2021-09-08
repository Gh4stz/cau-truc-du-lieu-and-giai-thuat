#include <stdio.h>

void swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}
int Pivot(int a[], int l, int h)
{
    int pivot = a[h];
    int left = l;
    int right = h - 1;
    while (1)
    {
        while (right >= left && a[left] < pivot)
            left++;
        while (right >= left && a[right] > pivot)
            right--;
        if (left >= right)
            break;
        swap(&a[left], &a[right]);
        left++;
    }
    swap(&a[left], &a[h]);
    return left;
}
void quicksort(int a[], int l, int h)
{
    if (l < h)
    {
        int pivot = Pivot(a, l, h);
        quicksort(a, l, pivot - 1);
        quicksort(a, pivot + 1, h);
    }
}
int solve(int a[], int n)
{
    int i;
    if (a[0] != 0)
        return 0;
    for (i = 0; i < n; i++)
    {
        if ((a[i + 1] - a[i]) > 1)
        {
            return a[i] + 1;
        }
    }
}

int main()
{
    int n, i;
    printf("Nhap vao so phan tu trong mang: ");
    scanf("%d", &n);
    int a[n];
    printf("Nhap vao cac phan tu trong mang:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    quicksort(a, 0, n - 1);
    printf("Phan tu nho nhat con thieu trong mang la: %d", solve(a, n));
    return 0;
}