#include <stdio.h>
#include <string.h>
int main(void) {
	int c = 0;
	char Snew[500] = "Меня зовут Алексей";
	int a = strlen(Snew);
	for (int i = a - 1; i >= 0; i--) {
		if (Snew[i] == ' ') {
			break;
		}
		c++;
	}
	for (int i = 0; Snew[i]; i++) {

		if (Snew[i] == ' ') {

			a -= i;
			break;

		}
	}
	for (int i = 0; Snew[i]; i++) {

		if (Snew[i] == ' ') {
			c++;
		}
	}
	a -= c;
	printf("%d\n", a);
}