#include <stdio.h>
#define Ep 9.8

int pa03_03(void)
{
	int kg, m;
	float energy = 0.0;

	printf("질량(kg)? ");
	scanf("%d", &kg);
	printf("높이(m)? ");
	scanf("%d", &m);

	energy = Ep * kg * m;

	printf("위치에너지: %fJ", energy);
}