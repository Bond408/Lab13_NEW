#include <stdio.h>
#include <string.h>
#include <windows.h>
int main(void) {

	char name[10];
	char Snew[30] = "������, ";
	printf("��� ���� �����?\n");
	scanf("%s", name);
	strcat(Snew, name);
	int len = strlen(name);
	char last = name[len - 1];
	printf("%s!\n", Snew);
	strncat(Snew, &last, 1); // ��������� ��������� ����� �����
	printf("%s!\n", Snew);
}