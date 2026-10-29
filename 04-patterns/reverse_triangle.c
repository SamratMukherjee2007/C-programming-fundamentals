#include <stdio.h>

int main() {
    int i,j,k,rows;
    printf("enter number of rows : ");
    scanf("%d",&rows);
    for ( i = 0; i <= rows; i++)
    {
        //printing spaces
        for ( j = 0; j < rows-i; j++)
        {
            printf(" ");
        }
        //printing stars
        for ( k = 0; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}