//chapter6 ���ǹ�

//p.255

//3���� ����� == ����flow

// sequence ��������

// selection ���ñ���

//iteration �ݺ�����

// if��
#if 0
#include<stdio.h>
int main() {
	int x = 10;

	if (x > 10) {
		printf("10���� ŭ");
	}
	else if (x > 5) {
		printf("5���� ŭ");
	}
	else {
		printf("5���� ��ŭ ����");
	}
}
#endif
//y=(x>5)?4:7;

#if 0
#include<stdio.h>
int main() {
	int year;
	scanf("%d", &year);
	if ((year % 4 == 0) && (year % 100 != 0) && (year % 400 == 0)) {
		printf("����");
	}
	else {
		printf("����ƴ� ����");
	}
}
#endif

//nested if
#if 0
if (year % 4 == 0) {
	if (year % 100 != 0) {
		if (year % 400 == 0) {
			printf("����");
		}
	}
}
#endif

//p.244 switch
//if���� ��Ư�� ����
#if 0
#include<stdio.h>
int main() {
	int x;
	scanf("%d", &x);
	switch (x) {
	case 10:
		printf("���");
		break;
	case 20;
		printf("��");
		break;
	case 30;
		printf("����");
		break;
	default:
		printf("�Է¿���");
	}
}
#endif
//switch���� ��� if������ �ۼ�����
//if���� switch������ �ۼ� �Ұ����� ���
//switch���� ������ �Ǽ��� �Ұ�, ������ ����

//goto�� p.252
//goto���� �ʿ���� ���� p.253

//phapter 7
//�ݺ��� while for do--while

/*
while (x > 10) {
	printf("hello");
}
*/

//p.267
//������ ���

#if 0
#include<stdio.h>
int main() {
	int i;
	scanf("%d", &x);
	while (i < 10) {
		printf("%d x %d = %d\n", x, i, x * i);
	}
}
#endif

#if 0
#include<stdio.h>
int main() {
	int sum = 0, x, i = 1;
	scanf("%d", &x);
	while (i <= x) {
		sum = sum + i;
		i++;
	}
	printf("%d", sum);
}
#endif

//p.279 do while
/*
while (x > 5) {
	printf("hello");
}

do {
	printf("hello");
} while (x > 5);
*/

//for��(while���� ��ȭ��)/(while��,for�� �� ��ü����)
/*
for (�ʱⰪ; ����; ����) {
	����
}
*/

//nested for�� 2��for��

