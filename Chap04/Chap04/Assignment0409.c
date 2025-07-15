#include <stdio.h>

int main(void)
{
	int hour, minute, second;

	printf("재생시간(초)? ");
	scanf("%d", &second);

	hour = second / 3600;
	second %= 3600;

	minute = second / 60;
	second %= 60;

	printf("재생시간은 %d시간 %d분 %d초입니다.", hour, minute, second);
}