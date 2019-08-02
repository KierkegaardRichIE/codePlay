#include<stdio.h>

int main(){
	int c, lastc;
	int year = 0;
/*
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
	scanf("%d", &year);
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		printf("%d is a leap year!\n", year);
	else
		printf("%d is not a leap year!\n", year);
	getchar();
	return 0;
}