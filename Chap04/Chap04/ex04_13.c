#include <stdio.h>

int main(void)
{
	int items = 0;	// 전체 항목수
	int pages = 0, left = 0;
	int items_per_page = 0;	// 한 페이지 당 항목 수

	printf("항목수? ");
	scanf("%d", &items);

	printf("한 페이지 당 항목수? ");
	scanf("%d", &items_per_page);

	pages = items / items_per_page;		// 페이지 수
	left = items % items_per_page;		// 남은 항목 수
	pages = left > 0 ? pages + 1 : pages;
	printf("필요한 총 페이지수: %d\n", pages);
	printf("마지막 페이지의 항목수: %d\n",
		left > 0 ? left : items_per_page);

	return 0;
}