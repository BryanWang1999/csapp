#include<stdio.h>

int main() 
{
    char *p[5] = {
        "text1",
        "text2",
        "text3",
        "text4",
        "text5"
    };

    int i;
    for (i = 0; i < 5; i++) 
    {
        printf("%s\n", p[i]);
    }

    return 0;
}