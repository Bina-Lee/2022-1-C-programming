#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//chap11 pointer

//pointer : 변수(이긴한데)
//메모리 주소를 저장하는 변수

#if 0
int* a;
int *a=10000;//??

#endif

#if 0
int main() {
	int a = 10;
	int* pa = 0; //pa는 포인터 변수, pa에 저장되는 것은 메모리 주소로 사용가능

	//포인터 변수의 0은 아직 적절한 주소가 저장되지 않았음을 의미함

	printf("%d\n", a);
	
	pa = &a; // &(address of opeerator) : 변수가 저장된 메모리 주소

	printf("%u\n", pa);

	// *pa //read or write, pa가 포인터 변수일 때

	//pa에 저장된 주소에 read할지 write할지

	//write 예제

	*pa = 100;

	printf("%d\n", a); //10이 아니라 100 출력

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


//p.484 예제
#if 0
int main() {
	int a = 20;
	int* pa = % a;

	printf("%d %p\n", a, pa);
	(*pa)++;
	printf("%d %p\n", a, pa);
	//값이 변함/주소는 안변함
	// int temp = *pa;
	// temp++;
	// *pa = temp;
	//이거랑 동일함

	printf("%d %p\n", a, pa);
	*pa++;
	printf("%d %p\n", a, pa);
	//값은 안변함/주소가 변함
	// int temp = *pa;
	// temp++;
	// *pa = temp;
	//이거랑 동일함
}
#endif

//p.484 형변환
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
	//call by value / 값만 넘김
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
	//call by reference / 주소 자체를 넘김
}
#endif

//p.491
//함수 종료 후 lifetime종료로 작성하면 엉뚱한 곳에 값이 작성되는 것과 동일
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

//p.492 배열과 포인터
#if 0
int main() {
	int a[] = { 10,20,30,40,50 };
	printf("%p\n", a); // 배열의 이름은 배열의 시작주소 // ==&a[0]
	printf("%p\n", &a[0]); //a[0]의 주소 반환
	printf("%p\n", &a[1]); //a[1]의 주소 반환
}
#endif

//p.493
#if 0
int main() {
	int a[] = { 10,20,30,40,50 };

	//배열이름 a는 배열의 시작주소
	//따라서 a는 포인터 처럼 사용 가능
	printf("%p\n", a); //1000
	printf("%p\n", a+1); //1004
	printf("%d\n", *a); //10
	printf("%d\n", *(a+1)); //20

	//%p 주소 16진수
	//%u 정수 10진수

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


//예제 : a와 b의 값을 바꾸는 함수 foo를 작성
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
