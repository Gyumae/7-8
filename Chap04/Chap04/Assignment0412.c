#include <stdio.h>

int main()
{
	float km, speed;
	int minute;
	printf("�̵� �Ÿ�(km)? ");
	scanf("%f", &km);

	printf("���� �ӷ�(km/h)? ");
	scanf("%f", &speed);

	minute = km / speed * 60;
	printf("�������� ���� �ҿ� �ð��� %d���Դϴ�.", minute);
}