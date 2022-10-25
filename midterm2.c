#include<stdio.h>
#pragma warning(disable:4996)

// p.1

// int main(void){
//     printf("수식을 입력하세요 (예 : 10 + 20) : ");
    
//     int a, b;
//     char op;

//     scanf("%d %c %d", &a, &op, &b);

//     if (op == '+')          printf("%d + %d = %d",a,b,a+b);
//     else if (op == '-')     printf("%d - %d = %d",a,b,a-b);
//     else if (op == '*')     printf("%d * %d = %d",a,b,a*b);
//     else if (op == '/')     printf("%d / %d = %d",a,b,a/b);
//     else if (op == '%')     printf("%d %% %d = %d",a,b,a%b);

//     return 0;
// }

// p.2

// int main(void){
//     int num = 0;
//     printf("\n                 ### 알파벳 출력 ###\n\n");
    
//     for(int i = 0;i < 26;i++){
//         for(int j = num;j < num + 26;j++){
//             if(j+65 > 90)   printf("%c ",j+65-26);
//             else            printf("%c ",j+65);
//         }
//         num++;
//         printf("\n");
//     }
//     return 0;
// }

// p.3

// int main(void){
//     int arr[10];
//     int *parr = arr;

//     for(int i = 0;i < 10;i++){
//         scanf("%d",&parr[i]);
//     }

//     printf("Index     Value          Output\n\n");

//     for(int i = 0;i < 10;i++){
//         printf("%d         arr[%d] : %d        ",i,i,arr[i]);
//         for(int j = 1;j <= arr[i];j++){
//             printf("*");
//         }
//         printf("\n");
//     }


    // for(int i = 0;i < 10;i++){
    //     for(int j = 0;j < arr[i];j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }
//     return 0;
// }

// p.4

// int main(void){
//     char arr[100];

//     printf("문자열을 입력하세요 : ");
//     scanf("%[^\n]",&arr);

//     for(int i = 0;i < 100;i++){
//         if (65 <= arr[i] && arr[i] <= 90)       printf("%c", arr[i] + 32);
//         else if(97 <= arr[i] && arr[i] <= 122)  printf("%c", arr[i] - 32);
//         else                                    printf("%c",arr[i]);
//     }
// }

// p.5

// int main(void){
//     printf("임의의 정수 (1~9) : ");
//     int num;
//     scanf_s("%d",&num);

//     for(int i = 1;i <= num;i++){
//         for(int j = 1; j <= i;j++){
//             printf("%d",j);
//         }
//         for(int k = 1; k <= num-i;k++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }

// p.6

int main(void){
    int num;

    printf("임의의 정수 (1~9) 입력 : ");
    scanf("%d", &num);

    // 피라미드 상단
    for(int i = 1;i <= num;i++){
        for(int k = 0;k < num - i;k++){
            printf(" ");
        }
        for(int j = 0; j < 2*i - 1; j++){
            printf("*");
        }
        for(int k = 0;k < num - i;k++){
        printf(" ");
        }
        printf("\n");
    }

    // 피라미드 하단
    for(int i = num - 1; i >= 1; i--){
        for(int k = 0;k < num - i;k++){
            printf(" ");
        }
        for(int j = 0; j < 2*i - 1; j++){
            printf("*");
        }
        for(int k = 0;k < num - i;k++){
        printf(" ");
        }
        
        printf("\n");
    }
}