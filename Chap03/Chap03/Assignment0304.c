#include <stdio.h>

int main(void)
{
	int N, m;
	float result = 0.0;

	printf("��(N)? ");
	scanf("%d", &N);

	printf("�̵��Ÿ�(m)? ");
	scanf("%d", &m);

	result = N * m;

	printf("���� ��: %.2f J", result);
}