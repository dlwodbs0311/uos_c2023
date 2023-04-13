#include <stdio.h>

void base_transformation(int num, int base) { // base_transformation 이라는 이름으로 함수를 선언하고 정수 자료형 num과 base를 지정해준다.
    if (num == 0) { // num이 0이면 return한다.
        return;
    }
    base_transformation(num / base, base); // base_transformation 함수에 num/base, base를 넣어준다.
    int remainder = num % base; // 정수 remainder를 num 을 base로 나눈 나머지로 지정한다.
    if (remainder < 10) { //remainder가 10보다 작으면 그 값을 출력하고
        printf("%d", remainder);
    }
    else {
        printf("%c", remainder - 10 + 'A'); // 10보다 크면 'A' 에 remainder-10 을 더한 값을 ASCII코드 값으로 출력한다.
    }
}

int main() {
    int num, base; // 정수 num, base를 지정해주고
    printf("변환할 10진수 입력 : "); //10진수 num을 입력한다.
    scanf_s("%d", &num);
    printf("변환할 진법 입력 (2-16): "); //진법 base를 입력한다.
    scanf_s("%d", &base);
    printf("%d의 %d진수 변환 값 : ", num, base); 
    base_transformation(num, base); //num 의 base진수 변환 값이 출력된다
}