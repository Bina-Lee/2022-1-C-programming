#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//chap.10 �迭
#if 0
int main() {
	int a[10];
		//a[0],a[1],a[2]...a[9]
}
#endif

//418 �迭�� Ư¡
// 1. ���� ����
// 2. ���ӵ� �޸� ����

//419 ���
// �迭 ������ ������ ���ڷ�, ������ �ȵ�
// �迭 ������ �����
// �迭 ������ ������
//--> �迭�� �ڿ��� �����θ� ���� ��


//���� ū ���� ���
#if 0
int main() {
	int num[5];
	for (int i = 0; i < 5; i++) {
		scanf("%d", &num[i]);
	}
	int largest = num[0];
	for (int i = 1; i < 5; i++) {
		largest = (largest > num[i]) ? largest : num[i];
	}
	printf("%d", largest);
}
#endif

//�迭 index ����Ҷ� ������(num[i]���� i)
//	index�� ���ǵ��� ���� ���� �־ �����Ϸ��� ��� ����
//	���α׷��Ӹ� ������ ����°� �˼� ���� ���������� �ڵ��� ��

//424 �迭�� �ʱ�ȭ
#if 0
int main() {
	int a[5] = { 1,2,3,4,5 };
	int b[5] = { 1 }; //b[1~4]=0
	int num[] = { 1,2,3,4,5 }; //num[5]
}
#endif

//427 �迭�� ���Ե� ���element���� ���� ���ϱ�
#if 0
int main() {
	int num[] = { 1,2,3,4,5 };
	int cnt = sizeof(num)/sizeof(num[0]); //��ü ������ ������ �Ѱ� ������
}
#endif

//428
#if 0
int main() {
	int a2[] = { 4,5,6 };
	int b2[] = { 4,5,6 };
	
	// if(a2==b2) �̵� �� ���� ���� / �迭 ���絵 �̵������� �ȵ�
	//error ��
	for (int i = 0; i < 5; i++) {
		if (a2[i] == b2[i]) { //�̷� ������ �ϳ��� ���� �� / �ϳ��� ������ ��
			/........
		}
	}
}
#endif

//434 �迭�� �Լ�
#if 0
void foo(int _a) {
	_a = 30;
}
int main() {
	int a = 10;
	foo(a);
	printf("%d", a);
}
#endif
#if 0
void foo(int _a[]) {
	for (int i = 0; i < 5; i++) {
		printf("%d\n", _a[i]);
	}
}
int main() {
	int a[5] = { 1,2,3,4,5 };
	foo(a);
}
#endif
#if 0
void foo(int _a[]) {
	for (int i = 0; i < 5; i++) {
		_a[i] = 2 * _a[1];
	}
}
int main() {
	int a[5] = { 1,2,3,4,5 };
	foo(a);
	for (int i = 0; i < 5; i++) {
		printf("%d\n", a[i]);	//2,4,6,8,10�� ��µ�
								//�迭�� �Լ��� �ѱ涧�� ������ �Ѿ
								//�迭 ��ü�� ������
	}
}
#endif

//438 ���� �迭�� ������ �����ϴ� ���
#if 0
void foo(const int _a[]) {	//const �߿�
	for (int i = 0; i < 5; i++) {
		_a[i] = 2 * _a[1];
	}
}
int main() {
	int a[5] = { 1,2,3,4,5 };
	foo(a);
	for (int i = 0; i < 5; i++) {
		printf("%d\n", a[i]);
	}
}
#endif

//445 n���� �迭
#if 0
int main() {
	int a[1080][1920][3];
	/// a[0][0], a[0][1],.....a[1][1],......a[1079][1919]

	int b[4][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9},
		{10,11,12}
	}
}
#endif

//455 tic-tac-toe game
#if 0
int main() {

}
#endif

// 1. �����Ǻ�
// 2. ��ǻ��vs���
// 3. ��ǻ�� ����