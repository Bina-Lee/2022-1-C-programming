#if 0

#include<stdio.h>

int main(void) {

	int x, y, sum;
	//int : integer, ����
	x = 100;//���� : assignment
	y = 200;
	sum = x + y;
	printf("sum is \n %d", sum);//%d : decial ������ format specifier

	return 0;
}

//�ּ�
/*
multiline comment
*/

//�鿩���� : ������, readability

//3.5 ����
// p:101 : ������ ���Ǳ� ���� ����Ǿ�� �Ѵ�.

//���� �̸� ��Ģ
//������, ����, �����
//����ȵ�
//ù���� : ���� or �����
//��ҹ��� ������ : case-sensitive
//c��� �Լ���� ������ ���Ұ� / keyword �ȵ�(p.104)

//p.105
//variable initialization ���� �ʱ�ȭ
//*****

//3.6 ���İ� ����
//��Ģ����, ������(%)

//3.7 printf
//int float %d %f
//char : character
int main(void) {
	//110
	int a = 0;
	float b = 0.0;
	char c = 'a';

	printf("%d", a);
	printf("%f", b);
	printf("%c", c);
	printf(" % s", "hello"); //%s : ���ڿ�

	return 0;

}
	//3.8 scanf
//�Է� ���

int main(void) {

	float a = 0;

	scanf("%f", &a);

	// & : ampersand

	printf("input number is %d \n",a);
}

//#define _CRT_SECURE_NO_WARNINGS
//scanf ���� ;;��������������������
//������ microsoft visual studio������ ���...���� �����ص� ��

//%lf : long float : �� ������, ���а�\

//%~ : format specifier

#endif
