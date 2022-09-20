#include <stdio.h>

int main(void){
    // int a = 10, b = 20, res;

    // if (a<b)    res = a;
    // else        res = b;

    // printf()


    // 수업 중 연습문제

    // printf("4 number ... : ");
    // int a, b, c, d;

    // scanf("%d %d %d %d",&a,&b,&c,&d);

    // int max_val;
    // max_val = a;

    // my solution
    /*
    if(b > max_val){
        max_val = b;
        if (c > max_val){
            max_val = c;
            if (d > max_val){
                max_val = d;
            }
        }
    }

    if (b > max_val)        max_val = b;
    else if (c > max_val)   max_val = c;
    else if (d > max_val)   max_val = d;
    else                    max_val = a;
    printf("max value : %d", max_val);
    */

   /* P's Solution
   max = (a > b) ? a : b;
   max = (c > max) ? c : max;
   max = (d > max) ? d : max;

   */


    // int num;
    // printf("Random number : ");
    // scanf("%d", &num);

    // switch(num){
    //     case 1 : printf("11111\n"); break;
    //     case 2 : printf("22222\n"); break;
    //     case 3 : printf("33333\n"); break;

    //     default : printf("etc ... \n");
    // }



    // printf("eq : ");
    // float a,b,res;
    // char oper;
    // scanf("%f %c %f",&a,&oper,&b);

    // switch(oper){
    //     case 43: res = a+b;      break;
    //     case 45: res = a-b;     break;
    //     case 42: res = a*b;   break;
    //     case '/':
    //     if (b==0){
    //     printf("Error message 1");
    //     return 0;
    //     // break;   를 사용하면 위의 +-* 와 같이 아래 printf 문에 들어가서 이상한 값을 출력함

    //     }
    //     res = a/b;      break;
    //     default : printf("Error message 2");
    // }   
    // printf("%f %c %f = %f",a,oper,b,res);


    int res = 2;
    float a = 10/res;

    printf("%d", a);
    return 0;

}