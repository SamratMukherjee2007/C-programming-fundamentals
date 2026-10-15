#include <stdio.h>
int main() {
    int a,b,c;
    printf("enter dd/mm/yyyy :");
    scanf("%d%d%d",&a,&b,&c);
    if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12 )
    {
        if (a >= 1 && a <= 31)
        {
            printf("Date is valid");
        }
        else{
            printf("date is invalid");
        }
        
    }
    else if (b == 4 || b == 6 || b == 9 || b == 11)
    {
         if (a >= 1 && a <= 30)
        {
            printf("Date is valid");
        }
        else{
            printf("date is invalid");
        } 
    }
    else if (b == 2)
    {
        if (c % 400 == 0 || (c % 4 == 0 && c % 100 != 0))
        {
            if (a >= 1 && a <= 29)
            {
            printf("Date is valid");
            }
        
            else
            {
                printf("date is invalid");
            }
        }
        else if (c % 400 != 0 || (c % 4 != 0 && c % 100 == 0))
        {
            if (a >= 1 && a <= 28)
            {
                printf("date is valid");
            }
            else
            {
                printf("date is invalid");
            }
        }
    }
    else{
       printf("unexpected error");
    }
    return 0;
    
}