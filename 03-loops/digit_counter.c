#include <stdio.h>

int main() {
    long long num,copy;
    printf("enter a number :");
    scanf("%lld",&num);
    copy = num;
    int count = 0;
    if(num==0)
    {
    	count=1;
	}else{
		
     	while(num != 0)
    	{
    		num/=10;
    		count++;
		}
	}
	printf("number of digits of %lld is %d",copy,count);

    return 0;
}
