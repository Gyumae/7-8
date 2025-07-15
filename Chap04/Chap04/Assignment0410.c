#include <stdio.h>

int main()
{
	float time;
	int day, hour, minute, second;
	printf("비행 소요시간(시간)? ");
	scanf("%f", &time);

	second = time * 3600;

	day = second / 86400;
	second %= 86400;

	hour = second / 3600;
	second %= 3600;

	minute = second / 60;
	second %= 60;

	printf("비행 소요시간은 %d일 %d시간 %d분", day, hour, minute);
}