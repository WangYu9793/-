#include <stdio.h>
#include <math.h>
int main(int argc, int **argv){
	int x = 0, m = 0, n = 0;
	for (x = 0; x < 10000; x++)
	{
		m = (int)sqrt(x + 100);
		n = (int)sqrt(x + 268);
		if ((m * n) == (sqrt(x + 100) * sqrt(x + 268)))
		{
			printf("%d + 100 = %d * %d\n", x, m, m);
			printf("%d + 268 = %d * %d\n", x, n, n);
		}
	}
	system("pause");
	return 0;
}