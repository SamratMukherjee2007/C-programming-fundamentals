#include <stdio.h>
int main() {               
    int balance; 
    int amt;
    printf("enter your account balance :");
    scanf("%d",&balance);
    printf("enter withdrawl amount :");
    scanf("%d",&amt);
    if (amt > 0)
    {
        if (amt <= (balance-500))
        {
            if (amt % 100 == 0)
            {
                printf("withdrawl succesful, available balance : %d",(balance - amt));
            }
            else
            {
                printf("transaction failed ,\namount can not be disbursed");
            }
        }
        else{
            printf("transaction failed,\ninsufficient balance");
        }
        
    }
    else{
        printf("transaction failed \ninvalid amount");
    }
    return 0;
}