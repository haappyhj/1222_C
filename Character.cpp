#include<stdio.h>

int main() {
	
	/*char a = 'a';
	printf("%c", a);*/

	char b, c;
	printf("첫 번째 문자 입력:");
	scanf_s("%c", &b);
	getchar(); // 엔터 넣을 때 대신 받아주는 역할
	printf("두 번째 문자 입력:");
	scanf_s("%c", &c);
	printf("첫 번째:%c, 두번째 문자:%c", b, c);

	return 0;
}