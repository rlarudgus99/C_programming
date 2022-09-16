#include <stdio.h>
#pragma warning(disable:4996)

int main(void){
    // int a = 10;
    // int res;

    // printf("%d",a);
    // res = ++a;
    // // res = a ++;
    // printf("a : %d, res : %d \n",a,res);

    // = : 할당    == : 비교

    // && : and
    // || : or
    // ! : not

    // int a = 10, res;
    // res = 0 && ++a;

    // printf("a : %d, res : %d \n",a,res);


    // printf("%c %d \n", 'a'+1, 'a'+1);
    // printf("%c %d \n",'a'-32, 'a'-32);


    // ###############################
    // 강의 중 연습문제

    // int sec;

    // printf("input seconds\n");
    // scanf("%d",&sec);

    // printf("%d seconds is ...\n",sec);

    // int hour = sec / 3600;
    // sec -= hour * 3600;

    // int min = sec / 60;
    // sec -=  min*60;

    // printf("%d h %d m %d s...\n",hour, min, sec);
    // 강의 중 연습 문제
    int money;

    printf("money : ");
    scanf("%d", &money);

    printf("change money\n");
    money -= 250;

    int c500 = money / 500;
    money -= c500 * 500;

    int c100 = money / 100;
    money -= c100*100;

    int c50 = money / 50;
    money -= c50 * 50;

    int c10 = money / 10;
    

    printf("c500 : %d 개\n", c500);
    printf("c100 : %d 개\n", c100);
    printf("c50 : %d 개\n", c50);
    printf("c10 : %d 개\n", c10);
    return 0;
}