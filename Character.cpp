#include<stdio.h>

int main() {
	
	/*char a = 'a';
	printf("%c", a);*/

	char b, c;
	printf("ù ��° ���� �Է�:");
	scanf_s("%c", &b);
	getchar(); // ���� ���� �� ��� �޾��ִ� ����
	printf("�� ��° ���� �Է�:");
	scanf_s("%c", &c);
	printf("ù ��°:%c, �ι�° ����:%c", b, c);

	return 0;
}