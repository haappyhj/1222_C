#include<stdio.h>

int main() {

	/*if (3 > 1) {
		printf("이 코드가 실행됨\n");

	}
	printf("프로그램 끝");*/

	//printf("정수를 입력하세요");
	//int num;
	//scanf_s("%d", &num);

	//if (num > 0) {
	//	printf("입력하신 숫자는 양의 정수입니다\n");

	//}
	//printf("프로그램 끝");

	//printf("정수를 입력하세요");
	//int num;
	//scanf_s("%d", &num);

	//if (num%2==0) {

	//	printf("이 숫자는 짝수입니다\n");

	//}

	//printf("키를 입력하세요");
	//int height;
	//scanf_s("%d", &height);
	//if (height > 140) {
	//	printf("놀이기구 탈 수 있습니다");

	//}
	//else {

	//	printf("놀이기구 탈 수 없습니다");
	//}

	//printf("숫자를 입력하세요");
	//int k;
	//scanf_s("%d", &k);
	//if (k%2==0) {
	//	printf("짝수입니다");

	//}
	//else {

	//	printf("홀수입니다");
	//}

	/*int num;
	printf("숫자 입력");
	scanf_s("%d", &num);

	if (num > 0) {
		printf("양의 정수");
	}
	else if (num == 0) {
		printf("0입니다.");
	}
	else {
		printf("음의 정수");
	}*/

	//int num;
	//printf("점수 입력");
	//scanf_s("%d", &num);

	//if (90<=num && num <=100) { // && 쓰기!!!
	//	printf("A입니다");
	//}
	//	else if (80 <= num && num < 90) {
	//		printf("B입니다.");
	//}
	//		else if (70 <= num && num < 80) {
	//			printf("C입니다.");
	//}
	//			else {
	//				printf("F입니다");
	//}

	//int a;
	//if (a>0) {
	//	printf("양수입니다.");
	//	if (a < 10) {
	//		printf("10보다 작습니다");
	//	}

	//}
	//else {
	//	printf("0 또는 음수입니다.");

	//}

	int k;
	printf("숫자 입력해라");
	scanf_s("%d", &k);
	if (k > 0) {
		printf("양수입니다.");
		if (k % 2 == 0) {
			printf("k는 양의 짝수입니다");
		}
			else {
			printf("k는 양의 홀수입니다");
		}
		}

	
	else if (k < 0) {
		printf("0 또는 음수입니다.");
		if (k % 2 == 0) {
			printf("k는 음의 짝수입니다");
		}
		else {
			printf("k는 음의 홀수입니다");
		}
	}

				else {
					printf("0입니다.");
	}
	
	return 0;
}
