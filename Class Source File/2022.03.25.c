#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#if 0
int main() {
	int price;
	scanf("%d", &price);
	int change = 10000 - price;
	printf("잔돈 : %d원\n", change);

	int a, b, c, d;
	a = change / 5000;
	change = change % 5000;

	b = change / 1000;
	change = change % 1000;

	c = change / 500;
	change = change % 500;

	d = change / 100;
	change = change % 100;

	printf("5천원 : %d\n1천원 : %d\n5백원 : %d\n1백원 : %d\n", a, b, c, d);

}
#endif

#if 0
int main() {
	int a,b;
	scanf("%d", &a);
	b = (a % 4 == 0) && (a % 100 != 0) || (a % 400 == 0);
	printf("%d",b);
}
#endif

//biggeer=(x>y)?x:y;

#if 0
int main() {
/*
	int a, n ;
	int a1, a2, a3, a4, a5, a6, a7;
	scanf("%d", &a);

	a1 = a / 64;
	a = a % 64;

	a2 = a / 32;
	a = a % 32;

	a3 = a / 16;
	a = a % 16;

	a4 = a / 8;
	a = a % 8;

	a5 = a / 4;
	a = a % 4;

	a6 = a / 2;
	a = a % 2;

	a7 = a;

	printf("%d%d%d%d%d%d%d", a1, a2, a3, a4, a5, a6, a7);
*/
/*
	unsigned int x = ;
	unsigned int mask = 1 << 7;
	printf("10진수 일단 출력");
	((x & mask) == 0) ? printf("0") : printf("1"), mask >>= 1;
	((x & mask) == 0) ? printf("0") : printf("1"), mask >>= 1;
	((x & mask) == 0) ? printf("0") : printf("1"), mask >>= 1;
	((x & mask) == 0) ? printf("0") : printf("1"), mask >>= 1;
	((x & mask) == 0) ? printf("0") : printf("1"), mask >>= 1;
	((x & mask) == 0) ? printf("0") : printf("1"), mask >>= 1;
	((x & mask) == 0) ? printf("0") : printf("1"), mask >>= 1;
*/

}
#endif
