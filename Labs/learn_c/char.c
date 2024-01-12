#include<stdio.h>

int main() 
{
    char chr1[]  = {'h', 'e', 'l', 'l', 'o', '\0'};
    char chr2[] = "hello";
    char* chr3 = "hello";

    printf("chr1 = %s\n", chr1);
    printf("chr2 = %s\n", chr2);
    printf("chr3 = %s\n", chr3);

    return 0;
}