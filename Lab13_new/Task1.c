#include <stdio.h>
#include <string.h>
#include <windows.h>
int main(void) {
	char name[10];
	char Snew[30] = "������, ";
	printf("��� ���� �����?\n");
	scanf("%s", name);
	strcat(Snew, name);
	printf("%s!\n", Snew);

}