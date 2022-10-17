#include<stdio.h>

// 함수

// 함수 호출
// Stack 이 쌓인다.
// Last Input First Output
// 후입선출

// 이후 재귀함수에 대한 내용을 강의할 때 필요한 개념이다.

// 반대되는 개념으로는 Queue 가 있다.
// First Input First Output


void SWAP(int, int);
void SWAP_ptr(int*, int*);

int* MAX(int*, int*);

int DIV(int*, int*);

int main(void){
    // 값에 의한 전달
    // SWAP() 함수에서 변경된 a, b의 값은 다른 주소에 저장된 값이므로 main 문에서 적용이 되지 않음.

    // int a = 10, b = 20;

    // printf("호출 전 : a = %d, b = %d \n",a,b);
    // SWAP(a,b);

    // printf("호출 후 : a = %d, b = %d \n",a,b);

        
    // 주소에 의한 전달
    // pointer 를 이용한다면 해당 주소에서 가지고 있는 값을 변경할 수 있기 때문에 main 문에서 적용 가능하다.

    // int a = 10, b = 20;

    // printf("호출 전 : a = %d, b = %d \n",a,b);
    // SWAP_ptr(&a,&b);

    // printf("호출 후 : a = %d, b = %d \n",a,b);


    // int a = 10, b = 20;
    
    // printf("비교 데이터 : %d, %d\n", a,b);
    // int* pMAX;
    // pMAX = MAX(&a, &b);

    // printf("최대값 : %d", *pMAX);


// 잘 모르겠음
// 몫, 나머지 계산기

    // int a, b, res, REM;

    // printf("두 정수 입력 : ");
    // scanf_s("%d %d ",&a, &b);

    // res = DIV(a,b);

    // printf("%d / %d = %d ... \n", a,b,res);
  

    int a, b, res, rem;
    printf("두 정수 입력 : ");
    scanf_s("%d %d ", &a,&b);

    res = DIV(&a,&b, &rem);



    printf("%d / %d = %d ... %d ",a,b,res, *rem);

    return 0;
}

int DIV(int *pa, int *pb){
    int *rem;
    *rem = *pa % *pb;

    return *pa / *pb;

}



void SWAP(int a, int b){
    int temp;

    temp = a;
    a = b;
    b = temp;
    return;
}
void SWAP_ptr(int* pa, int* pb){
    int temp;

    temp = *pa;
    *pa = *pb;
    *pb = temp;
    return;
}



