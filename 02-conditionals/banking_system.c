
#include <stdio.h>
int main () {
    int bal = 10000;
    char task;
    int withdrwal;
    int deposit;
    
    printf("choose option - \n1.withdrwal(w)\n2.deposit(d)\n3.check balance(c)");
    scanf("%c",&task);
    //withdrawl system
    if (task == 'w')
    {
        printf("enter withdrawl amount :");
        scanf("%d",&withdrwal);
        if (withdrwal > 0)
    {
        if (withdrwal <= (bal-500))
        {
            if (withdrwal % 100 == 0)
            {
                printf("your account has debited with Rs. %d, \navailable balance : %d",withdrwal,(bal - withdrwal));
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
        
    }
    //deposit system
    else if (task == 'd')
    {
        printf("enter deposit amount :");
        scanf("%d",&deposit);
        if (deposit > 0)
        {
             printf("your account has benn credited with Rs. %d \navailable balance is %d",deposit,(bal+deposit));
        }
        else
		{
            printf("amount can't be depositted");
        }
        
        
    }
    //check balance 
    else if (task == 'c')
    {
        printf("your account balance is : %d",bal);
    }
    return 0;
    



}
