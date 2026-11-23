#include <stdio.h>
#include <math.h>
// finding LARGEST number
int find_max(int arr[], int sz)
{
    int i, max_num = -INFINITY;
    for (i = 0; i < sz; i++)
    {
        if (arr[i] > max_num)
        {
            max_num = arr[i];
        }
    }
    return max_num;
}
// finding SMALLEST number
int find_min(int arr[], int sz)
{
    int i, min_num = +INFINITY;
    for (i = 0; i < sz; i++)
    {
        if (arr[i] < min_num)
        {
            min_num = arr[i];
        }
    }
    return min_num;
}
int main()
{
    int sz, i;
    printf("enter size of array : ");
    scanf("%d", &sz);
    int arr[sz];
    if (sz > 0)
    {
        printf("enter elements of array : ");
        for (i = 0; i < sz; i++)
        {
            scanf("%d", &arr[i]);
        }
        printf("Largest number is : %d\nSmallest number is : %d", find_max(arr, sz), find_min(arr, sz));
    }
    else{
        printf("Invalid array!");
    }
    return 0;
}
