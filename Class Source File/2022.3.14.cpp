#if 0

//변수 variable
//변수가 필요한 이유 : 메모리의 위치를 기억하기 어렵기때문에 만든 대체제
//상수 : constant

//자료형

//정수 : 
	//short : 2byte(16bit) 
	//int : 4byte(32bit)
	//long : 8byte/4byte(64bit/32bit)
	//long long : 16byte/8byte/4byte

	//unsigned short/int/long : 0, 양수로 정의 <--> signed

//sizeof(자료형) p.132하단

#include<stdio.h>
int main(void) {
	printf("%d", sizeof(long long));
}

//오버플로우 : 변수 범위를 넘어서면 최댓값에서 최솟값으로 넘어감

#include<stdio.h>
#include<limits.h>

int main(void) {
	short a = SHRT_MAX;
	printf("%d \n", a);
	a = a + 1;
	printf("%d", a);
}

//16진수 : 0xnn

//상수 p.140
	//literal constant(그냥 숫자)
	//symbolic constant : 상수에 이름 붙일 수 있음
// 예시 : #define A 10 : define사용시 자료형 지정 불가
// 예시2 : const int a = 10
//사용예시 : pi값

//내부적인 정수 표현방식 p.142~147
//음수를 어떻게 표현하는가(signed에서)
//1로 시작하면 음수, 0으로 시작하면 양수
//2's complement(p.145)
//음수를 만드는 방법
	//양수를 만든다
	//0과 1을 뒤집는다
	//1을 더한다
//	1로시작, 모든값 0, n비트 -> -2^(n-1)
//	음에 값을 하나 더 준다

//부동 소수점형 : 
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
//계산 못함
//double은 더 정밀한 계산을 할 수 있음
//16자리까지 저장 가능

//p.154 문자형
//char
//ASCII : American Standard Code for Information Exchange
char c = 'A';
char c 65; //둘이 같은거

//p.159 정수형으로서의 char형
//char : 1byte unsigned char : 0~255
//				signed char : -128 ~ 127

#endif
