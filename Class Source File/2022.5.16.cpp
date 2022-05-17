#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//chap 12 문자와 문자열
// 
//1. 문자와 문자열은 다르다

#if 0
int main() {
	char c = 'A'; //1byte,8bit /ASCII

	printf("%c\n", c);
}
#endif

#if 0
int main() {
	char b[3]; // Array of char
	b[0] = 'a';
	b[1] = 'b';
	b[2] = '\0'; //NULL character / ASCII code : 0
	//배열 마지막은 \0처리 : string의 끝임을 알려줌
	//n칸 배열에 넣을 수 있는 글자 최대 수는 n-1

	printf("%s\n", b);
}
#endif

#if 0
int main() {
	char str[4] = { 'a','b','c' };
	//char str[4] = "abc";
	printf("%s", str);

	//char str[10] = "";//빈 문자열

	//char str[] = "abc";//자동으로 크기 계산, 4칸짜리
}
#endif

#if 0
int main() {
	char c = 'a'; //1칸 --> %char
	char d[] = "a"; //2칸(a\0) --> %string
}
#endif

//p.521 문자열 상수와 포인터
///////////////////////////////////////////////////////////////////////////////////////
#if 0
int main() {
	char c = 'A';
	char* pc = &c;
	*pc = 'B';

	char* p[] = "helloword"; //주소, helloworld가 저장된 곳의 주소
	//p는 "helloword"가 저장된 곳의 시작 주소
	printf("%s\n", p); // 배열의 시작점은 포인터로 사용가능
	//배열 이름은 포인터로 사용할 수 있기때문에 포인터 변수의 유무와 상관없이 printf %s를 사용할 수 있다

	//p는 문자열 상수라서 읽기전용
	//쓰기시도하면 에러, 실행중 죽어버림
}
#endif
////////////////////////////////////////////////////////////////////////////////////////

//12.2문자입출력 라이브러리

//p.526

//getchar //입력값 (표시) + Enter 입력 //buffering + echo
//getch //입력값 (Enter 없음) 표시 안함 //
//getche //입력값 (Enter 없음) 표시 //echo

// buffering은 enter입력 기다림
// echo는 입력값 보여줄지 말지

//putchar
//_getch
//_putch
#if 0
int main() {
	int ch;
	ch = getch();
	//putchar(ch);
	//putch(ch);
	printf("%c\n", ch);
}
#endif

//12.3문자열 입출력 라이브러리

//scanf는 스페이스 공백 앞까지만 읽음

#if 0
int main() {
	char str[100];

	gets(str, 99); //getstring

	printf("%s\n", str);
}
#endif

//12.4 문자처리 라이브러리
#include<ctype.h>
//isalpha //알파벳인지
//isupper //대문자인지
//islower //소문자인지
//isdigit //숫자인지
//isalnum //알파벳 혹은 숫자인지
//isxdigit 16진수에 사용되는 숫자,문자인지
//isspace 공백 탭
//ispunct 쉼표인지
//isprintf 눈에 보이는 문자인지
//iscntrl 제어문자(ex)ctrl c)
//isascii

//toupper : 대문자로 바꿔줌
//tolower : 소문자로 바꿔줌

//printf("%c\n",toupper(ch);
#if 0
int main() {
	int ch;
	ch = getche();
	if (isalpha(ch) == 1) {
		printf("%c는 알파벳입니다\n", ch);
	}
}
#endif

//12.5 문자열 처리 함수
#include<string.h>
//p.53..
#if 0
int main() {
	char str[100];
	gets(str, 99);
	//strlen : string length
	printf("문자열길이 %d\n", strlen(str));

	//strcmp //string compare
	//두 문자열이 같은지 비교
	//같으면 0을 반환 **주의
	//다르면 사전기준 몇칸 앞인지 뒤인지를 반환 //음수,양수 둘 다 가능
	char str2[100];
	gets(str2, 99);
	printf("문자열 비교결과 %d\n", strcmp(str, str2));
}
#endif

#if 1
int main() {
	char str[100], str2[100];
	// strcpy : string copy
	// str2 = str 배열복사가 불가능하기 때문에 strcpy를 사용해야됨
	strcpy(str2, str);

	//strcat : string concatenation
	//문자열 붙이기
	strcat(str, str2);
	//str이랑 str2의 문자열을 붙여버림

	//strchr
	//문자열에서 문자의 위치를 찾는다
	char* pa = strchr(str, 'e');
	//출력시키면 e부터 쭉 출력함

	//strstr
	//문자열 a에서 문자열 b의 위치를 찾는다
	char* b = strstr(str, "llo");
	//llo출력

}
#endif

//~537인가