#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//chap 12 ���ڿ� ���ڿ�
// 
//1. ���ڿ� ���ڿ��� �ٸ���

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
	//�迭 �������� \0ó�� : string�� ������ �˷���
	//nĭ �迭�� ���� �� �ִ� ���� �ִ� ���� n-1

	printf("%s\n", b);
}
#endif

#if 0
int main() {
	char str[4] = { 'a','b','c' };
	//char str[4] = "abc";
	printf("%s", str);

	//char str[10] = "";//�� ���ڿ�

	//char str[] = "abc";//�ڵ����� ũ�� ���, 4ĭ¥��
}
#endif

#if 0
int main() {
	char c = 'a'; //1ĭ --> %char
	char d[] = "a"; //2ĭ(a\0) --> %string
}
#endif

//p.521 ���ڿ� ����� ������
///////////////////////////////////////////////////////////////////////////////////////
#if 0
int main() {
	char c = 'A';
	char* pc = &c;
	*pc = 'B';

	char* p[] = "helloword"; //�ּ�, helloworld�� ����� ���� �ּ�
	//p�� "helloword"�� ����� ���� ���� �ּ�
	printf("%s\n", p); // �迭�� �������� �����ͷ� ��밡��
	//�迭 �̸��� �����ͷ� ����� �� �ֱ⶧���� ������ ������ ������ ������� printf %s�� ����� �� �ִ�

	//p�� ���ڿ� ����� �б�����
	//����õ��ϸ� ����, ������ �׾����
}
#endif
////////////////////////////////////////////////////////////////////////////////////////

//12.2��������� ���̺귯��

//p.526

//getchar //�Է°� (ǥ��) + Enter �Է� //buffering + echo
//getch //�Է°� (Enter ����) ǥ�� ���� //
//getche //�Է°� (Enter ����) ǥ�� //echo

// buffering�� enter�Է� ��ٸ�
// echo�� �Է°� �������� ����

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

//12.3���ڿ� ����� ���̺귯��

//scanf�� �����̽� ���� �ձ����� ����

#if 0
int main() {
	char str[100];

	gets(str, 99); //getstring

	printf("%s\n", str);
}
#endif

//12.4 ����ó�� ���̺귯��
#include<ctype.h>
//isalpha //���ĺ�����
//isupper //�빮������
//islower //�ҹ�������
//isdigit //��������
//isalnum //���ĺ� Ȥ�� ��������
//isxdigit 16������ ���Ǵ� ����,��������
//isspace ���� ��
//ispunct ��ǥ����
//isprintf ���� ���̴� ��������
//iscntrl �����(ex)ctrl c)
//isascii

//toupper : �빮�ڷ� �ٲ���
//tolower : �ҹ��ڷ� �ٲ���

//printf("%c\n",toupper(ch);
#if 0
int main() {
	int ch;
	ch = getche();
	if (isalpha(ch) == 1) {
		printf("%c�� ���ĺ��Դϴ�\n", ch);
	}
}
#endif

//12.5 ���ڿ� ó�� �Լ�
#include<string.h>
//p.53..
#if 0
int main() {
	char str[100];
	gets(str, 99);
	//strlen : string length
	printf("���ڿ����� %d\n", strlen(str));

	//strcmp //string compare
	//�� ���ڿ��� ������ ��
	//������ 0�� ��ȯ **����
	//�ٸ��� �������� ��ĭ ������ �������� ��ȯ //����,��� �� �� ����
	char str2[100];
	gets(str2, 99);
	printf("���ڿ� �񱳰�� %d\n", strcmp(str, str2));
}
#endif

#if 1
int main() {
	char str[100], str2[100];
	// strcpy : string copy
	// str2 = str �迭���簡 �Ұ����ϱ� ������ strcpy�� ����ؾߵ�
	strcpy(str2, str);

	//strcat : string concatenation
	//���ڿ� ���̱�
	strcat(str, str2);
	//str�̶� str2�� ���ڿ��� �ٿ�����

	//strchr
	//���ڿ����� ������ ��ġ�� ã�´�
	char* pa = strchr(str, 'e');
	//��½�Ű�� e���� �� �����

	//strstr
	//���ڿ� a���� ���ڿ� b�� ��ġ�� ã�´�
	char* b = strstr(str, "llo");
	//llo���

}
#endif

//~537�ΰ�