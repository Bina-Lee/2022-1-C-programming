#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//chap.10 배열
#if 0
int main() {
	int a[10];
		//a[0],a[1],a[2]...a[9]
}
#endif

//418 배열의 특징
// 1. 같은 형식
// 2. 연속된 메모리 공간

//419 경고
// 배열 갯수는 무조건 숫자로, 변수는 안됨
// 배열 갯수는 양수로
// 배열 갯수는 정수로
//--> 배열은 자연수 갯수로만 만들 것


//가장 큰 숫자 출력
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

//배열 index 사용할때 주의점(num[i]에서 i)
//	index로 정의되지 않은 수를 넣어도 컴파일러는 상관 안함
//	프로그래머만 오류가 생기는걸 알수 있음 정신차리고 코딩할 것

//424 배열의 초기화
#if 0
int main() {
	int a[5] = { 1,2,3,4,5 };
	int b[5] = { 1 }; //b[1~4]=0
	int num[] = { 1,2,3,4,5 }; //num[5]
}
#endif

//427 배열에 포함된 요소element들의 개수 구하기
#if 0
int main() {
	int num[] = { 1,2,3,4,5 };
	int cnt = sizeof(num)/sizeof(num[0]); //전체 사이즈 나누기 한개 사이즈
}
#endif

//428
#if 0
int main() {
	int a2[] = { 4,5,6 };
	int b2[] = { 4,5,6 };
	
	// if(a2==b2) 이딴 비교 하지 말것 / 배열 복사도 이딴식으로 안됨
	//error 뜸
	for (int i = 0; i < 5; i++) {
		if (a2[i] == b2[i]) { //이런 식으로 하나씩 비교할 것 / 하나씩 복사할 것
			/........
		}
	}
}
#endif

//434 배열과 함수
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
		printf("%d\n", a[i]);	//2,4,6,8,10이 출력됨
								//배열을 함수로 넘길때는 원본이 넘어감
								//배열 자체가 수정됨
	}
}
#endif

//438 원본 배열의 변경을 금지하는 방법
#if 0
void foo(const int _a[]) {	//const 중요
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

//445 n차원 배열
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

// 1. 승패판별
// 2. 컴퓨터vs사람
// 3. 컴퓨터 만능