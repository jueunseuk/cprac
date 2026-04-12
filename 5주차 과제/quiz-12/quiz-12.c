#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("현재 시간과 나이를 입력하시오(시간 나이): ");
	int time, age;
	scanf("%d %d", &time, &age);
	if (age < 3) {
		printf("요금은 0원입니다.");
		return;
	}

	if (time >= 17) {
		printf("요금은 10000원입니다.");
	} else {
		if (age <= 12) {
			printf("요금은 25000원입니다.");
		}
		else if (age < 65) {
			printf("요금은 34000원입니다.");
		} else {
			printf("요금은 25000원입니다.");
		}
	}
	return 0;
}