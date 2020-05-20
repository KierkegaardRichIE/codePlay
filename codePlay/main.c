#include <stdio.h>

int main(int argc, char* argv[]) {
	unsigned long x;
	long n = 0;
	printf("Input the number you want to count: ");
	scanf_s("%u", &x);
	while (x>0)
	{
		n++;
		x /= 10;
	}
	printf("The number has %d digits\n", n);
	return 0;
}