#include <stdio.h>

void base_transformation(int num, int base) { // base_transformation �̶�� �̸����� �Լ��� �����ϰ� ���� �ڷ��� num�� base�� �������ش�.
    if (num == 0) { // num�� 0�̸� return�Ѵ�.
        return;
    }
    base_transformation(num / base, base); // base_transformation �Լ��� num/base, base�� �־��ش�.
    int remainder = num % base; // ���� remainder�� num �� base�� ���� �������� �����Ѵ�.
    if (remainder < 10) { //remainder�� 10���� ������ �� ���� ����ϰ�
        printf("%d", remainder);
    }
    else {
        printf("%c", remainder - 10 + 'A'); // 10���� ũ�� 'A' �� remainder-10 �� ���� ���� ASCII�ڵ� ������ ����Ѵ�.
    }
}

int main() {
    int num, base; // ���� num, base�� �������ְ�
    printf("��ȯ�� 10���� �Է� : "); //10���� num�� �Է��Ѵ�.
    scanf_s("%d", &num);
    printf("��ȯ�� ���� �Է� (2-16): "); //���� base�� �Է��Ѵ�.
    scanf_s("%d", &base);
    printf("%d�� %d���� ��ȯ �� : ", num, base); 
    base_transformation(num, base); //num �� base���� ��ȯ ���� ��µȴ�
}