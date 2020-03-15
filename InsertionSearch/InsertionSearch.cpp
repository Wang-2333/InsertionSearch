#include<stdio.h>

int InsertionSearch(int a[], int value, int low, int high)
{
    int mid = low + (value - a[low]) / (a[high] - a[low]) * (high - low);
    if (a[mid] == value)
        return mid;
    if (a[mid] > value)
        return InsertionSearch(a, value, low, mid - 1);
    if (a[mid] < value)
        return InsertionSearch(a, value, mid + 1, high);
}

int main()
{
    int n;
    int T[25] = { 1,3,6,8,32,56,59,67,76,86,95,99,200,298,299,300,309,345,356,387,393,399,400,490,500 };
    scanf_s("%d", &n);
    printf("%d", InsertionSearch(T, n, 0, 24) + 1);
    return 0;
}