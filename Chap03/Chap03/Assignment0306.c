#include <stdio.h>
#define pyeong 0.3025

int main(void)
{
	float m = 0.0, result = 0.0;
	printf("아파트의 면적(제곱미터)? ");
	scanf("%f", &m);

	result = m * pyeong;

	printf("%.2f 제곱미터 = %.2f 평", m, result);
}