#include <stdio.h>
#pragma warning(disable:4996)

void Grade(double* pArr, int num, double* pSum, double* pAve, double* pMax);

int main(void) {
	double Arr[10];
	double* pArr = Arr;
	double num = 10;

	printf("10 명의 학생 점수를 입력하시오...\n");
	for (int i = 0; i < 10; i++) {
		scanf("%lf", &pArr[i]);
	}

	printf("\n할당 받은 배열의 크기 : %d 바이트\n\n", sizeof(Arr));
	printf("학 생 수 : %d\n", sizeof(Arr) / sizeof(double));
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
	printf("총 합 : %5.2lf\n", sum);

	// average
	double aver = sum / 10;
	printf("평 균 : %4.2lf\n", aver);


	// max
	double max1 = *pArr;
	double res;
	for (int i = 0; i < num; i++) {
		if (max1 > pArr[i])		 res = max1;
		else if (max1 < pArr[i]) res = pArr[i];
	}
	printf("최 대 값 : %5.2lf", res);
}