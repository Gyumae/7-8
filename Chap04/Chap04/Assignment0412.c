#include <stdio.h>

int main()
{
	float km, speed;
	int minute;
	printf("이동 거리(km)? ");
	scanf("%f", &km);

	printf("예상 속력(km/h)? ");
	scanf("%f", &speed);

	minute = km / speed * 60;
	printf("도착까지 예상 소요 시간은 %d분입니다.", minute);
}