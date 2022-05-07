// �Լ��� ���� 374~

// variable

//scope--����
//lifetime--�����ð�/���α׷� �ȿ� �����ϴ� �Ⱓ
	//�������� : ���α׷� ����-��
	//�������� : ������� ������ - ������ ��

//�������� : �ڵ� �ʱ�ȭ to zero
//�������� : �ڵ� �ʱ�ȭ �Ұ�, garbage value

//���� �̸��� ��ġ�� ���
	//������ �ȿ����� ���������� ������������ �켱����
	//���ʿ� ���� �������� �̸��� �Ȱ�ġ�� ����°� ����

#include<stdio.h>

int z = 100; //��������(global variable) <-> ��������(local variable)

#if 0
int main() {  //block
	
	int i = 0; //-> ����� ���ĺ��Ͱ� scope
	printf("%n", i);
}
#endif

#if 0
void whatisthis(void) {
	static int i = 0; // 384 static -> ������������ ������ ���� ������ ���� ����
										//���� ��������
										//������ ���� �׳� �����ϸ� ������
	i++;
	printf("%d\n", i);
}
int main() {
	for (i = 1; i <= 10; i++) {
		whatisthis();
	}
}
#endif

#if 0
// p.386
// register
void foo(int i) {
	register int k = 10; //cpu �� register�� ����, ó���ӵ� ������
							//�����Ϸ��� �˾Ƽ� register ���� �������ٰ���
							// Because...�߿䵵�� ���ٰ� �Ǵ��Ұ���
							// ���� �Ⱦ�
	//...........
}
#endif

#if 0
// 386 volatile
void foo(int i) {
	volatile int v = 20; //register�� �ִ� ���� �ֹ߼�, ram�� �ִ� ���� �������Բ� ��
							//CPU RAM�ܿ� �ٸ� ���� �� RAM�� �����ϴ� ��� RAM�� ���� ���� �� ���
							//�Ӻ���忡�� �߿�
	//...........
}
#endif

#if 0
//391
//external
#include<stdio.>

extern int i; //�ٸ� ���Ͽ� ����Ǿ��ִ� ����
				//global ������ ����
				//�Լ��� extern���� ������ ��� �ٸ� source file�� �ִ� �Լ��� �ҷ��� ���

int main() {
	i = i * 20;

	printf("%d",i)
}
#endif

#if 0
//global���� ����� static ����
	//extern ���Ѽ� �ٸ� source file���� ������ �ҷ� �� �� ����
static int i = 20;
#endif

// 397 ���ȣ�� recursion ��ȯ
// �Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ�

#if 0

int f(int v) { //v! ��ȯ
	
	//v!==v*f(v-1)

	if (v == 1) return 1; //�İ��İ� ���� v�� 1�̸� 1 ��ȯ�ϰ� �Լ� �ݺ� ��
							//Ż������

	return v * v(v - 1);

}

int main() {
	int k;
	k = f(10);
	printf("10!�� %d", k);
}
#endif
#if 0
int fibo(int n) { //�Ǻ���ġ����

	if (n == 0) return 0;
	if (n == 1) return 1;

	return fibo(n - 1) + fibo(n - 2);
}
#endif
#if 0
int k(int n) { //2^n�� ���ϴ� �Լ� k
	if (n == 1)return 2;

	return 2 * k(n - 1);
}
#endif
