#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int user, comp = rand()%3 + 1;
	printf("(1:가위 2:바위 3:보) 중에서 하나를 선택하시오: ");
	scanf("%d", &user);
	
	if (comp == 1) {
		printf("컴퓨터는 가위를 선택했습니다.\n\n");
		if (user == 1) {
			printf("비겼습니다.");
		}
		else if (user == 2) {
			printf("사용자가 이겼습니다.");
		} else {
			printf("컴퓨터가 이겼습니다.");
		}
	} else if (comp == 2) {
		printf("컴퓨터는 바위를 선택했습니다.\n\n");
		if (user == 1) {
			printf("컴퓨터가 이겼습니다.");
		}
		else if (user == 2) {
			printf("비겼습니다.");
		}
		else {
			printf("사용자가 이겼습니다.");
		}
	} else {
		printf("컴퓨터는 보를 선택했습니다.\n\n");
		if (user == 1) {
			printf("사용자가 이겼습니다.");
		}
		else if (user == 2) {
			printf("컴퓨터가 이겼습니다.");
		}
		else {
			printf("비겼습니다.");
		}
	}
	return 0;
}