#if 0

//���� variable
//������ �ʿ��� ���� : �޸��� ��ġ�� ����ϱ� ��Ʊ⶧���� ���� ��ü��
//��� : constant

//�ڷ���

//���� : 
	//short : 2byte(16bit) 
	//int : 4byte(32bit)
	//long : 8byte/4byte(64bit/32bit)
	//long long : 16byte/8byte/4byte

	//unsigned short/int/long : 0, ����� ���� <--> signed

//sizeof(�ڷ���) p.132�ϴ�

#include<stdio.h>
int main(void) {
	printf("%d", sizeof(long long));
}

//�����÷ο� : ���� ������ �Ѿ�� �ִ񰪿��� �ּڰ����� �Ѿ

#include<stdio.h>
#include<limits.h>

int main(void) {
	short a = SHRT_MAX;
	printf("%d \n", a);
	a = a + 1;
	printf("%d", a);
}

//16���� : 0xnn

//��� p.140
	//literal constant(�׳� ����)
	//symbolic constant : ����� �̸� ���� �� ����
// ���� : #define A 10 : define���� �ڷ��� ���� �Ұ�
// ����2 : const int a = 10
//��뿹�� : pi��

//�������� ���� ǥ����� p.142~147
//������ ��� ǥ���ϴ°�(signed����)
//1�� �����ϸ� ����, 0���� �����ϸ� ���
//2's complement(p.145)
//������ ����� ���
	//����� �����
	//0�� 1�� �����´�
	//1�� ���Ѵ�
//	1�ν���, ��簪 0, n��Ʈ -> -2^(n-1)
//	���� ���� �ϳ� �� �ش�

//�ε� �Ҽ����� : 
//floating point numbet <--> fixed point number
//fixed point number 3.14   123.4
// floating point number 0.314*10-->3.14
//						 0.314*10^2-->31.4
	//float 
	//double 
	//long double

//p.153
#include<stdio.h>
int main(void) {
	double x;
	x = (1.0e20 + 5) - 1.0e20; //1.0 * 10^20
	printf("%f\n", x);
}
//��� ����
//double�� �� ������ ����� �� �� ����
//16�ڸ����� ���� ����

//p.154 ������
//char
//ASCII : American Standard Code for Information Exchange
char c = 'A';
char c 65; //���� ������

//p.159 ���������μ��� char��
//char : 1byte unsigned char : 0~255
//				signed char : -128 ~ 127

#endif
