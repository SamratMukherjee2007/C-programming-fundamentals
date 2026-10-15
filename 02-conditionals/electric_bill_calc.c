#include <stdio.h>
int main() {
    int bill ;
    
    printf("enter your electricity consumption in units : ");
    scanf("%d",&bill);
    if (bill <= 100 && bill > 0)
    {
        printf(" your due bill is : %d",bill * 2,"/-");
    }
    
    else if (bill > 100 && bill <= 200)
    {
        printf("your due bill is %d", (100 * 2) + (bill - 100) * 3);
    }
    else if (bill > 200 && bill <= 300)
    {
        printf("your due bill is : %d", (100 * 2) + (100 * 3) + ((bill - 200) * 5));
    }
    else{
        printf("your due bill is : %d",(100 * 2) + (100 * 3) + (100 * 5) + ((bill - 300) * 7));
    }
    printf("\nPlease pay your bill within due date");
    return 0;
    
}