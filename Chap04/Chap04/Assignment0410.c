#include <stdio.h>

int main()
{
	float time;
	int day, hour, minute, second;
	printf("���� �ҿ�ð�(�ð�)? ");
	scanf("%f", &time);

	second = time * 3600;

	day = second / 86400;
	second %= 86400;

	hour = second / 3600;
	second %= 3600;

	minute = second / 60;
	second %= 60;

	printf("���� �ҿ�ð��� %d�� %d�ð� %d��", day, hour, minute);
}