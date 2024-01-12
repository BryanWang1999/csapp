#include <ctype.h>

/* 把字符串s转换为相应的双精度浮点数 */
double atof(char s[])
{
	double val, power;
	int i, sign;

	for (i = 0; isspace(s[i]); i++) /* 跳过空白符 */
		;

	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
		i++;

	for (val = 0.0; isdigit(s[i]); i++) /* 整数部分 */
		val = 10.0 * val + (s[i] - '0');

	if (s[i] == '.')
		i++;

	for (power = 1.0; isdigit(s[i]); i++) { /* 小数部分 */
		val = 10.0 * val + (s[i] - '0');
		power *= 10.0;
	}

	int eSign = 1;
	if (s[i] == 'e' || s[i] == 'E') {
		if (s[++i] == '-') {
			eSign = -1;
			i++;
		}
	}

	double ePower = 1.0;
	if (isdigit(s[i])) {
		int eCount = s[i] - '0';
		while (eCount-- > 0)
			ePower *= 10.0;
	}

	double result = sign * val / power;

	if (eSign > 0)
		result *= ePower;
	else
		result /= ePower;

	return result;
}