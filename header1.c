#include <stdio.h>

int lcm(int num1, int num2) { //lcm이라는 함수에 정수 자료형 nu1, num2를 넣었다.
	for (int i = 1; ; i++) { //i는 1부터 시작해서 1씩 증가한다. 제한은 없다.
		if (i % num1 == 0 && i % num2 == 0) { //i 를 num1, num2로 각각 나눈 나머지가 둘 다 0일 때 그 i이 값이 최소공배수이다. 
			return printf("최소공배수는 %d\n", i); //이 i를 출력한다.
		}
	}
} 

void lcmm(void) { //파라미터가 없는 함수이고 이름은 lcmm이다
	int num1, num2; // 정수 자료형 num1, num2를 지정해준다.
	printf("숫자 1: "); // 숫자1: 에 num1을 입력한다.
	scanf_s("%d", &num1);
	printf("숫자 2: "); // 숫자2: 에 num2를 입력한다.
	scanf_s("%d", &num2);
	for (int i = 1; ; i++) {  //i는 1부터 시작해서 1씩 증가한다. 제한은 없다.
		if (i % num1 == 0 && i % num2 == 0) {//i 를 num1, num2로 각각 나눈 나머지가 둘 다 0일 때 그 i이 값이 최소공배수이다. 
			return printf("최소공배수는 %d\n", i);//이 i를 출력한다.
		}
	}
}



int gcd(int num1, int num2) { //gcd라는 함수에 정수 자료형 num1, num2를 넣었다.


	for (int i = num1; i > 0; i--) { //i 는 num1 부터 시작해서 1씩 감소한다. i는 0보다 커야한다.
		if (num1 % i == 0 && num2 % i == 0) { // num1과 num2를 i로 나눈 나머지 모두가 0 일 때 그 i값이 최대공약수이다.
			return printf("최대공약수는 %d\n", i); //이 때 반복문을 멈추고 i를 출력한다.
		}
	}
}

void gcdd(void) { //파라미터가 없는 함수이고 이름은 gcdd이다
	int num1, num2;// 정수 자료형 num1, num2를 지정해준다.
	printf("숫자 1(작은 수): "); // 숫자1(작은 수): 에 num1을 입력한다.
	scanf_s("%d", &num1);
	printf("숫자 2(큰 수): "); // 숫자2(큰 수): 에 num2를 입력한다.
	scanf_s("%d", &num2);
	for (int i = num1; i > 0; i--) { //i 는 num1 부터 시작해서 1씩 감소한다. i는 0보다 커야한다.
		if (num1 % i == 0 && num2 % i == 0) { // num1과 num2를 i로 나눈 나머지 모두가 0 일 때 그 i값이 최대공약수이다.
			return printf("최대공약수는 %d\n", i); //이 때 반복문을 멈추고 i를 출력한다
		}
	}
}

int prime_number(int num) { //prime_number이라는 참수에 정수 자료형 num을 넣었다.
	for (int i = 2; i <= num - 1; i++) { //i는 2부터 시작하여 num-1까지 1씩 증가한다.
		if (num % i == 0) { //num을 i로 나눈 나머지가 0일 때 
			return printf("%d\n", 0); //소수가 아니라는 뜻의 0을 출력한다.
		}
	}
	return printf("%d\n", 1); //for문을 다 돌아도 num을 i로 나눈 나머지가 0이 나오지 않을 때 소수라는 뜻의 1을 출력한다.
}


void prime_numberr(void) { //파라미터가 없는 함수이고 이름은 prime_numberr이다.
	int num; //정수 자료형 num을 지정해준다.
	printf("소수인지 확인할 수를 입력하세요 : "); //소수인지 확인할 수를 입력하세요: 에 num을 입력한다.
	scanf_s("%d", &num); 

	for (int i = 2; i <= num - 1; i++) { //i는 2부터 시작하여 num-1까지 1씩 증가한다. 
		if (num % i == 0) {//num을 i로 나눈 나머지가 0일 때
			return printf("%d\n", 0); //소수가 아니라는 뜻의 0을 출력한다.
		}
	}
	return printf("%d\n", 1);//for문을 다 돌아도 num을 i로 나눈 나머지가 0이 나오지 않을 때 소수라는 뜻의 1을 출력한다.
}