// 함수와 변수 374~

// variable

//scope--범위
//lifetime--생존시간/프로그램 안에 존재하는 기간
	//전역변수 : 프로그램 시작-끝
	//지역변수 : 선언시점 스코프 - 스코프 끝

//전역변수 : 자동 초기화 to zero
//지역변수 : 자동 초기화 불가, garbage value

//변수 이름이 겹치는 경우
	//스코프 안에서는 지역변수가 전역변수보다 우선순위
	//애초에 선언 순서에서 이름을 안겹치게 만드는게 좋음

#include<stdio.h>

int z = 100; //전역변수(global variable) <-> 지역변수(local variable)

#if 0
int main() {  //block
	
	int i = 0; //-> 선언된 이후뷰터가 scope
	printf("%n", i);
}
#endif

#if 0
void whatisthis(void) {
	static int i = 0; // 384 static -> 지역변수한정 스코프 종료 수에도 변수 유지
										//유사 전역변수
										//못죽임 ㅅㄱ 그냥 선언하면 좀비임
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
	register int k = 10; //cpu 내 register에 넣음, 처리속도 빨라짐
							//컴파일러가 알아서 register 빼고 선언해줄거임
							// Because...중요도가 낮다고 판단할거임
							// 딱히 안씀
	//...........
}
#endif

#if 0
// 386 volatile
void foo(int i) {
	volatile int v = 20; //register에 있는 값은 휘발성, ram에 있는 값을 가져오게끔 함
							//CPU RAM외에 다른 센서 등 RAM을 공유하는 경우 RAM의 값이 변할 때 사용
							//임베디드에서 중요
	//...........
}
#endif

#if 0
//391
//external
#include<stdio.>

extern int i; //다른 파일에 선언되어있는 변수
				//global 변수로 선언
				//함수를 extern으로 선언할 경우 다른 source file에 있는 함수를 불러와 사용

int main() {
	i = i * 20;

	printf("%d",i)
}
#endif

#if 0
//global에서 선언된 static 변수
	//extern 시켜서 다른 source file에서 변수를 불러 쓸 수 없음
static int i = 20;
#endif

// 397 재귀호출 recursion 순환
// 함수가 자기 자신을 호출하는 함수

#if 0

int f(int v) { //v! 반환
	
	//v!==v*f(v-1)

	if (v == 1) return 1; //파고파고 들어가서 v가 1이면 1 반환하고 함수 반복 끝
							//탈출조건

	return v * v(v - 1);

}

int main() {
	int k;
	k = f(10);
	printf("10!은 %d", k);
}
#endif
#if 0
int fibo(int n) { //피보나치수열

	if (n == 0) return 0;
	if (n == 1) return 1;

	return fibo(n - 1) + fibo(n - 2);
}
#endif
#if 0
int k(int n) { //2^n을 구하는 함수 k
	if (n == 1)return 2;

	return 2 * k(n - 1);
}
#endif
