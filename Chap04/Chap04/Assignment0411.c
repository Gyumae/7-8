#include <stdio.h>

int main(void)
{
	int price, discount_rate, discount_price;

	printf("��ǰ�� ����? ");
	scanf("%d", &price);

	printf("������(%)? ");
	scanf("%d", &discount_rate);

	discount_price = (int)(price * ((float)discount_rate / 100.0));
	price -= discount_price;
	printf("���ΰ�: %d�� (%d�� ����)", price, discount_price);
}