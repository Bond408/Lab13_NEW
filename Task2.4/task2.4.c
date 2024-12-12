#include <stdio.h>
#include <string.h>
#include <windows.h>
int main(void) {
    char name[20];
    char sign[4] = "!";
    char Snew[50] = "Привет, ";

    printf("Как тебя зовут?\n");
    scanf("%s", name);
    strcat(Snew, name);
    strcat(Snew, sign);

    for (int i = 0; Snew[i]; i++) {
        if (Snew[i + 1] == ' ' || Snew[i + 1] == '\0') { // Проверяем, если следующая буква — конец имени
            for (int j = strlen(Snew); j > i; j--) {    // Сдвигаем строку вправо
                Snew[j + 1] = Snew[j];
            }
            Snew[i] = '_'; // Вставляем символ подчеркивания
            i++;           // Пропускаем добавленный символ
        }
    }
    printf("%s!\n", Snew);
}