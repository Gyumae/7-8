#include <stdio.h>

int main(void)
{
	int month;

	printf("몇 월? ");
	scanf("%d", &month);

	if (month >= 6 && month <= 8)	// 논리 AND
		printf("정수기 요금 적용\n");
	if (month < 6 || month > 8)		// 논리 OR
		printf("일반 요금 적용\n");

	//if (!(month >= 6 && month <= 8))	// 논리 NOT
	//		printf("일반 요금 적용\n");

	return 0;
}