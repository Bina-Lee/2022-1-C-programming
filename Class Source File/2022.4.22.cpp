#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>

#if 0
int bigger(int x, int y, int z) {
	x = (x > y) ? x : y;
	x = (x > z) ? x : z;
	return x;
}
int main() {
	int a, b,c;
	scanf("%d %d %d", &a, &b,&c);
	printf("%d", bigger(a, b,c ));
}
#endif

#if 0
int is_prime(int n) {
	int j = 1;
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			j = 0;
			break;
		}
	}
	return j;
}
int main() {
	int a;
	scanf("%d", &a);
	printf("%d", is_prime(a));
}
#endif

#if 0
int main() {
	srand((unsigned)time(NULL));
	printf("%d", rand());
}
#endif

#if 0
int main() {
	double result, value = 1.6;
	result = floor(value);
	primtf("%lf\n", result);

	result = ceil(value);
	primtf("%lf\n", result);

	//fabs(����,0) ����
	//pow(a,b) a^b
	//sqrt(a)
}
#endif

#if 0
#define PI 3.141592
int main() {

}
#endif

#if 0
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main() {
	int chance,true_num=0;
	printf("��ȸ�� �� �� �ٱ��?");
	scanf("%d", &chance);
	while (chance <= 0 || chance > 100) {
		printf("������ ��� �����Դϴ�. �ٽ� �Է��ϼ���");
		scanf("%d", &chance);
	}
	srand(time(0));
	int rand_num = ((rand()) % 100) + 1;
	printf("%d\n", rand_num);
	for (int i = 1; i <= chance; i++) {
		int a;
		printf("���ڸ� �Է��ϼ���(1~100) : ");
		scanf("%d", &a);
		if (a == rand_num) {
			printf("YOU WIN!");
			true_num = 1;
			break;
		}
		else if (a > rand_num) {
			printf("Down\n");
		}
		else printf("Up\n");
	}
	if (true_num == 0) {
		printf("YOU LOSE\nAnswer is %d \n", rand_num);
	}
}
#endif
