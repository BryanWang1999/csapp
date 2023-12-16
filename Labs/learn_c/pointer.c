#include<stdio.h>

int main() 
{
    char a = 'F';
    int f = 123;

    char *pa = &a;
    int *pf = &f;

    printf("a = %c\n", *pa);
    printf("f = %d\n", *pf);

    *pa = 'A';
    *pf += 1;

    printf("a = %c\n", *pa);
    printf("f = %d\n", *pf);

    printf("sizeof pa = %ld\n", sizeof(pa));
    printf("sizeof pf = %ld\n", sizeof(pf));

    printf("the address of pa is %p\n", pa); // %p -> 打印地址类型数据
    printf("the address of pf is %p\n", pf);

    /**
     * 避免访问未初始化的指针
     * int *a;
     * *a = 123;
    */


    return 0;
}