#include <stdio.h>

int main(void)
{
	char size;

	printf("옷 사이즈(S,M,L)? ");
	scanf("%c", &size);

	printf("%c 사이즈를 선택했습니다.", size);
}