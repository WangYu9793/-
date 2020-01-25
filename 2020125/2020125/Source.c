#include<stdio.h>
int main(void)
{
	char num;
	for (num = 0; num < 255;)
		num += num;
	printf("%d\n", num);
	system("pause");
	return 0;
}