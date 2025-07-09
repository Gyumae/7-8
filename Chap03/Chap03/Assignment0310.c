#include <stdio.h>

int main(void)
{
	float krw, usd, exchange;
	printf("USD? ");
	scanf("%f", &usd);
	printf("원/달러 환율? ");
	scanf("%f", &exchange);

	krw = usd * exchange;

	printf("USD %.2f = KRW %.2f", usd, krw);
}