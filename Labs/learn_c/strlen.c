#include<stdio.h>
#include<string.h>

int main() 
{
    char str[] = "hello";
    printf("sizeof str = %ld\n", sizeof(str)); // 6
    printf("strlen str = %ld\n", strlen(str)); // 5 不包含 '\0'

    return 0;
}