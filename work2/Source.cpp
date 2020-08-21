#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, sum;
	scanf("%d", &a);
	if (a >= 0)
	{
		printf("BE : %d", a + 543);
	}
	else if (a<0)
	{
		printf("error");
	}
	return 0;
}