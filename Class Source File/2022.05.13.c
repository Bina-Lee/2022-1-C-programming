#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#if 0
int main() {
	int a = 10;
	printf("%d", a); //10출력
	printf("%X", &a); //a주소출력
	int* p = NULL;
	p = &a;
	printf("%x", p);
	printf("%x", *p); //a값 출력

}
#endif

#if 0
int main() {
	int a = 10;
	int* p = NULL;

	p = &a;

	//포인터로 a값 2배로 만들기
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

//포인터 변수의 size는 형식에 상관없이 똑같다

// int* pa=&a ->pa안에 저장된 주소로부터 int단위만큼(4byte)데이터를 불러옴
// int* p; p++ ->p다음 주소 (+4 //4byte)
// char로 하면 1만큼만 바뀜

#if 0
int main() {
	int a = 10, b = 20;
	printf("%d %d\n", a, b);
	//포인터변수로 값 변경
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
