#include <stdio.h>
int main () {
    int phy,chem,maths,total;
    printf("enter physics , chemistry , math  marks :");
    scanf("%d%d%d",&phy,&chem,&maths);
    total = phy + chem + maths;
    if ((phy >= 0 && phy <= 100) && (chem >= 0 && chem <= 100) && (maths >= 0 && maths <= 100))
    {
        if (total >= 150)
        {
            if (phy >= 40 && chem >= 40 && maths >= 40)
            {
                if (total >= 240)
                {
                    printf("grade A");
                }
                else if (total >= 210)
                {
                    printf("grad B");
                }
                else if (total >= 180)
                {
                    printf("grade C");
                }
                else if (total >= 150)
                {
                    printf("grade D");
                }
                else
                {
                    printf("FAIL");
                }
                printf("\ntotal marks obtained is %d",total);
                
            }
            else
            {
                printf("FAIL");
            }
    
            
            
        }
        else
        {
            printf("FAIL");
        }
        
    }
    else
    {
        printf("invalid marks input");
    }
    return 0;
    
}