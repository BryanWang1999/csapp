#include<stdio.h>

int main() 
{
    char str[128];
    
    printf("请输入一段文字：");
    scanf("%s", str);

    printf("你输入的文字是：%s\n", str);

    printf("str 的地址是：%p\n", str); // 地址常量
    printf("str[0] 的地址是：%p\n", &str[0]);

    char a[] = "hello";
    char *pa = a;
    printf("*p = %c, *(p + 1) = %c, *(p + 2) = %c, *(p + 3) = %c, *(p + 4) = %c\n", *pa, *(pa + 1), *(pa + 2), *(pa + 3), *(pa + 4));
    printf("*a = %c, *(a + 1) = %c, *(a + 2) = %c, *(a + 3) = %c, *(a + 4) = %c\n", *a, *(a + 1), *(a + 2), *(a + 3), *(a + 4));
}