#include<stdio.h>

int main() 
{
    int array[5] = {1, 2, 3, 4, 5};
    int *p = array; // p 并非指向一个数组，而是指向一个整型变量
    
    printf("%p\n", array); // 指针指向的地址

    int i ;
    for (i = 0; i < 5; i++) {
        printf("%d\n", *(p + i));
    }
    printf("\n");

    int (*p_to_array)[5] = &array;
    for (i = 0; i < 5; i++) {
        printf("%d\n", *(array + i));
    }
    printf("\n");

    for (i = 0; i < 5; i++) {
        printf("%d\n", *(*p_to_array + i));
    }

    printf("the address of int array: %p\n", array);
    printf("the address p points to: %p\n", p);
    printf("the address p_to_array points to: %p\n", p_to_array);

    printf("address of p: %p\n", &p);
    printf("address of p_to_array: %p\n", &p_to_array);
    return 0;
}