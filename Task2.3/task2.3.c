#include <stdio.h>
#include <string.h>
#include <windows.h>
int main(void) {
	char a;
	char name[200];
	char Snew[500] = "Привет, ";
	printf("Как тебя зовут?\n");
	scanf("%s", name);
	a = name[0];
	name[0] = name[1];
	name[1] = a;
	strcat(Snew, name);
	printf("%s!\n", Snew);
}