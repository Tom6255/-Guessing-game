#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int count = 0;
	int a;
	int b = 0;
	printf("��ѡ���Ѷ�(1,2,3)��");
	scanf_s("%d", &a);
	int num1 = rand() % 50 + 1;
	int num2 = rand() % 100 + 1;
	int num3 = rand() % 1000 + 1;
	switch (a) {
	case 1:
		printf("���Ѿ������һ��1��50������");
		do {
			printf("��²���ʲô����");
			scanf_s("%d",& b);
			count++;
			if (b > num1) {
				printf("��µ������ˡ�");
			}
			else if (b < num1) {
				printf("��µ���С�ˡ�");
			}
		} while (b != num1);
		printf("̫���ˣ�������%d�ξͲ¶��ˡ�\n", count);
		break;
	case 2:
		printf("���Ѿ������һ��1��100������");
		do {
		
			printf("��²���ʲô����");
			scanf_s("%d",& b);
			count++;
			if (b > num2) {
				printf("��µ������ˡ�");
			}
			else if (b < num2) {
				printf("��µ���С�ˡ�");
			}
		} while (b != num2);
		printf("̫���ˣ�������%d�ξͲ¶��ˡ�\n", count);
		break;
	case 3:
		printf("���Ѿ������һ��1��1000������");
		do {
	
			printf("��²���ʲô����");
			scanf_s("%d", &b);
			count++;
			if (b > num3) {
				printf("��µ������ˡ�");
			}
			else if (b < num3) {
				printf("��µ���С�ˡ�");
			}
		} while (b != num3);
		printf("̫���ˣ�������%d�ξͲ¶��ˡ�\n", count);
		break;
	}

	return 0;
}