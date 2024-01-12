#include<stdio.h>

int main() 
{
    char *p[5] = { // array of pointers
        "text1",
        "text2",
        "text3",
        "text4",
        "text5"
    };

    printf("p中第一个元素的地址为: %p\n", p);
    printf("p中第一个元素的地址为: %p\n", &p[0]); // 数组名其实是数组第一个元素的地址

    int i;
    for (i = 0; i < 5; i++) 
    {
        printf("%s\n", p[i]);
        printf("%s\n", *(p + i));
        printf("%p\n", (p + i));
        printf("p[%d] 的地址: %p\n", i, &p[i]); // 指针本身的地址
        printf("p[%d] 指向的地址: %p\n", i, p[i]); // 指针指向的地址
    }

    printf("\n");

    char * test = "test";

    printf("%p\n", test);
    printf("%p\n", &test);
    printf("%s\n", test);
    
    printf("\n");

    printf("%p\n", (void*)test); // 指针指向的地址
    printf("%p\n", (void*)&test); // 指针本身的地址
    printf("%s\n", test); // 打印指针所指向地址上的值

    for (int j = 0; j < 3; j++) {
        printf("%p\n", (void*)test[j]); // char 强转成地址
    }

    return 0;
}