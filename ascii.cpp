#include<stdio.h>

int main() {


	//char a = 'A';
	//printf("%c\n", a); //A
	//printf("%d\n", a); //65

	/*char k;
	printf("대문자를 입력하세요");
	scanf_s("%c", &k);
	printf("소문자 %c", k+32);*/

	char i;
	printf("문자를 입력하세여");
	scanf_s("%c", &i);
	int result = (65 <= i && i <= 90) || (97 <= i && i <= 122) ? 1 : 0;
	printf("결과는 %d", result);

	return 0;
}


