#include <stdio.h>
#pragma warning(disable:4996)

void Grade(double* pArr, int num, double* pSum, double* pAve, double* pMax);

int main(void) {
	double Arr[10];
	double* pArr = Arr;
	double num = 10;

	printf("10 ���� �л� ������ �Է��Ͻÿ�...\n");
	for (int i = 0; i < 10; i++) {
		scanf("%lf", &pArr[i]);
	}

	printf("\n�Ҵ� ���� �迭�� ũ�� : %d ����Ʈ\n\n", sizeof(Arr));
	printf("�� �� �� : %d\n", sizeof(Arr) / sizeof(double));
	double Sum;
	double Ave;
	double Max;
	double* pSum = &Sum;
	double* pAve = &Ave;
	double* pMax = &Max;

	Grade(pArr, num, pSum, pAve, pMax);
}

void Grade(double* pArr, int num, double* pSum, double* pAve, double* pMax) {
	// sum
	double sum = 0;

	for (int i = 0; i < 10; i++) {
		sum += pArr[i];
	}
	printf("�� �� : %5.2lf\n", sum);

	// average
	double aver = sum / 10;
	printf("�� �� : %4.2lf\n", aver);


	// max
	double max1 = *pArr;
	double res;
	for (int i = 0; i < num; i++) {
		if (max1 > pArr[i])		 res = max1;
		else if (max1 < pArr[i]) res = pArr[i];
	}
	printf("�� �� �� : %5.2lf", res);
}