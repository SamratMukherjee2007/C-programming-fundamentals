#include <stdio.h>

int main() {
    int size,target,flag=0,i;
    printf("Enter size of array : ");
    scanf("%d",&size);
    int arr[size];
    //Taking elements of array as input
    printf("Enter elements of array : ");
    for (i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter target number : ");
    scanf("%d",&target);
    //searching number
    for ( i = 0; i < size; i++)
    {
        if (arr[i]==target)
        {
            flag=1;
            break;
            
        }
        
    }
    //printing result
    if (flag==1)
    {
        printf("target found at index %d",i);
    }
    else
    {
        printf("Target not found in the array");
    }
    
     return 0;
}
