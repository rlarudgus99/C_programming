// 실습보고서 #01

// p.1
// 

#include<stdio.h>

#pragma warning(disable:4996)

// int main(void){
//     printf("Please input the two words...\n");

//     char aa,bb;
//     aa = getchar();
//     getchar(); // char aa와 bb를 구분하기 위해 getchar(); 를 받는다.
//     bb = getchar();

//     printf("Result : ");
//     putchar(aa);
//     putchar(bb);

//     return 0;
// }

// p.2

// int main(void){
//     printf("Please input today's date... (ex : 2022/12/31) : ");
//     int y, m, d;
//     char cc1, cc2; // 입력받은 숫자에서 연월일을 구분하기 위한 "/" 를 저장하기 위함.
//     scanf("%d%c%d%c%d", &y,&cc1,&m,&cc2,&d); // 구분자 "/" 를 cc1,cc2 에 저장.

//     printf("Today's date is %d year %d month %d day.",y,m,d);
// }

// p.3

// int main(void){

//     float dist, velo;

//     printf("Distance (km) : ");
//     scanf("%f", &dist);
    
//     printf("Velocity (km/h) : ");
//     scanf("%f", &velo);

//     float time, rest;
//     time = dist / velo * 60 * 60; // time : 거리를 속도로 나누고 60*60을 곱하여 초 단위 시간을 계산.

//     int hour = (float) time / (60*60);  // 시간을 구함. int 자료형으로 저장하기 위해 (float) time 으로 사용.
//     rest = (float) time - hour * 60 * 60; // 시간을 구한 뒤, 시간 단위를 제외한 나머지 time을 rest에 저장.

//     int min = rest / 60;  // 분단위 시간을 구하기 위해 남은 시간에서 60을 나눔.
//     rest -= min*60;       // 남은 시간 : 초단위 시간.

//     printf("Time : %d hours, %d minutes, %5.3f seconds",hour, min, rest);

// }

// p.4

// int main(void){
    
//     int usage;

//     printf("Electricity usage (kw) : ");
//     scanf("%d", &usage);

//     printf("\n### Current monthly electricity bill ###\n\n");

//     printf("                                  Base rate : 390\n");
//     printf("                           Usage fee per kW : 57.3\n");
//     printf("                                        VAT : 10.0%%\n");  // %% : "%" 를 출력하기 위함.
//     printf("Electric Power Industry Infrastructure Fund : 3.7%%\n");

//     float use_fee;

//     use_fee = 390 + usage * 57.3;

//     int total_fee;
//     total_fee = use_fee + use_fee * 0.1 + use_fee * 0.037;  // 당월청구요금 계산식

//     printf("Monthly billing fee : %d", total_fee );
// }

// p.5

// int main(void){
//     int year;

//     printf("Please input years : ");
//     scanf("%d", &year);
  
//     int res;

//     if (year % 400 ==0)                         res = 1;    // 400으로 나누어 떨어지는 해는 윤년
//     else if (year % 4 == 0 && year % 100 != 0)  res = 1;    // 그 중 4로는 나누어 떨어지지만 100으로 나누어 떨어지지 않으면 윤년
//     else                                        res = 0;    // 나머지 해는 모두 평년

//     if (res == 1)       printf("%d year is leap year.",year);
//     else                printf("%d year is common year.",year);
// }


// p.6

// int main(void){
    
//     char gen;
//     float wgt, hgt;

//     printf("Please enter your gender (M/F) : ");
//     scanf("%c", &gen);
    
//     printf("Please enter your weight (kg) : ");
//     scanf("%f", &wgt);
    
//     printf("Please enter your height (cm) : ");
//     scanf("%f", &hgt);

//     float bmi;
//     int res;
//     bmi = wgt / (hgt*hgt) * 10000;  // BMI를 계산.

//     printf("\nyour BMI : %.1f\n", bmi);

//     if (gen == 'M'){                        // 남자이고, 
//         if (bmi >= 25.0)        res = 3;    // BMI가 25 이상이면 과체중.
//         else if (bmi >= 20.0)   res = 2;    //       25 이하, 20 이상이면 정상체중.
//         else                    res = 1;    //       나머지는 저체중.
//     }
//     else{                                   // 여자이고, 
//         if (bmi >= 25.0)        res = 3;    // BMI가 25 이상이면 과체중.
//         else if (bmi >= 18.5)   res = 2;    //       25 이하, 18.5 이상이면 정상체중.
//         else                    res = 1;    //       나머지는 저체중.

//     }
    
//     if (res == 3)       printf("over weight...");
//     else if (res == 2)  printf("normal weight...");
//     else                printf("under weight...");

// }

// p.7

// int main(void){
//     int num;

//     printf("Please enter random integer : ");
//     scanf("%d", &num);

    
//     for(int i = 31;i >= 0; --i){    // 출력할 2진수 갯수는 32개.
//         int res = num >> i & 1;     // 입력받은 숫자를 2진수 (1 or 0) 로 출력.
//         printf("%d",res);

//         if(i%4==0)  printf(" ");    // 4 자리마다 " "를 출력.
//     }
// }

// p.8

// int main(void){
//     int num;

//     printf("random integer (1~9) : ");
//     scanf("%d", &num);


//     for(int i = 0;i<num;i++){                               // 줄의 갯수는 num만큼 출력.
//         for (int j = 0;j < i+1;j++)     printf("%d",j + 1); // 숫자를 출력.
//         for (int k = 0;k < num - i - 1;k++) printf("*");    // "*"을 출력.
//         printf("\n");
//     }
// }

// p.9    26



// int main(void){
//     int num = 0;

//     printf("     ### 알파벳 문자 출력 ### \n");
    
//     for(int i = 0;i<26;i++){
//         printf("\n");                                       // 출력할 줄의 갯수는 26줄.
//         for(int j = num;j < 26+num; j++){                   // 출력할 문자 "%c "의 갯수는 26개.
//             if (j+65 < 91)  printf("%c ",j + 65);           // Z 이하 문자는 그대로 출력
//             else            printf("%c ",j + 65 - 26);      // Z 이상 문자는 A부터 출력되도록.
            
//         }
//     num++;
//     }
// }

// // p.10

int main(void){
    printf("Please enter random integer (1~9)...");
    
    int num;
    scanf("%d",&num);

    int i,j,k;

    // 피라미드 상단 출력
	for (i = 0; i < num; i++)           // 입력받은 num만큼 출력
	{
		for (j=i; j < num; j++) {       // 
			printf(" ");
		}
		for (k = 0; k <=(i*2); k++) {
			printf("*");
		}
		printf("\n");
	}


    // 피라미드 하단 출력
	for (i = num -1; i > 0; i--)
	{
		for (j = i; j <= num; j++) {
			printf(" ");
		}

		for (k = 0; k <= ((i-1) * 2); k++) {
			printf("*");
		}

		printf("\n");
	}


    return 0;
}
