#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
<<<<<<< HEAD
	printf("quiz 8번\n");
	return 0;
}
=======
	double height, weight, std_weight;
	printf("8번 2471506 윤준수\n");
	while (1) {
		printf("키와 체중을 입력하세요 : ");
		scanf("%lf %lf", &height, &weight);
		std_weight = (height - 100) * 0.9;
		double max = std_weight * 1.05;
		double min = std_weight * 0.95;
		printf("%.2lf <= 키 %.2lf 표준체중 <= %.2lf\n", min, height, max);
		if (weight < min) {
			printf("체중 %.2lf는 저체중입니다.", weight);
		} else if (weight > max) {
			printf("체중 %.2lf는 과체중입니다.", weight);
		} else {
			printf("체중 %.2lf는 표준체중입니다.", weight);
		}
		printf("\n\n");
	}
	return 0;
}
>>>>>>> 7493571a543ce1889e482998efbd204c7ee567dc
