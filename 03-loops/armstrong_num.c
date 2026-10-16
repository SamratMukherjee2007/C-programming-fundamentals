#include <stdio.h>
#include <math.h>
int main()
{
	long long num, copy1, copy2;
	printf("enter a number : ");
	scanf("%lld", &num);
	int rem, count = 0;
	copy1 = num, copy2 = copy1;
	double sum = 0;
	if (num == 0)
	{
		count = 1;
	}
	else
	{

		while (num != 0)
		{
			num /= 10;
			count++;
		}
	}
	while (copy1 > 0)
	{
		rem = copy1 % 10;
		sum += pow(rem, count);
		copy1 /= 10;
	}
	if (sum == copy2)
	{
		printf("%d is an Armstrong number", copy2);
	}
	else
	{
		printf("%d is not an Armstrong number", copy2);
	}

	return 0;
}
