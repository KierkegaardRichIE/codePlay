#include<stdio.h>
/*
int main(){
	int c, lastc;
	int year = 0;

	lastc = 'a';
	while((c=getchar())!=EOF){
		if(c!=' ')
			putchar(c);
		if(c==' ')
			if(lastc!=' ')
				putchar(c);
		lastc = c;
	}
*/
//2-4
/*
	scanf("%d", &year);
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		printf("%d is a leap year!\n", year);
	else
		printf("%d is not a leap year!\n", year);
	getchar();
	return 0;
}
*/
//自动变量和静态变量
void test()
{
	auto int a = 0;
	static int b = 7;
	a++;
	b++;
	printf("%d ", a);
	printf("%d\t", b);
}
int main()
{
	for (int i = 0; i < 7; i++)
	{
		test();
	}
	return 0;
}