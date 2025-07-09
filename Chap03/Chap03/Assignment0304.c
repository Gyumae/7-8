#include <stdio.h>

int main(void)
{
	int N, m;
	float result = 0.0;

	printf("힘(N)? ");
	scanf("%d", &N);

	printf("이동거리(m)? ");
	scanf("%d", &m);

	result = N * m;

	printf("일의 양: %.2f J", result);
}