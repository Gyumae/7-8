#include <stdio.h>

int main(void)
{
	float kg, ms, result;

	printf("����(kg)? ");
	scanf("%f", &kg);

	printf("�ӷ�(m/s)? ");
	scanf("%f", &ms);

	result = 0.5 * kg * (ms * ms);

	printf("�������: %.2f J", result);
}