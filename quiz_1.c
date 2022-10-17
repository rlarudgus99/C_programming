#include<stdio.h>

int main(void){
    int i = 0, j = 1, k = 2;

    printf("%d", ++i && j);
    printf("%d",i || 0);

}