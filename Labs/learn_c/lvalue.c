int main() 
{
    char test[] = "hello";
    int count = 0;

    while (*test++ != '\0') 
    {
        count++;
    }

    printf("总共有%d个字符", count);

    return 0;
}