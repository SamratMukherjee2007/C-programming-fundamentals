#include <stdio.h>

int main() {
    int i,j,rows;
    printf("Enter number of rows : ");
    scanf("%d",&rows);
    //printing rows
    for ( i = 0; i <= rows; i++)
    {
        //printing stars
        for ( j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}