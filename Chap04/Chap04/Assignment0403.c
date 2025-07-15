#include <stdio.h>

int main(void)
{
	float g, volume, result;
	printf("질량(g)? ");
	scanf("%f", &g);

	printf("부피(세제곱센티미터)? ");
	scanf("%f", &volume);

	result = g / volume;
	printf("밀도: %f", result);
}