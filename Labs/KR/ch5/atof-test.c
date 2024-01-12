#include <stdio.h>

#define MAXLINE 100

// compile with atof.c, mygetline.c
main()
{
	double sum, atof(char []);
	char line[MAXLINE];
	int mygetline(char line[], int max);

	sum = 0;
	while (mygetline(line, MAXLINE) > 0)
		printf("\t%g\n", sum += atof(line)); /* 在C语言的printf函数中，\t是一个转义序列，代表水平制表符（horizontal tab） */
	return 0;
}