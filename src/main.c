#include <stdio.h>
#include <string.h>
#include "../inc/main.h"


// 全局变量
static int count = 10;
// 变量声明
    extern int a;

void func1(void);
void swap(int *a, int *y);
int range(int r);

int main(void){
    /*
    *主函数
    */
    printf("hello world\n");
    printf("hello\tC!\n");
    printf("int : %lu \n", sizeof(long double));
    
    // 定义一个字符串
    char ca[200] = "zhang shanfeng";
    printf("ca = %s\n", ca);

    // 浮点数
    float f;
    f = 3.0;
    f += 4;
    printf("%.1f\n", f);

    // 定义int变量
    int a = 3;

    for(int i=0;i<100;i++){
        printf("%d\n", a+=i);
        printf("%p\n", &a);
    }
    int b;
    printf("b=%d\n", b);

    // 合法的4.0f,4f非法的
    float ff = 4.0f;

    printf("\b");
    while(count--){
        func1();
    }

    int x,y;
    x = 22;
    y = 33;

    swap(&x,&y);
    printf("x=%d\ny=%d\n", x, y);
    
    float age[3] = {20.0,19.0,24.0};;
    printf("age[0]%.2f\n", age[0]);

    printf("range:%d\n", range(10));
    return 0;
}

void func1(void){
    static int thingy=5;
    thingy++;
    printf("thingy=%d\n", thingy);
}

void swap(int *a, int *y){
    int temp;
    temp = *a;
    *a = *y;
    *y = temp;
    return;
}

int range(int r){
    int temp=0;
    for(int i=0; i <= r; i++){
        temp += i;
    }
    return temp;
}