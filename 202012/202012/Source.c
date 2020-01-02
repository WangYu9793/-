#include<stdio.h>
void f(char* c, char d){
	*c = *c + 1;
	d = d + 1;
	printf("%d %d",c,d);
}
int main(){
	char a = 'A', b = 'a';
	f(&b, a);
	printf("%d %d", a, b);
	system("pause");
	return 0;
}