#include <stdio.h>
#include <string.h>
#include <windows.h>
int main(void) {

	char name[200];
	char Snew[500] = "Привет, ";
	printf("Как тебя зовут?\n");
	scanf("%s", name);
	for (int i = 1; name[i]; i++) {
		name[i] = toupper(name[i]);
	}
	name[0] = tolower(name[0]);
	strcat(Snew, name);
	printf("%s!\n", Snew);
}