#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#if 0
int factorial(int x) {
	if (x == 1) {
		return 1;
	}
	return x*factorial(x - 1);
}

int main() {
	printf("%d", factorial(5));
}
#endif

#if 0
int sumofz(int x) {
	if (x == 1) {
		return 1;
	}
	return x + sumofz(x - 1);
}

int main() {
	printf("%d", sumofz(5));
}
#endif

#if 0 //좀있다 하기
int count = 0;
void hanoi(int x,char from,char tmp,char to) {
	if (x == 1) {
		printf("%d번째 원판을 %c에서 %c로\n", 1, from, to);
		count++;
	}
	else {
		hanoi(x - 1, from, to, tmp);
		printf("%d번째 원판을 %c에서 %c로\n", x, from, to);
		count++;
		hanoi(x - 1, tmp,from, to);
	}
}
int main() {
	int n = 0;
	scanf("%d", &n);
	hanoi(n, 'A', 'B', 'C');
	printf("%d", count);
}
#endif

#if 0
int myfibo(int x) {
	if (x <= 0) {
		return 0;
	}
	else if (x == 1) {
		return 1;
	}
	else {
		return myfibo(x - 1) + myfibo(x - 2);
	}
}
int main() {
	int n;
	scanf("%d", &n);
	printf("%d", myfibo(n));
}
#endif
