#include<stdio.h>
#pragma warning (disable:4996)
int main(void) {
	/*
	int num;
	printf("1~100사이 임의의 정수 입력 : ");
	scanf_s("%d", &num);

	int sum1=0;


	for (int i = 1; i <= 100; i++) {
		if (i % num == 0){
			sum1 += i;
			printf("5의 배수 : ");
			printf("%d\n", i);
		}
		printf("%d\n", i);
	}


	printf("\n5의 배수 총합 : ");
	printf("%d", sum1);
	*/

	//int num;
	//printf("임의의 정수 입력 : ");
	//scanf_s("%d", &num);
	//int ctr = 0;


	//if (num < 0)	num = -num;


	//int sum=0;

	//while (num > 0) {
	//	ctr++; 
	//	sum += num % 10;
	//	num /= 10;
	//	
	//}

	//printf("%d 자리\n", ctr);
	//printf("자릿수 총합 : %d", sum);


	int num;
	printf("임의의 정수 입력 (1~9) : ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {
		
		for (int j = 1; j <= i; j++) {
		
			printf("%d", j);
			
		}
		printf("\n");
		
	}
}
