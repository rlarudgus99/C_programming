#include <stdio.h>
#pragma warning(disable:4996)
int main(void) {
	printf("               ### ���ĺ� ���� ��� ###\n\n");
	for (int i = 1; i <= 26; i++) {
		printf(" ");
		for (int k = 0; k < 26 - i; k++) {
			printf(" ");
		}
		for (int j = 0; j < i; j++) {
			printf("%c ", j + 65);
		}
		for (int k = 0; k < 26 - i; k++) {
			printf(" ");
		}
		printf("\n");
	}
}