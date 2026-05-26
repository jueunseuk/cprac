#include <stdio.h>

int search(int* A, int size, int search_value) {
	for (int i = 0; i < size; i++) {
		if (A[i] == search_value) {
			return i;
		}
	}

}

int main() {
	int A[10] = { 0, 100,300,200,400,500,600,700,800,900 };
	printf("월급 200만원인 사람의 인덱스=%d", search(A, 10, 200));
}