#include <stdio.h>

int main(void)
{
	float krw, usd, exchange;
	printf("USD? ");
	scanf("%f", &usd);
	printf("��/�޷� ȯ��? ");
	scanf("%f", &exchange);

	krw = usd * exchange;

	printf("USD %.2f = KRW %.2f", usd, krw);
}