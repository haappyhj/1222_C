#include<stdio.h>

//����1
int main() {
	//	printf("���ڸ� �Է��ϼ���");
	//		char k;
	//		scanf_s("%c",&k);
	//		if (65 <= k && k <= 90) {
	//			printf("�빮���Դϴ�\n");
	//		}
	//		else if (97 <= k && k <= 122) {
	//			printf("�ҹ����Դϴ�\n");
	//		}
	//		else {
	//			printf("��Ÿ�Դϴ�\n");
	//
	//		}
	//		}

	//����2
	printf("������ �Է��ϼ���");
	int i;
	scanf_s("%d", &i);
	if (i < 0) {
		printf("�ǳ�Ȱ�� ����\n");
	}
		else if (0 <= i && i < 40) {
			printf("�ǿ�Ȱ�� ����\n");
	}
			else {
				printf("�ǳ�Ȱ�� ����\n");
	}
}





	