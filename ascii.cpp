#include<stdio.h>

int main() {


	//char a = 'A';
	//printf("%c\n", a); //A
	//printf("%d\n", a); //65

	/*char k;
	printf("�빮�ڸ� �Է��ϼ���");
	scanf_s("%c", &k);
	printf("�ҹ��� %c", k+32);*/

	char i;
	printf("���ڸ� �Է��ϼ���");
	scanf_s("%c", &i);
	int result = (65 <= i && i <= 90) || (97 <= i && i <= 122) ? 1 : 0;
	printf("����� %d", result);

	return 0;
}


