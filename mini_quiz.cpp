#include<stdio.h>

//문제1
int main() {
	//	printf("문자를 입력하세요");
	//		char k;
	//		scanf_s("%c",&k);
	//		if (65 <= k && k <= 90) {
	//			printf("대문자입니다\n");
	//		}
	//		else if (97 <= k && k <= 122) {
	//			printf("소문자입니다\n");
	//		}
	//		else {
	//			printf("기타입니다\n");
	//
	//		}
	//		}

	//문제2
	printf("정수를 입력하세요");
	int i;
	scanf_s("%d", &i);
	if (i < 0) {
		printf("실내활동 권장\n");
	}
		else if (0 <= i && i < 40) {
			printf("실외활동 권장\n");
	}
			else {
				printf("실내활동 권장\n");
	}
}





	