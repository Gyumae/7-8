#include <stdio.h>
#define pyeong 0.3025

int main(void)
{
	float m = 0.0, result = 0.0;
	printf("����Ʈ�� ����(��������)? ");
	scanf("%f", &m);

	result = m * pyeong;

	printf("%.2f �������� = %.2f ��", m, result);
}