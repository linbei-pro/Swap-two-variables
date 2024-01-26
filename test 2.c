
#include<stdio.h>

int main()
{
	int a = 3;
	int b = 5;
    //交换前
	printf("a=%d b=%d\n", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	//交换后
	printf("a=%d b=%d", a, b);


	return 0;
}