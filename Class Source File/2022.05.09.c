#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//chap11 pointer

//pointer : ����(�̱��ѵ�)
//�޸� �ּҸ� �����ϴ� ����

#if 0
int* a;
int *a=10000;//??

#endif

#if 0
int main() {
	int a = 10;
	int* pa = 0; //pa�� ������ ����, pa�� ����Ǵ� ���� �޸� �ּҷ� ��밡��

	//������ ������ 0�� ���� ������ �ּҰ� ������� �ʾ����� �ǹ���

	printf("%d\n", a);
	
	pa = &a; // &(address of opeerator) : ������ ����� �޸� �ּ�

	printf("%u\n", pa);

	// *pa //read or write, pa�� ������ ������ ��

	//pa�� ����� �ּҿ� read���� write����

	//write ����

	*pa = 100;

	printf("%d\n", a); //10�� �ƴ϶� 100 ���

	printf("%d\n", *pa);//

}
#endif

#if 0
int main() {
	int a = 10;
	int b = 30;
	int* pa = 0;
	int* pb = 0;

	pa = &a;
	pb = &b;

	*pb = *pa;
}
#endif

// int* pa = 0;//NULL==0

// * : dereferencing operator p.474

#if 0
int main() {
	int a = 0;

	int* pa = 0; //4byte

	printf("%u\n", pa); //1000

	pa = pa + 1;

	printf("%u\n", pa); //1004

	char* pc = 0; //1byte
	
	printf("%u\n", pa); //1000

	pc = pc + 1;

	printf("%u\n", pa); //1001

	float* pd = 0; //4byte
}
#endif


//p.484 ����
#if 0
int main() {
	int a = 20;
	int* pa = % a;

	printf("%d %p\n", a, pa);
	(*pa)++;
	printf("%d %p\n", a, pa);
	//���� ����/�ּҴ� �Ⱥ���
	// int temp = *pa;
	// temp++;
	// *pa = temp;
	//�̰Ŷ� ������

	printf("%d %p\n", a, pa);
	*pa++;
	printf("%d %p\n", a, pa);
	//���� �Ⱥ���/�ּҰ� ����
	// int temp = *pa;
	// temp++;
	// *pa = temp;
	//�̰Ŷ� ������
}
#endif

//p.484 ����ȯ
#if 0
int main() {
	int a;
	int* pa = % a;
	char* pc = (char*)pa;
}
#endif

//p.486 487
//call by value
//call by reference
#if 0
void foo(int a, int b) {
	a = 20;
	b = 10;
}

int main() {
	int a = 0;
	int b = 0;

	foo(a, b);

	//->(a,b)=(0,0)
	//call by value / ���� �ѱ�
}
#endif
#if 0
void foo(int* a, int* b) {
	*a = 20;
	*b = 10;
}

int main() {
	int a = 0;
	int b = 0;

	foo(a, b);

	//->(a,b)=(0,0)
	//call by reference / �ּ� ��ü�� �ѱ�
}
#endif

//p.491
//�Լ� ���� �� lifetime����� �ۼ��ϸ� ������ ���� ���� �ۼ��Ǵ� �Ͱ� ����
#if 0
int* bar(void) {
	int k = 20;
	return &k;
}

int main() {
	int* pa = bar();
	*pa = 30;
}
#endif

//p.492 �迭�� ������
#if 0
int main() {
	int a[] = { 10,20,30,40,50 };
	printf("%p\n", a); // �迭�� �̸��� �迭�� �����ּ� // ==&a[0]
	printf("%p\n", &a[0]); //a[0]�� �ּ� ��ȯ
	printf("%p\n", &a[1]); //a[1]�� �ּ� ��ȯ
}
#endif

//p.493
#if 0
int main() {
	int a[] = { 10,20,30,40,50 };

	//�迭�̸� a�� �迭�� �����ּ�
	//���� a�� ������ ó�� ��� ����
	printf("%p\n", a); //1000
	printf("%p\n", a+1); //1004
	printf("%d\n", *a); //10
	printf("%d\n", *(a+1)); //20

	//%p �ּ� 16����
	//%u ���� 10����

}
#endif

#if 0
void foo(int k[]) {
	*k = 30;
	*(k + 2) = 1000; //k[2]=1000;
}
int main() {
	int a[] = { 10,20,30,40,50 };
	foo(a);
}
#endif


//���� : a�� b�� ���� �ٲٴ� �Լ� foo�� �ۼ�
#if 0
void foo(int *pa, int *pb) {
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}
int main() {
	int a = 30;
	int b = 10;

	foo(% a, % b);
}
#endif
