#include <stdio.h>

int main(void)
{
	int hour, minute, second;

	printf("��? ");
	scanf("%d", &hour);
	printf("��? ");
	scanf("%d", &minute);
	printf("��? ");
	scanf("%d", &second);

	printf("�Է��� �ð��� %02d:%02d%:%02d�Դϴ�.", hour, minute, second);
}