#if 0

#include<stdio.h>

int main(void) {

	int x, y, sum;
	//int : integer, 정수
	x = 100;//대입 : assignment
	y = 200;
	sum = x + y;
	printf("sum is \n %d", sum);//%d : decial 십진수 format specifier

	return 0;
}

//주석
/*
multiline comment
*/

//들여쓰기 : 가독성, readability

//3.5 변수
// p:101 : 변수는 사용되기 전에 선언되어야 한다.

//변수 이름 규칙
//영문자, 숫자, 언더바
//공백안됨
//첫글자 : 영어 or 언더바
//대소문자 구별함 : case-sensitive
//c언어 함수들과 같은건 사용불가 / keyword 안됨(p.104)

//p.105
//variable initialization 변수 초기화
//*****

//3.6 수식과 연산
//사칙연산, 나머지(%)

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
	printf(" % s", "hello"); //%s : 문자열

	return 0;

}
	//3.8 scanf
//입력 기능

int main(void) {

	float a = 0;

	scanf("%f", &a);

	// & : ampersand

	printf("input number is %d \n",a);
}

//#define _CRT_SECURE_NO_WARNINGS
//scanf 사용시 ;;ㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋ
//윈도우 microsoft visual studio에서만 사용...ㅋㅋ 무시해도 됨

//%lf : long float : 긴 유리수, 정밀값\

//%~ : format specifier

#endif
