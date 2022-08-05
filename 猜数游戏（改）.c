#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int count = 0;
	int a;
	int b = 0;
	printf("请选择难度(1,2,3)：");
	scanf_s("%d", &a);
	int num1 = rand() % 50 + 1;
	int num2 = rand() % 100 + 1;
	int num3 = rand() % 1000 + 1;
	switch (a) {
	case 1:
		printf("我已经想好了一个1到50的数。");
		do {
			printf("你猜猜是什么数：");
			scanf_s("%d",& b);
			count++;
			if (b > num1) {
				printf("你猜的数大了。");
			}
			else if (b < num1) {
				printf("你猜的数小了。");
			}
		} while (b != num1);
		printf("太好了，你用了%d次就猜对了。\n", count);
		break;
	case 2:
		printf("我已经想好了一个1到100的数。");
		do {
		
			printf("你猜猜是什么数：");
			scanf_s("%d",& b);
			count++;
			if (b > num2) {
				printf("你猜的数大了。");
			}
			else if (b < num2) {
				printf("你猜的数小了。");
			}
		} while (b != num2);
		printf("太好了，你用了%d次就猜对了。\n", count);
		break;
	case 3:
		printf("我已经想好了一个1到1000的数。");
		do {
	
			printf("你猜猜是什么数：");
			scanf_s("%d", &b);
			count++;
			if (b > num3) {
				printf("你猜的数大了。");
			}
			else if (b < num3) {
				printf("你猜的数小了。");
			}
		} while (b != num3);
		printf("太好了，你用了%d次就猜对了。\n", count);
		break;
	}

	return 0;
}