#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int sum = 0;
	int cnt = 0;
	while (1) {
		if (cnt >= 3) break;
		printf("숫자를 입력하시오: ");
		int n;
		scanf("%d", &n);
		
		if (n < 0) {
			continue;
		}

		sum += n;
		cnt++;
	}
	
	printf("합계는 %d입니다.", sum);
	return 0;
}