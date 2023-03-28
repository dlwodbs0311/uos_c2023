#include <stdio.h>

int main(void) {

	char name[30], major[50], birth[30], studnum[30];  // char형 변수 4개를 배열로 선언했다.
	// 생년월일이랑 학번은 숫자이지만 0으로 시작하면 0이 사라져서 char형으로 했다.

	printf("- 이름: "); // '- 이름:'을 출력한다.
	scanf_s("%s", name, sizeof(name)); //- 이름 뒤에 name변수를 입력한다.

	printf("- 생년월일: "); // '- 생년월일:'을 출력한다.
	scanf_s("%s", birth, sizeof(birth)); // - 생년월일 뒤에 birth변수를 입력한다.

	printf("- 학번: "); // '- 학번: '을 출력한다.
	scanf_s("%s", studnum, sizeof(studnum)); // - 학번 뒤에 studnum변수를 입력한다.

	printf("- 학과명: "); // '- 학과명: '을 출력한다.
	scanf_s("%s", major, sizeof(major)); // - 학과명 뒤에 major변수를 입력한다.


	printf("이름: %s \n", name); // 이름: %s에서 %s자리에 name이 들어가고 출력된다.
	printf("생년월일: %s \n", birth); // 생년월일: %s에서 %s자리에 birth이 들어가고 출력된다.
	printf("학번: %s \n", studnum); // 학번: %s에서 %s자리에 studnum이 들어가고 출력된다.
	printf("학과명: %s \n", major); // 학과명: %s에서 %s자리에 major이 들어가고 출력된다.
}