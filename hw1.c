// 실습보고서 #01

// p.1
// 

#include<stdio.h>
#pragma warning(disable:4996)

// int main(void){
//     printf("Please input the two words...\n");

//     char aa,bb;
//     aa = getchar();
//     getchar();
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
//     char cc1, cc2;
//     scanf("%d%c%d%c%d", &y,&cc1,&m,&cc2,&d);

//     printf("Today's date is %d year %d month %d day.",y,m,d);
// }

// p.3

// int main(void){
//     float dist, velo;

//     printf("Distance (km) : ");
//     scanf("%f", &dist);
    
//     printf("Velocity (km/h) : ");
//     scanf("%f", &velo);

//     float time;
//     time = dist / velo;

//     float hour, min;
//     float sec;

//     hour = time;

//     printf("hour : %f ", hour);
    // min = ( time - (60*hour) ) / 60;
    // sec = (time - (60*hour) - min*60);
    // printf("Time : hours, minutes, seconds",hour, min, sec);
    // printf("%f", time);

// }

// p.4

// int main(void){
    
//     int usage;

//     printf("Electricity usage (kw) : ");
//     scanf("%d", &usage);

//     printf("\n### Current monthly electricity bill ###\n\n");

//     printf("                                  Base rate : 390\n");
//     printf("                           Usage fee per kW : 57.3\n");
//     printf("                                        VAT : 10.0%%\n");
//     printf("Electric Power Industry Infrastructure Fund : 3.7%%\n");

//     float use_fee;

//     use_fee = 390 + usage * 57.3;

//     int total_fee;
//     total_fee = use_fee + use_fee * 0.1 + use_fee * 0.037;

//     printf("Monthly billing fee : %d", total_fee );
// }

// p.5

// int main(void){
//     int year;

//     printf("Please input years : ");
//     scanf("%d", &year);
  
//     int res;

//     if (year % 400 ==0)                         res = 1;
//     else if (year % 4 == 0 && year % 100 != 0)  res = 1;
//     else                                        res = 0;

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
//     bmi = wgt / (hgt*hgt) * 10000;

//     printf("\nyour BMI : %.1f\n", bmi);

//     if (gen == 'M'){
//         if (bmi >= 25.0)        res = 3;
//         else if (bmi >= 20.0)   res = 2;
//         else                    res = 1;
//     }
//     else{
//         if (bmi >= 25.0)        res = 3;
//         else if (bmi >= 18.5)   res = 2;
//         else                    res = 1;

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

//     for(int i = 31;i >= 0; --i){
//         int res = num >> i & 1;
//         printf("%d",res);
//     }    

// }

// p.8

// int main(void){
//     int num;

//     printf("random integer (1~9) : ");
//     scanf("%d", &num);


//     for(int i = 0;i<num;i++){
//         for (int j = 0;j < i+1;j++)     printf("%d",j + 1);
//         for (int k = 0;k < num - i - 1;k++) printf("*");
//         printf("\n");
//     }
// }

// p.9    26



int main(void){
    int num = 0;

    printf("     ### 알파벳 문자 출력 ### ");
    
    for(int i = 0;i<26;i++){
        printf("\n");
        num++;
        for(int j = 0;j < 26; j++){
            
            printf("%c ",j + 65);
        }
    }
}