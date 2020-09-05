#include<stdio.h>
int main()
{
	int i,p;
	long long num,fibo[100000];
	fibo[0] = 1;
	fibo[1] = 2;
	printf("Range (not exeed 99,999) : ");
	scanf_s("%lld", &num);
	for (i = 2; i <= num; i++)
	{
		for (p = i; p <= i; p++)
		{
			fibo[p] = fibo[p - 1] + fibo[p - 2];
			if (p == 2)
			{
				printf("1 2 %lld ", fibo[p]);
			}
			else if (p > 2 && fibo[p] >=0 && fibo[p] <= num)
			{
				printf("%lld ", fibo[p]);
			}
		}
	}
	return 0;
}