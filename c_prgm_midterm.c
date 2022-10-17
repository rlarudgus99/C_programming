#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// int main(void){
//     int a = 10,b = 20,c = 30;
//     printf("1 : %d %d %d \n",a,b,c);


//     {
        
//         int b = 40;
//         double c = 3.14;
//         printf("2 : %d %d %f\n",a,b,c);

//         a = b;
//         // {
//         //     int c;
//         //     c = b;  
//         //     printf("3 : %d %d %d \n",a,b,c);

//         // }
//         printf("4 : %d %d %f\n",a,b,c);
        
//     }
//     printf("5 : %d %d %d\n",a,b,c);



//     return 0;

// }


// int main(void){
//     int a = 10;
//     int* pa;
//     int** ppa;
    
//     pa = &a;
//     ppa = &pa;

//     printf("a     : %d, &a    : %p \n",a,&a);
//     printf("*pa   : %d, pa    : %p \n",*pa,pa);
//     printf("**ppa : %d, *ppa  : %p \n",**ppa,*ppa);

//     return 0;
    
// }

// void OUTPUT(int);

// int main(void){
//     OUTPUT(1);
//     return 0;

// }

// void OUTPUT(int num){
//     printf("level %d \n", num);
//     if(num < 4){
//         OUTPUT(num+1);
//     }
//     printf("LEVEL %d \n",num+1);
// }

typedef unsigned int size_T;

// int main(void){
//     int a,b,c;

//     srand((size_T) time(NULL));

//     a = rand();
//     b = rand();
//     c = rand();

//     printf("3개의 난수 생성 : a = %d, b = %d, c = %d\n",a,b,c);

//     return 0;
// }

// int main(void){
//     int temp;

//     temp = 32751 % 45;
//     printf("temp : %d", temp);
//     // printf("로또 복권 생성 \n\n");
//     // srand((size_T) time(NULL));

//     // for(int i = 1;i<=6;i++){
        
//     //     temp = rand() % 45 + 1;
//     //     printf("%3d",temp);
//     // }
//     // printf("\n");

//     return 0;
// }

int main(void){
    int arr[5] = {10,20,30,40,50};
    // printf("%d %d", *arr, arr[0]);
    
    // int*pArr = arr;
    int *pArr;
    pArr = &arr[1];

    printf("%d %d",arr[0],pArr[-1]);
    printf("%d %d", arr[1], pArr[0]);
    
    return 0;
}