#include <stdio.h>
int main() {
    int h,m,s;
    printf("enter value of hour , minute , second :");
    scanf("%d%d%d",&h,&m,&s);
    

    if (h >= 0 && h <=23)
    {
        if (m >= 0 && m <= 59)
        {
            if (s >= 0 && s <= 59)
            {
                printf("Time is valid ");
            }
            else{
                printf("invalid time");
            }
            
        }
        else{
            printf("invalid time");
        }
        
    }
    else{
        printf("invalid time");
    }
    return 0;

}