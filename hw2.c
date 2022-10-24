#include<stdio.h>
#include<time.h>

// p.1
// void revPrint(void);

// int main(void){
//     printf("문자열 입력 : ");
//     revPrint();
    
// }

// void revPrint(void){
//     char a = getchar();
//     if (a != '\n'){
//         revPrint();
//     }

//     putchar(a);
// }

// p.2
// recursive function

// int Fibo(int num);

// int main(void){

//     int num;
//     double end, start;

//     printf("### 피보나치 수열 구하기 ###\n\n");
//     printf("몇 번째 수열까지 출력할까요 : ");
//     scanf_s("%d", &num);
    
//     start = (double)clock() / CLOCKS_PER_SEC;

//     for (int i=1;i <= num;i++){
//         if (i % 5)  printf("%8d",Fibo(i));
//         else        printf("%8d\n",Fibo(i));
//     }

//     end = (double)clock() / CLOCKS_PER_SEC;

//     printf("\n");

//     printf("%d 번째 피보나치 수열 계산 시간 : %lf \n",num,end-start);

// }

// int Fibo(int num){
//     if(num ==1 || num == 2)     return 1;
//     return Fibo(num - 1) + Fibo(num - 2);
// }


// non - recursive function
// int Fibo(int n);

// int main()
// {
//     int num;
//     double end, start;

//     printf("### 피보나치 수열 구하기 ###\n\n");
//     printf("몇 번째 수열까지 출력할까요 : ");
//     scanf_s("%d", &num);

//     start = (double)clock() / CLOCKS_PER_SEC;

//     for (int i=1;i <= num;i++){
//     if (i % 5)  printf("%8d",Fibo(i));
//     else        printf("%8d\n",Fibo(i));
//     }

//     end = (double)clock() / CLOCKS_PER_SEC;

//     printf("\n%d 번째 피보나치 수열 계산 시간 : %lf \n",num,end-start);

//     return 0;
// }



// int Fibo(int num)
// {
//     int first = 1;
//     int second = 1;
//     int third;

//     if ( num <= 2 )
//             return 1;

//     for (int i = 3; i <= num; ++i )
//     {
//             third = first + second;
//             first = second;
//             second = third;       
//     }
//     return third;

// }

// p.3
// int HowManyDays(int year,int month,int day);

// int main(void){
//     printf("오늘 날짜 입력 (예: 2022 12 31): ");
//     int year, month, day;

//     scanf_s("%d", &year);
//     scanf_s("%d", &month);
//     scanf_s("%d", &day);


//     HowManyDays(year, month, day);
// }

// int HowManyDays(int year, int month, int day){

//     int res;
//     if (year % 400 ==0)                         res = 1;
//     else if (year % 4 == 0 && year % 100 != 0)  res = 1;
//     else                                        res = 0;

//     int pls;
//     if(month == 1)       pls = 0;
//     else if(month == 2)  pls = 31;
//     else if(month == 3)  pls = 31 + 28;
//     else if(month == 4)  pls = 31 + 28 + 31;
//     else if(month == 5)  pls = 31 + 28 + 31 + 30;
//     else if(month == 6)  pls = 31 + 28 + 31 + 30 + 31;
//     else if(month == 7)  pls = 31 + 28 + 31 + 30 + 31 + 30;
//     else if(month == 8)  pls = 31 + 28 + 31 + 30 + 31 + 30 + 31;
//     else if(month == 9)  pls = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
//     else if(month == 10) pls = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
//     else if(month == 11) pls = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
//     else if(month == 12) pls = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
    
//     if(res == 1)    printf("%d 년도, %d 일째 되는 날입니다.", year, day + pls + 1);
//     else            printf("%d 년도, %d 일째 되는 날입니다.", year, day+pls);
//     return 0;
// }

// p.4

// int main(void){
//     int arr[10];
//     int *parr = arr;

//     printf("10 개의 배열 원소를 입력하시오 !!! \n");
//     for(int i = 0;i<10;i++){
//         printf("arr[%d] : ",i);
//         scanf_s("%d",&arr[i]);
//     }
//     int res = *parr;

//     for (int i = 0;i<10;i++){
//         if (res > parr[i])  res = parr[i];
//     }
//     printf("%d",res);
    
// }

// void stuGrade(const double* pArr, int num, double *pSum, double *pAve, double *pMax);

// int main(void){
//     printf("10명의 학생 점수를 입력하시오 : ");

//     double arr[10];
//     double *pArr = arr;
//     printf("10 개의 배열 원소를 입력하시오 !!! \n");

//     for(int i = 0;i<10;i++){
//         printf("arr[%d] : ",i);
//         scanf_s("%lf",&arr[i]);
//     }

//     int num = 10;
//     double *pSum;
//     double *pAve;
//     double *pMax;

//     stuGrade(pArr, num, pSum, pAve, pMax);
// }

// void stuGrade(const double* pArr, int num, double *pSum, double *pAve, double *pMax){
//     // sum

//     for(int i = 0;i < num;i++){
//         *pSum += pArr[i];
//     }
//     printf("%lf",pSum);
    
//     // average
//     *pAve = *pSum / num;
//     printf("%lf",pAve);
    
//     // // maximum
//     // pMax = pArr;
    
//     // for (int i = 0;i<10;i++){
//     // if (pMax < pArr[i])  pMax = pArr[i];
//     // }
//     // printf("최대값 : %lf", *pMax)


    
// }
