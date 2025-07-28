#include <stdio.h>

int searchElement(const int data[], int n, int value)
{
    int mid;
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        mid=(start + end) / 2;
        if(data[mid] == value)
            return mid;
        else if(data[mid] < value)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}

int main()
{
    int a[100] = {};
    int n, i = 0;
    scanf("%d", &n);
    while (i < n)
    {
        scanf("%d", &a[i]);
        i++;
    }
    int value = 0;
    scanf("%d", &value);
    int id = searchElement(a, n, value);
    printf("%d", id);
}