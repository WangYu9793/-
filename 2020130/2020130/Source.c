#include<stdio.h>
#include<math.h>
#define N 7
int fun1(char s[], char a, int n)
{
	int j;
	j = n;
	while (a < s[j] && j > 0) j--;
	return j;
}

int fun2(char s[], char a, int n)
{
	int j;
	j = 1;
	while (a > s[j] && j <= n)
		j++;
	return j;
}
int main()
{
	char s[N + 1];
	int k, p;
	for (k = 1; k <= N; k++)
		s[k] = 'A' + 2 * k + 1;
	p = fun1(s, 'M', N);
	printf("%d", p + fun2(s, 'M', N));
	system("pause");
	return 0;
}