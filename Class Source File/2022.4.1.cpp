#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#if 0
int main() {
	int a;
	scanf("%d", &a);
	if (a >= 90)printf("A");
	else if (a >= 80)printf("B");
		else printf("F");
	}
}
#endif

#if 0
int main() {
	char a;
	scanf("%c", &a);;
	if ((a >= 65) && (a <= 90)) printf("���� �빮��");
	else if ((a >= 97) && (a <= 122)) printf("���� �ҹ���");
	else if ((a >= 48) && (a <= 57)) printf("����");
	else printf("Ư������");
}

int main() {
	char a;
	scanf("%c", &a);;
	if ((a >= 'A') && (a <= 'Z')) printf("���� �빮��");
	else if ((a >= "a") && (a <= 'z')) printf("���� �ҹ���");
	else if ((a >= '0') && (a <='9')) printf("����");
	else printf("Ư������");
}
#endif

#if 0
int main() {
	int a, b;
	char c;
	scanf("%d %c %d", &a, &c, &b);
	switch(c) {
		case '+' : printf("%d", a + b); break;
		case '-' : printf("%d", a - b); break;
		case '*' : printf("%d", a * b); break;
		case '/' : printf("%d", a / b); break;
		default : printf("error");
	}
}
#endif

#if 0
int main() {
	int i = 0;
	while (i <= 10) {
		printf("%d\n", i);
		i++;
	}
}
#endif

#if 0
int main() {
	int i=0;
	do {
		printf("%d", i);
			i++;
	} while (i <= 10);
}
#endif

#if 0
int main() {
	int n,r=1;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		r = r*i;
	}
	printf("%d", r);
}
#endif