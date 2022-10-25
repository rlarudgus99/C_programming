#include <stdio.h>
#pragma warning(disable:4996)
int main(void) {
	char gender;
	double wgt, hgt;

	printf("성별 입력 (M/F) : ");
	scanf("%c", &gender);

	printf("몸무게 입력 (kg) : ");
	scanf("%lf", &wgt);

	printf("키 입력 (cm) : ");
	scanf("%lf", &hgt);

	double bmi;

	bmi = wgt / (hgt * hgt) * 100 * 100;
	printf("당신의 BMI : %4.1lf\n", bmi);

	int res;

	if (gender == 'M') {
		if (bmi >= 25)		res = 3;
		else if (bmi >= 20)	res = 2;
		else				res = 1;
	}
	else if (gender == 'F') {
		if (bmi >= 25)			res = 3;
		else if (bmi >= 18.5)	res = 2;
		else					res = 1;
	}

	if (res == 3)		printf("과 체중입니다.");
	else if (res == 2)	printf("표준 체중입니다.");
	else if (res == 1)	printf("저 체중입니다.");

	return 0;


}