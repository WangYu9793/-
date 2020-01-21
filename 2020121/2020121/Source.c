#include <stdio.h>
int getLen(int num)  
{
	int flags = 0;
	for (num; num >0; num /= 10)
	{
		flags++;
	}
	return flags;   //返回位数(长度)
}
int getIndex(int len)  
{
	int i = 0;
	int res = 1;
	for (i = 0; i < len; i++)
	{
		res = res * 10;
	}
	return res;    
}
int main()
{
	int num, temp, LastNum;
	printf("please input a num:\n");
	scanf_s("%d", &num);
	int len = getLen(num);
	int i = 0;
	for (i = 0; i<len; i++)
	{

		temp = num % 10;  
		num = num / 10;
		LastNum += temp*getIndex(len - i - 1); 
	}
	printf("the resault=%d\n", LastNum);
}