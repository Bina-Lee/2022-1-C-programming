#if 0

#include<stdio.h>

int main(void) {
	int a;
	float b;
	short c;

	printf("%d", sizeof(a));
}

#define pi 3.14



int main() {
	float a;
	scanf("%f", &a);
	printf("&.3f", a);
}

\n 줄바꿈
\t Tab : Space*4
\a 경고음

#endif
/*
%d : 10진수
%o : 8진수
%x : 16진수

#include<stdio.h>
int main() {

}
*/

#if 0
#include<stdio.h>
int main() {
	int a = 10, b = 20, z;
	z = b;
	b = a;
	a = z;
	printf("x값 %d y값 %d", a, b);
}
#endif
