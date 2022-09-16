#include <stdio.h>
#pragma warning(disable:4996)
int main(void){

    // char ch1, ch2;
    // printf("두 글자 입력");
    // ch1 = getchar();
    // getchar();
    // ch2 = getchar();

    // printf("\n");
    // putchar(ch1);
    // putchar(ch2);


    // printf("Hello World! \n");

    // int a = 10;
    // int b = 20;
    // int c = 30;

    // printf("%d + %d = %d",a,b,c);
    
    // int a = 12345;
    // printf("[%d]\n",a);
    
    // printf("[%3d]\n",a);
    // printf("[%8d]\n",a);
    // printf("[%08d]\n",a);
    
    // printf("[%-8d]\n",a);

    // printf("[%+8d]\n",a);
    // printf("[%+08d]\n",a);


    // char ch = 'A';
    // const double d = 3.14159;

    // printf("const float : %lf\n",3.14159);
    // printf("float variable : %le\n\n", d);

    // printf("%c \n",'B');
    // printf("%c\n\n",ch);

    // printf("%s \n", "ddddd");
    // printf("%5.3s \n","Hi~");
    // printf("%05s \n","Hi~");


    // int a = 10;
    // // int a = 010;
    // // int a = 0x10;

    // printf("8: %o, 10: %d, 16: %x",a,a,a);



    // char ch;

    // scanf_s("%c", &ch, (int)sizeof(ch));

    // printf("ch : %c \n", ch);


    // int a;
    // scanf_s("%3d", &a);
    // printf("%d \n", a);

    // printf("%d", &a);
    

    // int a;
    // scanf("%d", &a);
    // printf("%d", a);
    

    // printf("today ?\n");
    
    // int y, m, d;

    // printf("year : ");
    // scanf("%d", &y);

    // printf("month : ");
    // scanf("%d", &m);
    
    // printf("day : ");
    // scanf("%d", &d);
    
    

    // printf("output : %d year %d month %d day", y, m, d);

    printf("today ? (ex : 2020/12/31) : ");
    
    int year, month, day;

    scanf("%d%*c%d%*c%d", &year, &month, &day);
    printf("%dyear %dmonth %dday \n", year, month, day);


    return 0;
}