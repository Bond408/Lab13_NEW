#include <stdio.h>
#include <string.h>
int main(void) {
	char sign = '!';
	char name[20];
	char Snew[1000] = "Hello, ";
	printf("��� ���� �����?\n");
	scanf("%s", name);
	strcat(Snew, name);

	for (int i = 0; Snew[i]; i++)
		Snew[i] = toupper(Snew[i]);

	for (int i = 0; strlen(Snew) < 40; i++)
		strncat(Snew, &sign, 1);
	printf("%s\n", Snew);
	printf("����� ������: %d\n", strlen(Snew));
}