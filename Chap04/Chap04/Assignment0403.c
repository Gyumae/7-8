#include <stdio.h>

int main(void)
{
	float g, volume, result;
	printf("����(g)? ");
	scanf("%f", &g);

	printf("����(��������Ƽ����)? ");
	scanf("%f", &volume);

	result = g / volume;
	printf("�е�: %f", result);
}