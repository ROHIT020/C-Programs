#include <stdio.h>
int hack_func(int array[], int x, int beg, int end)
{
    if (end >= beg)
    {
        int mid = beg + (end - beg) / 2;
        if (array[mid] == x)
            return mid;
        if (array[mid] > x)
            return hack_func(array, x, beg, mid - 1);
        return hack_func(array, x, mid + 1, end);
    }
    return -1;
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(a) / sizeof(a[0]);
    int x = 4;
    int result = hack_func(a, x, 0, n - 1);
    if (result == -1)
        printf("Not found");
    else
        printf("%d", result);
}