#include <stdio.h>

void sum(int begin, int end) {
  int i;
  int sum = 0;
  for (i = begin; i <= end; i++)
  {
	sum += i;
  }
  printf("Sum of %d to %d is %d\n", begin, end, sum);
}

void arrayStatistics(void)
{
  int x = 0;
  int i;
  int count[10];
  for (i = 0; i < 10; i++) {
	count[i] = 0;
  }
  printf("Input a number: ");
  scanf_s("%d", &x);
  while (x != -1)
  {
	if (x >= 0 && x <= 9)
	{
	  count[x]++;
	}
	printf("Input a number: ");
	scanf_s("%d",&x);
  }
  for ( i = 0; i < 10; i++)
  {
	printf("%d: %d\n", i, count[i]);
  }
}

int bitsEstimate(int source) {
  int n = 0;
  while (source > 0)
  {
	n++;
	source /= 10;
  }
  return n;
}

int main(int argc, char* argv[]) {
  int m = 0;
  unsigned long x;
  //printf("Input the number you want to count: ");
  //scanf_s("%u", &x);
  //m = bitsEstimate(x);
  //printf("The number has %d digits\n", m);
  //sum(1, 10);
  //printf("test git");
  arrayStatistics();
  return 0;
}