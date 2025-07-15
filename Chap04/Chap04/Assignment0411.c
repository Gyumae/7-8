#include <stdio.h>

int main(void)
{
	int price, discount_rate, discount_price;

	printf("제품의 가격? ");
	scanf("%d", &price);

	printf("할인율(%)? ");
	scanf("%d", &discount_rate);

	discount_price = (int)(price * ((float)discount_rate / 100.0));
	price -= discount_price;
	printf("할인가: %d원 (%d원 할인)", price, discount_price);
}