#include <stdio.h>
#pragma warning(disable:4996)

int* MAX(int* pArr, int num);
int* MIN(int* pArr, int num);

int main(void) {
	int Arr[10];
	int* pArr = Arr;
	int num = 10;

	printf("�迭 ���� 10���� �Է��Ͻÿ�...\n");
	for (int i = 0; i < 10; i++) {
		printf("arr[%d] : ", i);
		scanf("%d", &Arr[i]);
	}
	printf("�Է� ������ :    ");

	for (int i = 0; i < 10; i++) {
		printf("%d  ", Arr[i]);
	}

	int maximum;
	int* pmaximum = MAX(pArr, num);
	printf("\n�ִ밪 : %d, ��ġ(÷��) : %d\n", *pmaximum, *pmaximum - 1);

	int minimum;
	int* pminimum = MIN(pArr, num);
	printf("�ּҰ� : %d, ��ġ(÷��) : %d", *pminimum, *pminimum - 1);
}

int* MAX(int* pArr, int num) {
	int max1 = *pArr;
	int res;
	int* pres = &res;
	int flag = *pArr;

	for (int i = 0; i < num; i++) {
		if (flag > pArr[i]) {
			res = flag;
		}
		else if (flag < pArr[i]) {
			res = pArr[i];
			flag = res;

		}
	}

	return &res;

}

int* MIN(int* pArr, int num) {
	int min1 = *pArr;
	int res;
	int* pres = &res;
	int flag = *pArr;

	for (int i = 0; i < num; i++) {
		if (flag < pArr[i]) {
			res = flag;
		}
		else if (flag > pArr[i]) {
			res = pArr[i];
			flag = res;

		}
	}

	return &res;

}


