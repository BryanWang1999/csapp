#include<stdio.h>
#include<string.h>

int main() 
{
    char str1[] = "hello";
    char str2[] = "hellO";

    if (!strcmp(str1, str2)) 
    /*
    两个字符串完全相等 -> strcmp 返回 0
    strncmp -> 只对比前n个字符
    */ 
    {
        printf("两个字符串完全一致\n");
    }
    else 
    {
        printf("两个字符串存在差异\n");
    }
    return 0;
}