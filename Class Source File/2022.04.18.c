#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//chap.8
#if 0
int main() {
	//double a = sin(double x);
	double x = 0.0;
	double result = 0.0;
	//sin - argument,parameter
	//x->argument,sin(x)¿¡¼­ x->parameter
	//x : radian
	//degree->radianº¯È¯
	//radian = degree * pi / 180
	
	//result = sin(x);
	
	//result = pow(10.0, 3.0);//10^3°è»ê
	//result = sqrt(16.0);
	//result = fabs(-10.0);//fp absolute number Àý´ñ°ª
	printf("%f\n", result);
}
#endif
//353
#if 0
#define pi 3.141592
int main() {
	double height, distance, tree_height, degrees, radians;
	scanf("%lf %lf %lf", &distance, &height, &degrees);
	radians = degrees * (3.141592 / 180.0);
	tree_height = tan(radians) * distance + height;
	printf("%.2f", tree_height);
}
#endif
//343
#if 0
#include<stdlib.h>
#include<time.h>
int main() {
	//printf("%d", rand());
	srand(time(0));//seed number¸¦ ¼³Á¤ÇÏ´Â ÇÔ¼ö
	printf("%d",time(0));

}
#endif

#if 0
#include<stdlib.h>
int main() {
	int x0=0, x1=0, x2=0, x3=0, x4=0, x5=0, x6=0, x7=0, x8=0, x9=0,r;
	for (int i = 0; i < 100000; i++) {
		r = rand() % 10;
		switch (r) {
		case 0:x0++; break;
		case 1:x1++; break;
		case 2:x2++; break;
		case 3:x3++; break;
		case 4:x4++; break;
		case 5:x5++; break;
		case 6:x6++; break;
		case 7:x7++; break;
		case 8:x8++; break;
		case 9:x9++; break;
		}
	}
	printf("%d\n", x0);
	printf("%d\n", x1);
	printf("%d\n", x2);
	printf("%d\n", x3);
	printf("%d\n", x4);
	printf("%d\n", x5);
	printf("%d\n", x6);
	printf("%d\n", x7);
	printf("%d\n", x8);
	printf("%d\n", x9);
}
#endif

#if 0
#include <stdlib.h>
#include <time.h>
int main() {
	int a,b;
	scanf("%d", &a);
	srand(time(0));
	b = rand() % 3;
	switch (b - a) {
		case -2:printf("Áü"); break;
		case -1:printf("ÀÌ±è"); break;
		case 0:printf("ºñ±è"); break;
		case 1:printf("Áü"); break;
		case 2:printf("ÀÌ±è"); break;
		default:printf("error");
	}
}
#endif
