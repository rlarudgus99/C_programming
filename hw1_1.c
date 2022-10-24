#include <stdio.h>
#pragma warning(disable:4996)

// p.1

// int main(void){
//     printf("두개의 영문자를 입력하시오 ... \n");
//     char a, b;
//     a = getchar();
//     getchar();
//     b = getchar();

//     printf("입력된 문자 : ");
//     putchar(a);
//     putchar(b);
// }

// p.2

// int main(void){
//     printf("현재 날짜 입력 (예 : 2022/12/31): ");
//     int year, month, day;
//     char c1, c2;

//     scanf_s("%d%c%d%c%d", &year, &c1, &month, &c2, &day);
//     // scanf("%d%*c%d%*c%d", &year, &month, &day);
//     printf("오늘의 날짜는 %d년 %d월 %d일 입니다.",year, month, day);
// }

// p.3

// int main(void){
//     int dist, velo;
//     printf("거리(km) : ");
//     scanf_s("%d", &dist);

//     printf("속도(km/h) : ");
//     scanf("%d",&velo);

//     int hour, min;
//     double sec;
//     double tt;

//     tt = (double) dist / velo * 60;

//     hour = dist / velo;
//     tt -= hour * 60;
//     min = tt;
//     tt -= min;
//     sec = tt * 60;

//     printf("예상 소요 시간 : %d시간, %d분, %f초입니다.",hour,min,sec);

// }

// p.4

// #define normal_fee 390
// #define fee_kw 57.3
// #define fee_min 1000
// #define VAT 10.0
// #define fee_elec 3.7

// int main(void){
//     printf("전기 사용량 (kw) : ");
    
//     int usage;
//     scanf_s("%d", &usage);

//     printf("\n ### 당월 전기요금 청구서 ###\n\n");
//     printf("        기본요금 :    %d\n",normal_fee);
//     printf("   kw당 사용요금 :    %4.1f\n",fee_kw);
//     printf("      부가가치세 :   %4.1f%%\n",VAT);
//     printf(" 전력산업기반기금 :   %3.1f%%\n",fee_elec);

//     double fee_use = normal_fee + usage * fee_kw;
//     printf("\n   당월 청구요금 : %.0f 원", fee_use + fee_use * VAT / 100 + fee_use * fee_elec /100);

// }


// p.5

// int main(void){
//     printf("년도 입력 : ");

//     int year;
//     scanf_s("%d", &year);

//     int res;

//     if (year % 4 == 0)  res = 1;
//     else if (year % 100 == 0) res = 0;
//     else if (year % 400 == 0) res = 1;
//     else res = 0;

//     if(res == 1)    printf("%d년은 윤년입니다.",year);
//     else            printf("%d년은 평년입니다.",year);

// }

// p.6

// int main(void){
//     char gender;
//     double wgt, hgt;

//     printf("성  별 입력 (M/F) : ");
//     scanf("%c",&gender);

//     printf("몸무게 입력 (kg) : ");
//     scanf("%lf",&wgt);

//     printf("  키  입력 (cm) : ");
//     scanf("%lf",&hgt);

//     double BMI;
//     BMI = wgt / (hgt * hgt) *10000;

//     int res;

//     if(gender == 'M'){
//         if (BMI >= 25)      res = 3;
//         else if(BMI >=20)   res = 2;
//         else                res = 1;
//     }
//     else if(gender == 'F'){
//         if (BMI >= 25)          res = 3;
//         else if(BMI >= 18.5)    res = 2;
//         else                    res = 1;
//     }
    
//     printf("\n당신의 BMI : %.1lf \n",BMI);
//     if (res == 3)       printf("과체중 입니다.");
//     else if (res == 2)  printf("표준체중 입니다.");
//     else                printf("저체중 입니다.");

// }

// p.8

// int main(void){
//     printf("임의의 정수 (1 - 9) : ");
//     int num;
//     int k = 0;

//     scanf_s("%d", &num);

//     for(int i = 1;i<=num;i++){
//         for(int j = 1;j<=num;j++){
//             if (j>i)    printf("*");
//             else        printf("%d",j);
//         }
//         printf("\n");
//     }
// }

// p.9

// int main(void){
//     printf("   ### 알파벳 문자 출력 ###\n\n");
//     int num = 0;

//     for(int i = 0;i<26;i++){
//         for(int j=num;j<26 + num;j++){
//             if (j+65 > 90)  printf("%c ",j+65-26);
//             else            printf("%c ",j+65);
//         }
//         num ++;
//         printf("\n");
//     }
// }

// p.10
int main(void){
    printf("임의의 정수 입력(1~9) : ");
    int num;

    scanf_s("%d",&num);

    for(int i = 1;i <= num;i++){
        for(int j = 1;j<=num-i;j++){
            printf(" ");
        }
        for(int k = 1;k<=2*i - 1;k++){
            printf("*");
        }
        for(int j = 1;j<=num-i;j++){
            printf(" ");
        } 
        printf("\n");
    }
    
    for(int i = num;i > 1;i--){
        for(int j = num;j >= i;j--){
            printf(" ");
        }
        for(int k = 2*i-3 ;k>1 - 1;k--){
            printf("*");
        }
        for(int j = num;j >= i;j--){
            printf(" ");
        }

        printf("\n");
    }
}
