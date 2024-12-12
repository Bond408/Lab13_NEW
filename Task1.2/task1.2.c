#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void) {
	char name[10];
	char Snew[50] = "Hello, ";
	printf("Как тебя зовут?\n");
	scanf("%s", name);
	strcat(Snew, name);

	for (int i = 0; i < 50; i++)
		Snew[i] = toupper(Snew[i]);

	printf("%s!\n", Snew);

}