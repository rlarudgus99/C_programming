#include <stdio.h>
#pragma warning(disable:4996)
int main(void) {
	char gender;
	double wgt, hgt;

	printf("���� �Է� (M/F) : ");
	scanf("%c", &gender);

	printf("������ �Է� (kg) : ");
	scanf("%lf", &wgt);

	printf("Ű �Է� (cm) : ");
	scanf("%lf", &hgt);

	double bmi;

	bmi = wgt / (hgt * hgt) * 100 * 100;
	printf("����� BMI : %4.1lf\n", bmi);

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

	if (res == 3)		printf("�� ü���Դϴ�.");
	else if (res == 2)	printf("ǥ�� ü���Դϴ�.");
	else if (res == 1)	printf("�� ü���Դϴ�.");

	return 0;


}