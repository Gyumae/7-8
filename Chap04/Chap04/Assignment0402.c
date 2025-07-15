#include <stdio.h>

int main(void)
{
	float F, C;
	printf("È­¾¾¿Âµµ? ");
	scanf("%f", &F);

	C = (F - 32) * (0.5 / 0.9);

	printf("%.2f F = %.2f C", F, C);

	return 0;
}