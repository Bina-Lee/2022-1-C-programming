#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#if 0
int main() {
	int a = 10;
	printf("%d", a); //10���
	printf("%X", &a); //a�ּ����
	int* p = NULL;
	p = &a;
	printf("%x", p);
	printf("%x", *p); //a�� ���

}
#endif

#if 0
int main() {
	int a = 10;
	int* p = NULL;

	p = &a;

	//�����ͷ� a�� 2��� �����
	*p = *p * 2;
	printf("%d", a);
	//========
}
#endif

#if 0
int main() {
	int a = 10;
	int b = 20;
	int* p = NULL;

	p = &a;

	*p = *p * 2;
	printf("%d", a);

	p = &b;
}
#endif

//������ ������ size�� ���Ŀ� ������� �Ȱ���

// int* pa=&a ->pa�ȿ� ����� �ּҷκ��� int������ŭ(4byte)�����͸� �ҷ���
// int* p; p++ ->p���� �ּ� (+4 //4byte)
// char�� �ϸ� 1��ŭ�� �ٲ�

#if 0
int main() {
	int a = 10, b = 20;
	printf("%d %d\n", a, b);
	//�����ͺ����� �� ����
	int c;
	int* x;
	int* y;
	x = &a;
	y = &b;
	c = *x;
	*x = *y;
	*y = c;
	printf("%d %d\n", a, b);
	//==========
}
#endif
