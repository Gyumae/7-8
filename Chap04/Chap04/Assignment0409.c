#include <stdio.h>

int main(void)
{
	int hour, minute, second;

	printf("����ð�(��)? ");
	scanf("%d", &second);

	hour = second / 3600;
	second %= 3600;

	minute = second / 60;
	second %= 60;

	printf("����ð��� %d�ð� %d�� %d���Դϴ�.", hour, minute, second);
}