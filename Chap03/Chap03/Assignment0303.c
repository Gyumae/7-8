#include <stdio.h>
#define Ep 9.8

int pa03_03(void)
{
	int kg, m;
	float energy = 0.0;

	printf("����(kg)? ");
	scanf("%d", &kg);
	printf("����(m)? ");
	scanf("%d", &m);

	energy = Ep * kg * m;

	printf("��ġ������: %fJ", energy);
}