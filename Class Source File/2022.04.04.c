#include<stdio.h>

#if 0
int main() {
	for (int i = 0; i < 100; i++) {
		if (i < 5) {
			//break; //�ݺ��� Ż��
			continue; //continue �Ʒ��� �ִ°Ŵ� �������, �׸��� �ݺ����� ��� ����
		}
		printf("%d\n", i); // 0,1,2,3,4 �����ϰ� 5���� 100���� ���
	}
}
#endif

#if 0
int main() {
	while (i < 10) {
		printf("%d\n", i);
		if (i == 5) {
			berak;
		}
	}
}
#endif

#if 0
int main() {
	do {
		printf("%d\n", i);
		if (i == 5) {
			break;
		}
		i++;
	}while(i<10)
}
#endif

#if 0
//�Ҽ��Ǻ���
int main() {
	int x = 1233237,;
	for (int i = 2; i < x; i++) {
		if (x % i == 0) {
			printf("�Ҽ��� �ƴ�");
			break;
		}
	}
}
#endif

#if 0
int main() {
	int x, y;
	int cnt_prime = 0;
	for (x = 100000; x >= 3; x--) {
		for (y = 2; y < x; y++) {
			if (x % y == 0) {
				break;
			}
			//
		}
		//if (x % y == 0) {
		//	printf("%d\n", x);
		//}
		if (x == y) {
			printf("%d\n", x);
			cnt_prime++;
		}
	}
	printf("�Ҽ��� %d��", cnt_prime);
	
}
#endif

//chap8 �Լ�

//p.323 �Լ�����
#if 0
void print_stars(void) {  //printf_stars �Լ��̸�
	int i;
	for (i = 0; i < 30; i++) {
		printf("*");
	}
	printf("\n");
	//return;
}

void print_n_stars(int n) {  //printf_stars �Լ��̸�
	int i;
	for (i = 0; i < n; i++) {
		printf("*");
	}
	printf("\n");
	//return;
}

int print_my_stars(void) {
	int i;
	for (i = 0; i < 30; i++) {
		printf("*");
	}
	printf("\n");
	return 30;
}

int do_something(int x, int y) {
	return x + y;
}

int isPrime(int x) {
	int i;
	for (i = 2; i < x - 1; i++) {
		if (x & i == 0) {
			return 0;
		}
	}
	return 1;
}

int main(void) {
	//print_stars(); //function call �Լ�ȣ��
	//print_n_stars(10);
	int n1 = 443;
	int n2 = 4535;
	int v;

	for (v = n1; v < n2; v++) {
		if (isPrime(v) == 1) {
			printf("�Ҽ� : %d", v);
		}
	}
}
#endif


#if 0
int main() {

}
#endif
