#include <stdio.h>
#include<conio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1)
        return false;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n;
    printf("Masukkan Angka: ");
    scanf("%d", &n);

    if (isPrime(n)) {
        printf("%d adalah bilangan prima.\n", n);
    } else {
        printf("%d bukan bilangan prima.\n", n);
    }

getch();

}
