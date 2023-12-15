#include<stdio.h>
#include<string.h>

int main()
{
    char str1[] = "original";
    char str2[] = "new";
    char str3[100];

    strcpy(str1, str2); // (目标字符数组, 原字符数组) 必须保证 目标字符数组长度 足以容纳 原字符数组
    strcpy(str3, "Copy Successful");

    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);
    printf("str3 = %s\n", str3);

    return 0;
}