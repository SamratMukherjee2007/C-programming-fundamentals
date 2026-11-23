#include <stdio.h>
int even_odd(int arr[],int sz)
{
    int i,even_count=0,odd_count=0;
    for ( i = 0; i < sz; i++)
    {
        if (arr[i]%2==0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
        
    }
    printf("number of even elements = %d\nnumber of odd elements = %d",even_count,odd_count);
}

int main() {
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
        even_odd(arr,sz);
    }
    
    return 0;
}
