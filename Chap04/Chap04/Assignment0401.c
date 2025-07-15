#include <stdio.h>

int main(void)
{
	float kg, ms, result;

	printf("질량(kg)? ");
	scanf("%f", &kg);

	printf("속력(m/s)? ");
	scanf("%f", &ms);

	result = 0.5 * kg * (ms * ms);

	printf("운동에너지: %.2f J", result);
}