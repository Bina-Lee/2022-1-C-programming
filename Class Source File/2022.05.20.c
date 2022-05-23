#include<stdio.h>
#if 1
int main() {

	int a = 10;
	char b = 'A';

	printf("%d\n", sizeof(a));

	int* pa = &a;
	char* pb = &b;

	printf("%d\n", a);
	printf("%p\n", &a);
	printf("%d\n", *pa);
	printf("%p\n", pa);
	printf("%prkRk\n", &pa);

	// a = 10
	// &a=
	// *pa=
	// pa=
	// &pa

	printf("%d\n", sizeof(pa));
	printf("%d\n", sizeof(pb));

	//pa와 pb가 각각 int와 char로 선언되었으므로 각각 4, 1byte를 나타내며
	//pa+1과 pb+1은 각각 4, 1 만큼 차이가 날 것이다

	int arr[5] = { 10,20,30,40,50 };
	int* p = arr;

	printf("%d\n", arr);
	printf("%d\n", &arr);
	printf("%d\n", *arr);
	printf("%d\n", arr[0]);
	printf("%d\n", arr + 1);
	printf("%d\n", *(arr + 1));
	printf("%d\n", arr[1]);

	printf("%d\n", p);
	printf("%d\n", &p);
	printf("%d\n", *p);
	printf("%d\n", *(p+1));
}
#endif

//oj1518
#if 0
#include<stdio.h>
#include<string.h>
int main() {
	char A[100], B[100];
	gets(A);
	gets(B);

	for (int i = 0; i < 100; i++) {
		if (B[i] == '\0')break;

		char* pa = strchr(A, B[i]);
		*pa = '_';
	}
	printf("%s", A);

}
#endif

//oj1424
#if 0
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
	char A[60];
	gets(A);

	int check=0;

	for (int i = 0; i < 60; i++) {
		if (A[i] == '\0') {
			check = i;
			break;
		}
	}
	
	printf("%d", check);

	for (int i = check; i >= 0; i--) {
		printf("%c", A[i]);
	}
}
#endif

#if 0
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
	char A[60];
	char B[60];
	gets(A);

	int check = 0;

	for (int i = 0; i < 60; i++) {
		if (A[i] == '\0') {
			check = i;
			break;
		}
	}

	

	for (int i = 0; i<check; i++) {
		B[i] = A[check - i-1];
	}
	B[check] = '\0';

	printf("%s", B);
}
#endif
