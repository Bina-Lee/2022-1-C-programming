//chapter6 조건문

//p.255

//3가지 제어구조 == 실행flow

// sequence 순차구조

// selection 선택구조

//iteration 반복구조

// if문
#if 0
#include<stdio.h>
int main() {
	int x = 10;

	if (x > 10) {
		printf("10보다 큼");
	}
	else if (x > 5) {
		printf("5보다 큼");
	}
	else {
		printf("5보다 안큼 ㅅㄱ");
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
		printf("윤년");
	}
	else {
		printf("윤년아님 ㅅㄱ");
	}
}
#endif

//nested if
#if 0
if (year % 4 == 0) {
	if (year % 100 != 0) {
		if (year % 400 == 0) {
			printf("윤년");
		}
	}
}
#endif

//p.244 switch
//if문의 독특한 형태
#if 0
#include<stdio.h>
int main() {
	int x;
	scanf("%d", &x);
	switch (x) {
	case 10:
		printf("사과");
		break;
	case 20;
		printf("배");
		break;
	case 30;
		printf("포도");
		break;
	default:
		printf("입력오류");
	}
}
#endif
//switch문은 모두 if문으로 작성가능
//if문은 switch문으로 작성 불가능한 경우
//switch문에 조건은 실수는 불가, 정수만 가능

//goto문 p.252
//goto문이 필요없는 이유 p.253

//phapter 7
//반복문 while for do--while

/*
while (x > 10) {
	printf("hello");
}
*/

//p.267
//구구단 출력

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

//for문(while문의 진화형)/(while문,for문 간 교체가능)
/*
for (초기값; 조건; 증감) {
	수식
}
*/

//nested for문 2중for문

