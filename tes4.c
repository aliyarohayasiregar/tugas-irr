#include <stdio.h>
#include<conio.h>
#include <string.h>

void ubahHuruf(char *string, char target, char pengganti) {
    int length = strlen(string);
    for (int i = 0; i < length; i++) {
        if (string[i] == target) {
            string[i] = pengganti;
        }
    }
}

int main() {
    char text[] = "sukiharji";
    char target = 'i';
    char pengganti = 'o';

    printf("Sebelum: %s\n", text);
    ubahHuruf(text, target, pengganti);
    printf("Sesudah: %s\n", text);

    getch();
}
