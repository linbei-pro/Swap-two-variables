
#include<stdio.h>

int main()
{
	int a = 3;
	int b = 5;
	//½»»»Ç°
	printf("a=%d b=%d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a=%d b=%d", a, b);

	return 0;
}