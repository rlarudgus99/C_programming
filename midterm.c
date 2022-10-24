#include <stdio.h>
#pragma warning(disable:4996)

// p.1
// int main(void){
//     while(1){
//     printf("수식을 입력하세요(예 : 10 + 20) : ");
//     int a,b;
//     char op;

//     scanf("%d %c %d",&a,&op,&b);

   
//     if (op == '+')           printf("%d + %d = %d\n",a,b,a+b);
//     else if (op == '-')      printf("%d - %d = %d\n",a,b,a-b);
//     else if (op == '*')      printf("%d * %d = %d\n",a,b,a*b);
//     else if (op == '/')      printf("%d / %d = %d\n",a,b,a/b);
//     else                     break;
//     }

// }

// p.2

// int main(void){
//     int num = 0;

//     printf("\n      ### 알파벳 출력 ### \n\n");
//     for(int i = 0;i<26;i++){
//         for(int j = num;j<26+num;j++){
//             if(j+65 > 90)   printf("%c ",j+65-26);
//             else            printf("%c ",j+65);
//         }
//         num++;
//         printf("\n");
//     }

// }

// p.3

// int main(void){
//     int arr[10];
//     int *parr = arr;

//     for(int i=0;i<10;i++){
//         scanf_s("%d",&arr[i]);
//     }
//     for(int i = 0;i<10;i++){
//         for(int j = 0;j < arr[i];j++){
//             printf("*");
//         }
//         printf("\n");
//     }

// }

// "%[^\n]"
// p.4
int main(void){
    // 대문자
    // printf("%c",65);
    // printf("%c",90);
    
    // // 소문자
    // printf("%c",97);
    // printf("%c",122);

    char aa[15];

    scanf("%[^\n]",&aa);

    for(int i=0;i < sizeof(aa);i++){
        if (65 <= aa[i] && aa[i] <= 90)         printf("%c",aa[i] + 32);
        else if (97 <= aa[i] && aa[i] <= 122)   printf("%c",aa[i] - 32);
        else                                    printf("%c",aa[i]);
    }
    
}
    
